
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct intel_vgpu {int vgpu_lock; scalar_t__ failsafe; struct intel_gvt* gvt; } ;
struct intel_gvt {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct intel_vgpu*,int ,void*,unsigned int,int) ;
 int FUNC_4 (char*,unsigned int,unsigned int) ;
 int FUNC_5 (struct intel_vgpu*,int ,void*,unsigned int) ;
 int FUNC_6 (struct intel_gvt*,unsigned int) ;
 int FUNC_7 (struct intel_vgpu*,unsigned int,void*,unsigned int) ;
 unsigned int FUNC_8 (struct intel_vgpu*,int ) ;
 int FUNC_9 (struct intel_vgpu*,unsigned int,void*,unsigned int,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (struct intel_gvt*,unsigned int) ;
 int FUNC_13 (struct intel_gvt*,unsigned int) ;

int FUNC_14(struct intel_vgpu *VAR_1, u64 VAR_2,
  void *VAR_3, unsigned int VAR_4)
{
 struct intel_gvt *VAR_5 = VAR_1->gvt;
 unsigned int VAR_6 = 0;
 int VAR_7 = -VAR_0;

 if (VAR_1->failsafe) {
  FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, 0);
  return 0;
 }

 FUNC_10(&VAR_1->vgpu_lock);

 VAR_6 = FUNC_8(VAR_1, VAR_2);

 if (FUNC_1(VAR_4 > 8))
  goto err;

 if (FUNC_12(VAR_5, VAR_6)) {
  if (FUNC_1(!FUNC_0(VAR_6, 4) && !FUNC_0(VAR_6, 8)))
   goto err;
  if (FUNC_1(VAR_4 != 4 && VAR_4 != 8))
   goto err;
  if (FUNC_1(!FUNC_12(VAR_5, VAR_6 + VAR_4 - 1)))
   goto err;

  VAR_7 = FUNC_7(VAR_1, VAR_6,
    VAR_3, VAR_4);
  if (VAR_7)
   goto err;
  goto out;
 }

 if (FUNC_2(!FUNC_13(VAR_5, VAR_6))) {
  VAR_7 = FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4);
  goto out;
 }

 VAR_7 = FUNC_9(VAR_1, VAR_6, VAR_3, VAR_4, 0);
 if (VAR_7 < 0)
  goto err;

 FUNC_6(VAR_5, VAR_6);
 VAR_7 = 0;
 goto out;
err:
 FUNC_4("fail to emulate MMIO write %08x len %d\n", VAR_6,
       VAR_4);
out:
 FUNC_11(&VAR_1->vgpu_lock);
 return VAR_7;
}
