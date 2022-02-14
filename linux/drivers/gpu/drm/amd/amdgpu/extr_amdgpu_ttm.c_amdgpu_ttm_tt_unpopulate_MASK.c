
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_tt {int page_flags; int bdev; int sg; } ;
struct amdgpu_ttm_tt {int ttm; scalar_t__ userptr; } ;
struct amdgpu_device {int dev; scalar_t__ need_swiotlb; } ;


 int VAR_0 ;
 struct amdgpu_device* FUNC_0 (int ) ;
 int FUNC_1 (struct ttm_tt*,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct ttm_tt *VAR_1)
{
 struct amdgpu_device *VAR_2;
 struct amdgpu_ttm_tt *VAR_3 = (void *)VAR_1;
 bool VAR_4 = !!(VAR_1->page_flags & VAR_0);

 if (VAR_3 && VAR_3->userptr) {
  FUNC_1(VAR_1, ((void*)0));
  FUNC_2(VAR_1->sg);
  VAR_1->page_flags &= ~VAR_0;
  return;
 }

 if (VAR_4)
  return;

 VAR_2 = FUNC_0(VAR_1->bdev);
 FUNC_5(VAR_2->dev, &VAR_3->ttm);
}
