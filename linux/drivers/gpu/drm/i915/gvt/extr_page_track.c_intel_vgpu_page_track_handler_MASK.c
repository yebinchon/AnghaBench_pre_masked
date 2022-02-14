
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct intel_vgpu_page_track {int (* handler ) (struct intel_vgpu_page_track*,int,void*,unsigned int) ;} ;
struct intel_vgpu {int vgpu_lock; int failsafe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct intel_vgpu*,int) ;
 struct intel_vgpu_page_track* FUNC_2 (struct intel_vgpu*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct intel_vgpu_page_track*,int,void*,unsigned int) ;
 scalar_t__ FUNC_6 (int ) ;

int FUNC_7(struct intel_vgpu *VAR_2, u64 VAR_3,
  void *VAR_4, unsigned int VAR_5)
{
 struct intel_vgpu_page_track *VAR_6;
 int VAR_7 = 0;

 FUNC_3(&VAR_2->vgpu_lock);

 VAR_6 = FUNC_2(VAR_2, VAR_3 >> VAR_1);
 if (!VAR_6) {
  VAR_7 = -VAR_0;
  goto out;
 }

 if (FUNC_6(VAR_2->failsafe)) {

  FUNC_1(VAR_2, VAR_3 >> VAR_1);
 } else {
  VAR_7 = VAR_6->handler(VAR_6, VAR_3, VAR_4, VAR_5);
  if (VAR_7)
   FUNC_0("guest page write error, gpa %llx\n", VAR_3);
 }

out:
 FUNC_4(&VAR_2->vgpu_lock);
 return VAR_7;
}
