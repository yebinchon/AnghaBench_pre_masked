
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int suspend_state_t ;
struct TYPE_2__ {int pmcsr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int,int,int) ;

__attribute__((used)) static int FUNC_4(suspend_state_t VAR_4)
{
 int VAR_5;

 FUNC_2(&VAR_3->pmcsr, VAR_1);



 VAR_5 = FUNC_3((FUNC_1(&VAR_3->pmcsr) & VAR_1) == 0,
     10000, 10) ? 0 : -VAR_0;
 if (VAR_5)
  FUNC_0(VAR_2, "tired waiting for SLP bit to clear\n");
 return VAR_5;
}
