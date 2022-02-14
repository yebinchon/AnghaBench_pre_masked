
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {int sin_family; TYPE_1__ sin_addr; int sin_port; } ;
struct sockaddr {int dummy; } ;
struct TYPE_4__ {int s_addr; } ;
struct params {int s; TYPE_2__ dst; int port; } ;
typedef int s_in ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sockaddr_in*,int ,int) ;
 int FUNC_3 (int ,int ,int ) ;

int FUNC_4(struct params *VAR_3)
{
 struct sockaddr_in VAR_4;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.sin_family = VAR_1;
 VAR_4.sin_port = FUNC_1(VAR_3->port);
 VAR_4.sin_addr.s_addr = VAR_3->dst.s_addr;

 if ((VAR_3->s = FUNC_3(VAR_4.sin_family, VAR_2, VAR_0)) == -1)
  return -1;

 if (FUNC_0(VAR_3->s, (struct sockaddr*) &VAR_4, sizeof(VAR_4)) == -1)
  return -1;

 return 0;
}
