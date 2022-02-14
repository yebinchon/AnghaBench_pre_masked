
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_dev {int bin_bo_lock; int bin_bo_kref; scalar_t__ bin_bo; } ;


 int FUNC_0 (struct vc4_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct vc4_dev *VAR_0, bool *VAR_1)
{
 int VAR_2 = 0;

 FUNC_2(&VAR_0->bin_bo_lock);

 if (VAR_1 && *VAR_1)
  goto complete;

 if (VAR_0->bin_bo)
  FUNC_1(&VAR_0->bin_bo_kref);
 else
  VAR_2 = FUNC_0(VAR_0);

 if (VAR_2 == 0 && VAR_1)
  *VAR_1 = 1;

complete:
 FUNC_3(&VAR_0->bin_bo_lock);

 return VAR_2;
}
