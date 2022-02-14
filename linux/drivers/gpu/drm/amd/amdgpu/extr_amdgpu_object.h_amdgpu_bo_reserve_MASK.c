
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_device {int dev; } ;
struct TYPE_2__ {int bdev; } ;
struct amdgpu_bo {TYPE_1__ tbo; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int,int *) ;
 struct amdgpu_device* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,struct amdgpu_bo*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline int FUNC_4(struct amdgpu_bo *VAR_1, bool VAR_2)
{
 struct amdgpu_device *VAR_3 = FUNC_1(VAR_1->tbo.bdev);
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_1->tbo, !VAR_2, 0, ((void*)0));
 if (FUNC_3(VAR_4 != 0)) {
  if (VAR_4 != -VAR_0)
   FUNC_2(VAR_3->dev, "%p reserve failed\n", VAR_1);
  return VAR_4;
 }
 return 0;
}
