
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int u; int i; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 scalar_t__ FUNC_1 (int*,int,int *,size_t*,int ,int ) ;

void
FUNC_2(void)
{
 size_t VAR_8;
 int VAR_9[4];

 VAR_9[0] = VAR_0;
 VAR_9[1] = VAR_4;
 VAR_9[2] = VAR_2;
 VAR_9[3] = VAR_1;

 VAR_8 = sizeof VAR_6.i;
 if (FUNC_1(VAR_9, 4, &VAR_6.i, &VAR_8, 0, 0) < 0) {
  FUNC_0("sysctl getting ipstat failed");
 }
 VAR_9[2] = VAR_3;
 VAR_9[3] = VAR_5;

 VAR_8 = sizeof VAR_6.u;
 if (FUNC_1(VAR_9, 4, &VAR_6.u, &VAR_8, 0, 0) < 0) {
  FUNC_0("sysctl getting udpstat failed");
 }
 VAR_7 = VAR_6;
}
