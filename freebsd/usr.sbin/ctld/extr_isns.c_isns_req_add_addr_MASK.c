
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct isns_req {int dummy; } ;
struct addrinfo {TYPE_1__* ai_addr; } ;
typedef int buf ;
struct TYPE_2__ {int sa_family; } ;




 int FUNC_0 (struct isns_req*,int ,int,int*) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int*,int *,int) ;
 int FUNC_3 (int*,int ,int) ;

void
FUNC_4(struct isns_req *VAR_0, uint32_t VAR_1, struct addrinfo *VAR_2)
{
 struct sockaddr_in *VAR_3;
 struct sockaddr_in6 *VAR_4;
 uint8_t VAR_5[16];

 switch (VAR_2->ai_addr->sa_family) {
 case 129:
  VAR_3 = (struct sockaddr_in *)(void *)VAR_2->ai_addr;
  FUNC_3(VAR_5, 0, 10);
  VAR_5[10] = 0xff;
  VAR_5[11] = 0xff;
  FUNC_2(&VAR_5[12], &VAR_3->sin_addr, sizeof(VAR_3->sin_addr));
  FUNC_0(VAR_0, VAR_1, sizeof(VAR_5), VAR_5);
  break;
 case 128:
  VAR_4 = (struct sockaddr_in6 *)(void *)VAR_2->ai_addr;
  FUNC_0(VAR_0, VAR_1, sizeof(VAR_4->sin6_addr), &VAR_4->sin6_addr);
  break;
 default:
  FUNC_1(1, "Unsupported address family %d",
      VAR_2->ai_addr->sa_family);
 }
}
