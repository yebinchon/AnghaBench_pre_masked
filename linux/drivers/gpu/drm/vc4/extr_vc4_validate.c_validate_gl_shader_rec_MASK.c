
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct vc4_validated_shader_info {int is_threaded; scalar_t__ uniforms_src_size; int num_texture_samples; int uniforms_size; int num_uniform_addr_offsets; int* uniform_addr_offsets; int * texture_samples; } ;
struct vc4_shader_state {int addr; int max_index; } ;
struct vc4_exec_info {int shader_rec_size; int* shader_rec_u; int bo_count; scalar_t__ uniforms_size; int* uniforms_u; void* uniforms_v; int uniforms_p; int bin_dep_seqno; struct drm_gem_cma_object** bo; void* shader_rec_v; } ;
struct TYPE_4__ {int size; } ;
struct drm_gem_cma_object {int paddr; TYPE_2__ base; } ;
struct drm_device {int dummy; } ;
struct TYPE_3__ {int write_seqno; struct vc4_validated_shader_info* validated_shader; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (void*,void*,int) ;
 int FUNC_6 (struct vc4_exec_info*,void*,int *,int,int) ;
 int FUNC_7 (int,int) ;
 TYPE_1__* FUNC_8 (TYPE_2__*) ;
 struct drm_gem_cma_object* FUNC_9 (struct vc4_exec_info*,int) ;

__attribute__((used)) static int
FUNC_10(struct drm_device *VAR_2,
         struct vc4_exec_info *VAR_3,
         struct vc4_shader_state *VAR_4)
{
 uint32_t *VAR_5;
 void *VAR_6, *VAR_7;
 static const uint32_t VAR_8[] = {
  4,
  16,
  28,
 };
 uint32_t VAR_9 = FUNC_0(VAR_8);
 struct drm_gem_cma_object *VAR_10[FUNC_0(VAR_8) + 8];
 uint32_t VAR_11, VAR_12, VAR_13;
 int VAR_14;

 VAR_11 = VAR_4->addr & 0x7;
 if (VAR_11 == 0)
  VAR_11 = 8;
 VAR_13 = FUNC_3(VAR_4->addr);

 VAR_12 = FUNC_0(VAR_8) + VAR_11;
 if (VAR_12 * 4 > VAR_3->shader_rec_size) {
  FUNC_2("overflowed shader recs reading %d handles "
     "from %d bytes left\n",
     VAR_12, VAR_3->shader_rec_size);
  return -VAR_0;
 }
 VAR_5 = VAR_3->shader_rec_u;
 VAR_3->shader_rec_u += VAR_12 * 4;
 VAR_3->shader_rec_size -= VAR_12 * 4;

 if (VAR_13 > VAR_3->shader_rec_size) {
  FUNC_2("overflowed shader recs copying %db packet "
     "from %d bytes left\n",
     VAR_13, VAR_3->shader_rec_size);
  return -VAR_0;
 }
 VAR_6 = VAR_3->shader_rec_u;
 VAR_7 = VAR_3->shader_rec_v;
 FUNC_5(VAR_7, VAR_6, VAR_13);
 VAR_3->shader_rec_u += VAR_13;





 FUNC_1(FUNC_7(VAR_13, 16) - VAR_13 > VAR_12 * 4);
 VAR_3->shader_rec_v += FUNC_7(VAR_13, 16);
 VAR_3->shader_rec_size -= VAR_13;

 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
  if (VAR_5[VAR_14] > VAR_3->bo_count) {
   FUNC_2("Shader handle %d too big\n", VAR_5[VAR_14]);
   return -VAR_0;
  }

  VAR_10[VAR_14] = VAR_3->bo[VAR_5[VAR_14]];
  if (!VAR_10[VAR_14])
   return -VAR_0;
 }
 for (VAR_14 = VAR_9; VAR_14 < VAR_12; VAR_14++) {
  VAR_10[VAR_14] = FUNC_9(VAR_3, VAR_5[VAR_14]);
  if (!VAR_10[VAR_14])
   return -VAR_0;
 }

 if (((*(uint16_t *)VAR_6 & VAR_1) == 0) !=
     FUNC_8(&VAR_10[0]->base)->validated_shader->is_threaded) {
  FUNC_2("Thread mode of CL and FS do not match\n");
  return -VAR_0;
 }

