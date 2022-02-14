
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * lbr_exclusive; scalar_t__ lbr_pt_coexist; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 TYPE_1__ VAR_4 ;

int FUNC_6(unsigned int VAR_5)
{
 int VAR_6;





 if (VAR_4.lbr_pt_coexist && VAR_5 == VAR_3)
  return 0;

 if (!FUNC_2(&VAR_4.lbr_exclusive[VAR_5])) {
  FUNC_4(&VAR_2);
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4.lbr_exclusive); VAR_6++) {
   if (VAR_6 != VAR_5 && FUNC_3(&VAR_4.lbr_exclusive[VAR_6]))
    goto fail_unlock;
  }
  FUNC_1(&VAR_4.lbr_exclusive[VAR_5]);
  FUNC_5(&VAR_2);
 }

 FUNC_1(&VAR_1);
 return 0;

fail_unlock:
 FUNC_5(&VAR_2);
 return -VAR_0;
}
