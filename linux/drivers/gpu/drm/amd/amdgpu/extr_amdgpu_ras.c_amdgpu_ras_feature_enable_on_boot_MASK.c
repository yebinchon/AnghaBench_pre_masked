
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ras_common_if {int block; } ;
struct amdgpu_ras {int flags; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct amdgpu_device*,struct ras_common_if*,int) ;
 int FUNC_2 (struct amdgpu_device*,struct ras_common_if*,int) ;
 struct amdgpu_ras* FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct amdgpu_device *VAR_2,
  struct ras_common_if *VAR_3, bool VAR_4)
{
 struct amdgpu_ras *VAR_5 = FUNC_3(VAR_2);
 int VAR_6;

 if (!VAR_5)
  return -VAR_1;

 if (VAR_5->flags & VAR_0) {
  if (VAR_4) {






   VAR_6 = FUNC_2(VAR_2, VAR_3, 1);




   if (VAR_6 == -VAR_1) {
    VAR_6 = FUNC_1(VAR_2, VAR_3, 1);
    if (!VAR_6)
     FUNC_0("RAS INFO: %s setup object\n",
      FUNC_4(VAR_3->block));
   }
  } else {

   VAR_6 = FUNC_1(VAR_2, VAR_3, 1);
   if (VAR_6)
    return VAR_6;

   VAR_6 = FUNC_2(VAR_2, VAR_3, 0);
  }
 } else
  VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4);

 return VAR_6;
}
