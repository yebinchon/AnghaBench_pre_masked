
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hfi1_ctxtdata {TYPE_2__* dd; } ;
struct TYPE_4__ {scalar_t__ freectxts; scalar_t__ num_user_contexts; } ;
struct TYPE_3__ {int sps_ctxts; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct hfi1_ctxtdata*) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct hfi1_ctxtdata *VAR_2)
{
 FUNC_2(&VAR_0);
 VAR_1.sps_ctxts--;
 if (++VAR_2->dd->freectxts == VAR_2->dd->num_user_contexts)
  FUNC_0(VAR_2->dd);
 FUNC_3(&VAR_0);

 FUNC_1(VAR_2);
}
