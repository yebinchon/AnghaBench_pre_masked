
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {int has_dx; int fifo; int fman; int * cman; int bdev; scalar_t__ has_mob; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int * FUNC_4 (struct vmw_private*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct vmw_private*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct vmw_private*,int *) ;
 int FUNC_11 (struct vmw_private*,int *) ;
 int FUNC_12 (struct vmw_private*) ;
 int FUNC_13 (struct vmw_private*) ;

__attribute__((used)) static int FUNC_14(struct vmw_private *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_10(VAR_1, &VAR_1->fifo);
 if (FUNC_3(VAR_2 != 0)) {
  FUNC_0("Unable to initialize FIFO.\n");
  return VAR_2;
 }
 FUNC_9(VAR_1->fman);
 VAR_1->cman = FUNC_4(VAR_1);
 if (FUNC_1(VAR_1->cman)) {
  VAR_1->cman = ((void*)0);
  VAR_1->has_dx = 0;
 }

 VAR_2 = FUNC_13(VAR_1);
 if (VAR_2)
  goto out_no_mob;

 VAR_2 = FUNC_7(VAR_1);
 if (FUNC_3(VAR_2 != 0))
  goto out_no_query_bo;

 return 0;

out_no_query_bo:
 if (VAR_1->cman)
  FUNC_6(VAR_1->cman);
 if (VAR_1->has_mob) {
  (void) FUNC_2(&VAR_1->bdev, VAR_0);
  FUNC_12(VAR_1);
 }
 if (VAR_1->cman)
  FUNC_5(VAR_1->cman);
out_no_mob:
 FUNC_8(VAR_1->fman);
 FUNC_11(VAR_1, &VAR_1->fifo);
 return VAR_2;
}
