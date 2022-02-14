
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_dev {int usdev_lock; int pending_mmaps; int pending_lock; int mmap_offset_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rxe_dev*) ;
 int FUNC_3 (struct rxe_dev*) ;
 int FUNC_4 (struct rxe_dev*) ;
 int FUNC_5 (struct rxe_dev*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct rxe_dev *VAR_0)
{
 int VAR_1;


 FUNC_3(VAR_0);

 VAR_1 = FUNC_5(VAR_0);
 if (VAR_1)
  goto err1;

 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1)
  goto err2;


 FUNC_6(&VAR_0->mmap_offset_lock);
 FUNC_6(&VAR_0->pending_lock);
 FUNC_0(&VAR_0->pending_mmaps);

 FUNC_1(&VAR_0->usdev_lock);

 return 0;

err2:
 FUNC_2(VAR_0);
err1:
 return VAR_1;
}
