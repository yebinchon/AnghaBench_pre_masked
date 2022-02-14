
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int ss_family; } ;
struct sockaddr_in6 {int sin6_port; int sin6_addr; } ;
struct sockaddr_in {int sin_port; int sin_addr; } ;




 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int *,int ,int ) ;

void FUNC_2(struct sockaddr_storage *VAR_0, char *VAR_1)
{
 struct sockaddr_in6 *VAR_2;
 struct sockaddr_in *VAR_3;

 switch (VAR_0->ss_family) {
 case 129:
  VAR_3 = (struct sockaddr_in *)VAR_0;
  FUNC_1("%s IPV4 %pI4: %u(0x%04X)\n",
   VAR_1, &VAR_3->sin_addr,
   FUNC_0(VAR_3->sin_port),
   FUNC_0(VAR_3->sin_port));
  break;
 case 128:
  VAR_2 = (struct sockaddr_in6 *)VAR_0;
  FUNC_1("%s IPV6 %pI6: %u(0x%04X)\n",
   VAR_1, &VAR_2->sin6_addr,
   FUNC_0(VAR_2->sin6_port),
   FUNC_0(VAR_2->sin6_port));
  break;
 default:
  break;
 }
}
