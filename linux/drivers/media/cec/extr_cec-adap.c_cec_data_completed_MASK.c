
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cec_data {int completed; int msg; scalar_t__ fh; int c; scalar_t__ blocking; int xfer_list; } ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cec_data*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct cec_data *VAR_0)
{
 if (VAR_0->fh)
  FUNC_3(&VAR_0->xfer_list);

 if (VAR_0->blocking) {




  VAR_0->completed = 1;
  FUNC_1(&VAR_0->c);
 } else {




  if (VAR_0->fh)
   FUNC_0(VAR_0->fh, &VAR_0->msg);
  FUNC_2(VAR_0);
 }
}
