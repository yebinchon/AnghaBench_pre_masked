
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct dpu_encoder_virt {int debugfs_root; } ;


 int FUNC_0 (int ) ;
 struct dpu_encoder_virt* FUNC_1 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_2(struct drm_encoder *VAR_0)
{
 struct dpu_encoder_virt *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->debugfs_root);
}
