
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct vc4_shader_state {int dummy; } ;
struct vc4_exec_info {void* shader_rec_u; void* uniforms_u; int shader_state_size; scalar_t__ shader_rec_size; scalar_t__ uniforms_size; int bin_dep_seqno; int bin_bo_used; scalar_t__ found_tile_binning_mode_config_packet; TYPE_1__* exec_bo; scalar_t__ uniforms_p; scalar_t__ uniforms_v; scalar_t__ shader_rec_p; scalar_t__ shader_rec_v; void* bin_u; scalar_t__ ct0ca; int unref_list; void* shader_state; struct drm_vc4_submit_cl* args; } ;
struct vc4_dev {int dummy; } ;
struct TYPE_3__ {scalar_t__ paddr; scalar_t__ vaddr; int base; } ;
struct vc4_bo {TYPE_1__ base; } ;
struct drm_vc4_submit_cl {scalar_t__ bin_cl_size; scalar_t__ shader_rec_size; scalar_t__ uniforms_size; int shader_rec_count; int uniforms; int shader_rec; int bin_cl; } ;
struct drm_device {int dummy; } ;
struct TYPE_4__ {int unref_head; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct vc4_bo*) ;
 int FUNC_3 (struct vc4_bo*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (void*,int ,scalar_t__) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (scalar_t__,int,int ) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (scalar_t__,int) ;
 TYPE_2__* FUNC_9 (int *) ;
 struct vc4_dev* FUNC_10 (struct drm_device*) ;
 int FUNC_11 (int ) ;
 struct vc4_bo* FUNC_12 (struct drm_device*,scalar_t__,int,int ) ;
 int FUNC_13 (struct vc4_dev*,int *) ;
 int FUNC_14 (struct drm_device*,scalar_t__,void*,struct vc4_exec_info*) ;
 int FUNC_15 (struct drm_device*,struct vc4_exec_info*) ;
 int FUNC_16 (struct drm_device*,int ,unsigned long long,int) ;

__attribute__((used)) static int
FUNC_17(struct drm_device *VAR_6, struct vc4_exec_info *VAR_7)
{
 struct drm_vc4_submit_cl *VAR_8 = VAR_7->args;
 struct vc4_dev *VAR_9 = FUNC_10(VAR_6);
 void *VAR_10 = ((void*)0);
 void *VAR_11;
 int VAR_12 = 0;
 uint32_t VAR_13 = 0;
 uint32_t VAR_14 = FUNC_8(VAR_13 + VAR_8->bin_cl_size,
          16);
 uint32_t VAR_15 = VAR_14 + VAR_8->shader_rec_size;
 uint32_t VAR_16 = VAR_15 + VAR_8->uniforms_size;
 uint32_t VAR_17 = VAR_16 + (sizeof(struct vc4_shader_state) *
       VAR_8->shader_rec_count);
 struct vc4_bo *VAR_18;

 if (VAR_14 < VAR_8->bin_cl_size ||
     VAR_15 < VAR_14 ||
     VAR_16 < VAR_15 ||
     VAR_8->shader_rec_count >= (VAR_4 /
       sizeof(struct vc4_shader_state)) ||
     VAR_17 < VAR_16) {
  FUNC_0("overflow in exec arguments\n");
  VAR_12 = -VAR_1;
  goto fail;
 }
 VAR_10 = FUNC_6(VAR_17, 1, VAR_3);
 if (!VAR_10) {
  FUNC_1("Failed to allocate storage for copying "
     "in bin/render CLs.\n");
  VAR_12 = -VAR_2;
  goto fail;
 }
 VAR_11 = VAR_10 + VAR_13;
 VAR_7->shader_rec_u = VAR_10 + VAR_14;
 VAR_7->uniforms_u = VAR_10 + VAR_15;
 VAR_7->shader_state = VAR_10 + VAR_16;
 VAR_7->shader_state_size = VAR_8->shader_rec_count;

 if (FUNC_4(VAR_11,
      FUNC_11(VAR_8->bin_cl),
      VAR_8->bin_cl_size)) {
  VAR_12 = -VAR_0;
  goto fail;
 }

 if (FUNC_4(VAR_7->shader_rec_u,
      FUNC_11(VAR_8->shader_rec),
      VAR_8->shader_rec_size)) {
  VAR_12 = -VAR_0;
  goto fail;
 }

 if (FUNC_4(VAR_7->uniforms_u,
      FUNC_11(VAR_8->uniforms),
      VAR_8->uniforms_size)) {
  VAR_12 = -VAR_0;
  goto fail;
 }

 VAR_18 = FUNC_12(VAR_6, VAR_16, 1, VAR_5);
 if (FUNC_2(VAR_18)) {
  FUNC_1("Couldn't allocate BO for binning\n");
  VAR_12 = FUNC_3(VAR_18);
  goto fail;
 }
 VAR_7->exec_bo = &VAR_18->base;

 FUNC_7(&FUNC_9(&VAR_7->exec_bo->base)->unref_head,
        &VAR_7->unref_list);

 VAR_7->ct0ca = VAR_7->exec_bo->paddr + VAR_13;

 VAR_7->bin_u = VAR_11;

 VAR_7->shader_rec_v = VAR_7->exec_bo->vaddr + VAR_14;
 VAR_7->shader_rec_p = VAR_7->exec_bo->paddr + VAR_14;
 VAR_7->shader_rec_size = VAR_8->shader_rec_size;

 VAR_7->uniforms_v = VAR_7->exec_bo->vaddr + VAR_15;
 VAR_7->uniforms_p = VAR_7->exec_bo->paddr + VAR_15;
 VAR_7->uniforms_size = VAR_8->uniforms_size;

 VAR_12 = FUNC_14(VAR_6,
      VAR_7->exec_bo->vaddr + VAR_13,
      VAR_11,
      VAR_7);
 if (VAR_12)
  goto fail;

 VAR_12 = FUNC_15(VAR_6, VAR_7);
 if (VAR_12)
  goto fail;

 if (VAR_7->found_tile_binning_mode_config_packet) {
  VAR_12 = FUNC_13(VAR_9, &VAR_7->bin_bo_used);
  if (VAR_12)
   goto fail;
 }





 VAR_12 = FUNC_16(VAR_6, VAR_7->bin_dep_seqno, ~0ull, 1);

fail:
 FUNC_5(VAR_10);
 return VAR_12;
}
