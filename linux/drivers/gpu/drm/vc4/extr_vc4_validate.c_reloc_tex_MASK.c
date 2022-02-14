
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct vc4_texture_sample_info {int* p_offset; scalar_t__ is_direct; } ;
struct vc4_exec_info {int* uniforms_v; int bin_dep_seqno; } ;
struct TYPE_4__ {int size; } ;
struct drm_gem_cma_object {int paddr; TYPE_2__ base; } ;
typedef enum vc4_texture_data_type { ____Placeholder_vc4_texture_data_type } vc4_texture_data_type ;
struct TYPE_3__ {unsigned int write_seqno; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;


 void* FUNC_3 (int,unsigned int) ;
 int FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (int,int,int) ;
 TYPE_1__* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct vc4_exec_info*,struct drm_gem_cma_object*,int,int,int,int,int) ;
 struct drm_gem_cma_object* FUNC_10 (struct vc4_exec_info*,int) ;

__attribute__((used)) static bool
FUNC_11(struct vc4_exec_info *VAR_11,
   void *VAR_12,
   struct vc4_texture_sample_info *VAR_13,
   uint32_t VAR_14, bool VAR_15)
{
 struct drm_gem_cma_object *VAR_16;
 uint32_t VAR_17 = *(uint32_t *)(VAR_12 + VAR_13->p_offset[0]);
 uint32_t VAR_18 = *(uint32_t *)(VAR_12 + VAR_13->p_offset[1]);
 uint32_t VAR_19 = (VAR_13->p_offset[2] != ~0 ?
         *(uint32_t *)(VAR_12 + VAR_13->p_offset[2]) : 0);
 uint32_t VAR_20 = (VAR_13->p_offset[3] != ~0 ?
         *(uint32_t *)(VAR_12 + VAR_13->p_offset[3]) : 0);
 uint32_t *VAR_21 = VAR_11->uniforms_v + VAR_13->p_offset[0];
 uint32_t VAR_22 = VAR_17 & VAR_2;
 uint32_t VAR_23 = FUNC_2(VAR_17, VAR_1);
 uint32_t VAR_24 = FUNC_2(VAR_18, VAR_6);
 uint32_t VAR_25 = FUNC_2(VAR_18, VAR_4);
 uint32_t VAR_26, VAR_27, VAR_28, VAR_29;
 uint32_t VAR_30;
 uint32_t VAR_31 = 0;
 enum vc4_texture_data_type VAR_32;

 VAR_16 = FUNC_10(VAR_11, VAR_14);
 if (!VAR_16)
  return 0;

 if (VAR_13->is_direct) {
  uint32_t VAR_33 = VAR_16->base.size - VAR_17;

  if (VAR_17 > VAR_16->base.size - 4) {
   FUNC_0("UBO offset greater than UBO size\n");
   goto fail;
  }
  if (VAR_18 > VAR_33 - 4) {
   FUNC_0("UBO clamp would allow reads "
      "outside of UBO\n");
   goto fail;
  }
  *VAR_21 = VAR_16->paddr + VAR_17;
  return 1;
 }

 if (VAR_24 == 0)
  VAR_24 = 2048;
 if (VAR_25 == 0)
  VAR_25 = 2048;

 if (VAR_17 & VAR_0) {
  if (FUNC_2(VAR_19, VAR_8) ==
      VAR_9)
   VAR_31 = VAR_19 & VAR_7;
  if (FUNC_2(VAR_20, VAR_8) ==
      VAR_9) {
   if (VAR_31) {
    FUNC_0("Cube map stride set twice\n");
    goto fail;
   }

   VAR_31 = VAR_20 & VAR_7;
  }
  if (!VAR_31) {
   FUNC_0("Cube map stride not set\n");
   goto fail;
  }
 }

 VAR_32 = (FUNC_2(VAR_17, VAR_3) |
  (FUNC_2(VAR_18, VAR_5) << 4));

 switch (VAR_32) {
 case 135:
 case 134:
 case 139:
  VAR_26 = 4;
  break;
 case 138:
 case 137:
 case 140:
 case 142:
 case 132:
 case 133:
  VAR_26 = 2;
  break;
 case 141:
 case 145:
 case 131:
  VAR_26 = 1;
  break;
 case 143:



  VAR_26 = 8;
  VAR_24 = (VAR_24 + 3) >> 2;
  VAR_25 = (VAR_25 + 3) >> 2;
  break;
 case 144:
 case 146:
 case 147:
 case 136:
 case 130:
 default:
  FUNC_0("Texture format %d unsupported\n", VAR_32);
  goto fail;
 }
 VAR_28 = FUNC_8(VAR_26);
 VAR_29 = FUNC_7(VAR_26);

 if (VAR_32 == 139) {
  VAR_27 = VAR_10;
 } else {
  if (FUNC_5(VAR_24, VAR_25, VAR_26))
   VAR_27 = 129;
  else
   VAR_27 = 128;
 }

 if (!FUNC_9(VAR_11, VAR_16, VAR_22 + VAR_31 * 5,
    VAR_27, VAR_24, VAR_25, VAR_26)) {
  goto fail;
 }




 for (VAR_30 = 1; VAR_30 <= VAR_23; VAR_30++) {
  uint32_t VAR_34 = FUNC_3(VAR_24 >> VAR_30, 1u);
  uint32_t VAR_35 = FUNC_3(VAR_25 >> VAR_30, 1u);
  uint32_t VAR_36, VAR_37;
  uint32_t VAR_38;


  if (VAR_27 == 128 &&
      FUNC_5(VAR_34, VAR_35, VAR_26)) {
   VAR_27 = 129;
  }

  switch (VAR_27) {
  case 128:
   VAR_36 = FUNC_4(VAR_34, VAR_28 * 8);
   VAR_37 = FUNC_4(VAR_35, VAR_29 * 8);
   break;
  case 129:
   VAR_36 = FUNC_4(VAR_34, VAR_28);
   VAR_37 = FUNC_4(VAR_35, VAR_29);
   break;
  default:
   VAR_36 = FUNC_4(VAR_34, VAR_28);
   VAR_37 = VAR_35;
   break;
  }

  VAR_38 = VAR_36 * VAR_26 * VAR_37;

  if (VAR_22 < VAR_38) {
   FUNC_0("Level %d (%dx%d -> %dx%d) size %db "
      "overflowed buffer bounds (offset %d)\n",
      VAR_30, VAR_34, VAR_35,
      VAR_36, VAR_37,
      VAR_38, VAR_22);
   goto fail;
  }

  VAR_22 -= VAR_38;
 }

 *VAR_21 = VAR_16->paddr + VAR_17;

 if (VAR_15) {
  VAR_11->bin_dep_seqno = FUNC_3(VAR_11->bin_dep_seqno,
       FUNC_6(&VAR_16->base)->write_seqno);
 }

 return 1;
 fail:
 FUNC_1("Texture p0 at %d: 0x%08x\n", VAR_13->p_offset[0], VAR_17);
 FUNC_1("Texture p1 at %d: 0x%08x\n", VAR_13->p_offset[1], VAR_18);
 FUNC_1("Texture p2 at %d: 0x%08x\n", VAR_13->p_offset[2], VAR_19);
 FUNC_1("Texture p3 at %d: 0x%08x\n", VAR_13->p_offset[3], VAR_20);
 return 0;
}
