
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void (* action ) (int,int,int,int,struct nlm_fmn_msg*,void*) ;void* arg; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 () ;

int FUNC_2(int VAR_1, int VAR_2,
 void (*VAR_3)(int, int, int, int, struct nlm_fmn_msg *, void *),
 void *VAR_4)
{
 int VAR_5;

 for (VAR_5 = VAR_1; VAR_5 <= VAR_2; VAR_5++) {
  VAR_0[VAR_5].arg = VAR_4;
  FUNC_1();
  VAR_0[VAR_5].action = VAR_3;
 }
 FUNC_0("Registered FMN msg handler for stnid %d-%d\n",
   VAR_1, VAR_2);
 return 0;
}
