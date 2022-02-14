
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bdev; } ;
struct qxl_device {TYPE_1__ mman; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct qxl_device *VAR_2)
{
 FUNC_1(&VAR_2->mman.bdev, VAR_1);
 FUNC_1(&VAR_2->mman.bdev, VAR_0);
 FUNC_2(&VAR_2->mman.bdev);
 FUNC_0("qxl: ttm finalized\n");
}
