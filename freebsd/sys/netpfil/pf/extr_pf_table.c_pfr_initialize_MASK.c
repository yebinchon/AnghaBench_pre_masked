
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pfr_kentry {int dummy; } ;
struct TYPE_2__ {int limit; int zone; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,int *,int *,int *,int *,int ,int ) ;

void
FUNC_1(void)
{

 VAR_4 = FUNC_0("pf table entries",
     sizeof(struct pfr_kentry), ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_2,
     0);
 VAR_3[VAR_1].zone = VAR_4;
 VAR_3[VAR_1].limit = VAR_0;
}
