
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttm_tt {int num_pages; int bdev; } ;
struct TYPE_3__ {int num_pages; } ;
struct TYPE_4__ {TYPE_1__ ttm; } ;
struct amdgpu_ttm_tt {scalar_t__ offset; TYPE_2__ ttm; scalar_t__ userptr; } ;
struct amdgpu_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 int FUNC_1 (struct amdgpu_device*,scalar_t__,int ) ;
 struct amdgpu_device* FUNC_2 (int ) ;
 int FUNC_3 (struct ttm_tt*) ;

__attribute__((used)) static int FUNC_4(struct ttm_tt *VAR_1)
{
 struct amdgpu_device *VAR_2 = FUNC_2(VAR_1->bdev);
 struct amdgpu_ttm_tt *VAR_3 = (void *)VAR_1;
 int VAR_4;


 if (VAR_3->userptr)
  FUNC_3(VAR_1);

 if (VAR_3->offset == VAR_0)
  return 0;


 VAR_4 = FUNC_1(VAR_2, VAR_3->offset, VAR_1->num_pages);
 if (VAR_4)
  FUNC_0("failed to unbind %lu pages at 0x%08llX\n",
     VAR_3->ttm.ttm.num_pages, VAR_3->offset);
 return VAR_4;
}