 if (FUNC_8(&VAR_10[1]->base)->validated_shader->is_threaded ||
     FUNC_8(&VAR_10[2]->base)->validated_shader->is_threaded) {
  FUNC_2("cs and vs cannot be threaded\n");
  return -VAR_0;
 }

 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
  struct vc4_validated_shader_info *VAR_15;
  uint32_t VAR_16 = VAR_8[VAR_14];
  uint32_t VAR_17 = *(uint32_t *)(VAR_6 + VAR_16);
  uint32_t *VAR_18;
  void *VAR_19;
  uint32_t VAR_20, VAR_21;

  *(uint32_t *)(VAR_7 + VAR_16) = VAR_10[VAR_14]->paddr + VAR_17;

  if (VAR_17 != 0) {
   FUNC_2("Shaders must be at offset 0 of "
      "the BO.\n");
   return -VAR_0;
  }

  VAR_15 = FUNC_8(&VAR_10[VAR_14]->base)->validated_shader;
  if (!VAR_15)
   return -VAR_0;

  if (VAR_15->uniforms_src_size >
      VAR_3->uniforms_size) {
   FUNC_2("Uniforms src buffer overflow\n");
   return -VAR_0;
  }

  VAR_18 = VAR_3->uniforms_u;
  VAR_19 = (VAR_18 +
      VAR_15->num_texture_samples);

  FUNC_5(VAR_3->uniforms_v, VAR_19,
         VAR_15->uniforms_size);

  for (VAR_20 = 0;
       VAR_20 < VAR_15->num_texture_samples;
       VAR_20++) {
   if (!FUNC_6(VAR_3,
           VAR_19,
           &VAR_15->texture_samples[VAR_20],
           VAR_18[VAR_20],
           VAR_14 == 2)) {
    return -VAR_0;
   }
  }





  for (VAR_21 = 0;
       VAR_21 < VAR_15->num_uniform_addr_offsets;
       VAR_21++) {
   uint32_t VAR_22 = VAR_15->uniform_addr_offsets[VAR_21];
   ((uint32_t *)VAR_3->uniforms_v)[VAR_22] = VAR_3->uniforms_p;
  }

  *(uint32_t *)(VAR_7 + VAR_16 + 4) = VAR_3->uniforms_p;

  VAR_3->uniforms_u += VAR_15->uniforms_src_size;
  VAR_3->uniforms_v += VAR_15->uniforms_size;
  VAR_3->uniforms_p += VAR_15->uniforms_size;
 }

 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
  struct drm_gem_cma_object *VAR_23 =
   VAR_10[FUNC_0(VAR_8) + VAR_14];
  uint32_t VAR_24 = 36 + VAR_14 * 8;
  uint32_t VAR_25 = *(uint32_t *)(VAR_6 + VAR_24 + 0);
  uint32_t VAR_26 = *(uint8_t *)(VAR_6 + VAR_24 + 4) + 1;
  uint32_t VAR_27 = *(uint8_t *)(VAR_6 + VAR_24 + 5);
  uint32_t VAR_28;

  VAR_3->bin_dep_seqno = FUNC_4(VAR_3->bin_dep_seqno,
       FUNC_8(&VAR_23->base)->write_seqno);

  if (VAR_4->addr & 0x8)
   VAR_27 |= (*(uint32_t *)(VAR_6 + 100 + VAR_14 * 4)) & ~0xff;

  if (VAR_23->base.size < VAR_25 ||
      VAR_23->base.size - VAR_25 < VAR_26) {
   FUNC_2("BO offset overflow (%d + %d > %zu)\n",
      VAR_25, VAR_26, VAR_23->base.size);
   return -VAR_0;
  }

  if (VAR_27 != 0) {
   VAR_28 = ((VAR_23->base.size - VAR_25 - VAR_26) /
         VAR_27);
   if (VAR_4->max_index > VAR_28) {
    FUNC_2("primitives use index %d out of "
       "supplied %d\n",
       VAR_4->max_index, VAR_28);
    return -VAR_0;
   }
  }

  *(uint32_t *)(VAR_7 + VAR_24) = VAR_23->paddr + VAR_25;
 }

 return 0;
}
