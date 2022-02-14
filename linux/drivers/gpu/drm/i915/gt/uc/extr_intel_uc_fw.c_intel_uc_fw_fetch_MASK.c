
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct uc_css_header {int header_size_dw; size_t key_size_dw; int modulus_size_dw; int exponent_size_dw; int size_dw; int sw_version; } ;
struct intel_uc_fw {int type; int ucode_size; int rsa_size; scalar_t__ major_ver_found; scalar_t__ minor_ver_found; scalar_t__ major_ver_wanted; scalar_t__ minor_ver_wanted; size_t size; int path; struct drm_i915_gem_object* obj; } ;
struct firmware {int size; scalar_t__ data; } ;
struct TYPE_4__ {size_t size; } ;
struct TYPE_3__ {struct device* dev; } ;
struct drm_i915_private {TYPE_2__ wopcm; TYPE_1__ drm; } ;
struct drm_i915_gem_object {int dummy; } ;
struct device {int dummy; } ;


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
 int VAR_11 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;


 scalar_t__ FUNC_2 (struct drm_i915_gem_object*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct drm_i915_gem_object*) ;
 size_t VAR_16 ;
 int FUNC_5 (struct intel_uc_fw*,struct drm_i915_private*,int ) ;
 size_t FUNC_6 (struct intel_uc_fw*) ;
 int FUNC_7 (struct device*,char*,int ,int ) ;
 int FUNC_8 (struct device*,char*,int ,int ,int,...) ;
 int FUNC_9 (struct device*,char*,int ,int ,size_t,size_t) ;
 struct drm_i915_gem_object* FUNC_10 (struct drm_i915_private*,scalar_t__,size_t) ;
 int FUNC_11 (struct drm_i915_private*,int ) ;
 int FUNC_12 (struct intel_uc_fw*,int ) ;
 int FUNC_13 (struct intel_uc_fw*) ;
 int FUNC_14 (struct intel_uc_fw*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (struct firmware const*) ;
 int FUNC_17 (struct firmware const**,int ,struct device*) ;
 scalar_t__ FUNC_18 (int) ;

int FUNC_19(struct intel_uc_fw *VAR_17, struct drm_i915_private *VAR_18)
{
 struct device *VAR_19 = VAR_18->drm.dev;
 struct drm_i915_gem_object *VAR_20;
 const struct firmware *VAR_21 = ((void*)0);
 struct uc_css_header *VAR_22;
 size_t VAR_23;
 int VAR_24;

 FUNC_1(!VAR_18->wopcm.size);
 FUNC_1(!FUNC_13(VAR_17));

 VAR_24 = FUNC_11(VAR_18, -VAR_9);
 if (VAR_24)
  return VAR_24;

 FUNC_5(VAR_17, VAR_18, -VAR_5);
 FUNC_5(VAR_17, VAR_18, -VAR_11);

 VAR_24 = FUNC_17(&VAR_21, VAR_17->path, VAR_19);
 if (VAR_24)
  goto fail;


 if (FUNC_18(VAR_21->size < sizeof(struct uc_css_header))) {
  FUNC_9(VAR_19, "%s firmware %s: invalid size: %zu < %zu\n",
    FUNC_15(VAR_17->type), VAR_17->path,
    VAR_21->size, sizeof(struct uc_css_header));
  VAR_24 = -VAR_6;
  goto fail;
 }

 VAR_22 = (struct uc_css_header *)VAR_21->data;


 VAR_23 = (VAR_22->header_size_dw - VAR_22->key_size_dw - VAR_22->modulus_size_dw -
  VAR_22->exponent_size_dw) * sizeof(u32);
 if (FUNC_18(VAR_23 != sizeof(struct uc_css_header))) {
  FUNC_9(VAR_19,
    "%s firmware %s: unexpected header size: %zu != %zu\n",
    FUNC_15(VAR_17->type), VAR_17->path,
    VAR_21->size, sizeof(struct uc_css_header));
  VAR_24 = -VAR_10;
  goto fail;
 }


 VAR_17->ucode_size = (VAR_22->size_dw - VAR_22->header_size_dw) * sizeof(u32);


 if (FUNC_18(VAR_22->key_size_dw != VAR_16)) {
  FUNC_9(VAR_19, "%s firmware %s: unexpected key size: %u != %u\n",
    FUNC_15(VAR_17->type), VAR_17->path,
    VAR_22->key_size_dw, VAR_16);
  VAR_24 = -VAR_10;
  goto fail;
 }
 VAR_17->rsa_size = VAR_22->key_size_dw * sizeof(u32);


 VAR_23 = sizeof(struct uc_css_header) + VAR_17->ucode_size + VAR_17->rsa_size;
 if (FUNC_18(VAR_21->size < VAR_23)) {
  FUNC_9(VAR_19, "%s firmware %s: invalid size: %zu < %zu\n",
    FUNC_15(VAR_17->type), VAR_17->path,
    VAR_21->size, VAR_23);
  VAR_24 = -VAR_8;
  goto fail;
 }


 VAR_23 = FUNC_6(VAR_17);
 if (FUNC_18(VAR_23 >= VAR_18->wopcm.size)) {
  FUNC_9(VAR_19, "%s firmware %s: invalid size: %zu > %zu\n",
    FUNC_15(VAR_17->type), VAR_17->path,
    VAR_23, (size_t)VAR_18->wopcm.size);
  VAR_24 = -VAR_4;
  goto fail;
 }


 switch (VAR_17->type) {
 case 129:
  VAR_17->major_ver_found = FUNC_0(VAR_0,
         VAR_22->sw_version);
  VAR_17->minor_ver_found = FUNC_0(VAR_1,
         VAR_22->sw_version);
  break;

 case 128:
  VAR_17->major_ver_found = FUNC_0(VAR_2,
         VAR_22->sw_version);
  VAR_17->minor_ver_found = FUNC_0(VAR_3,
         VAR_22->sw_version);
  break;

 default:
  FUNC_3(VAR_17->type);
  break;
 }

 if (VAR_17->major_ver_found != VAR_17->major_ver_wanted ||
     VAR_17->minor_ver_found < VAR_17->minor_ver_wanted) {
  FUNC_8(VAR_19, "%s firmware %s: unexpected version: %u.%u != %u.%u\n",
      FUNC_15(VAR_17->type), VAR_17->path,
      VAR_17->major_ver_found, VAR_17->minor_ver_found,
      VAR_17->major_ver_wanted, VAR_17->minor_ver_wanted);
  if (!FUNC_14(VAR_17)) {
   VAR_24 = -VAR_8;
   goto fail;
  }
 }

 VAR_20 = FUNC_10(VAR_18, VAR_21->data, VAR_21->size);
 if (FUNC_2(VAR_20)) {
  VAR_24 = FUNC_4(VAR_20);
  goto fail;
 }

 VAR_17->obj = VAR_20;
 VAR_17->size = VAR_21->size;
 FUNC_12(VAR_17, VAR_12);

 FUNC_16(VAR_21);
 return 0;

fail:
 FUNC_12(VAR_17, VAR_24 == -VAR_7 ?
      VAR_14 :
      VAR_13);

 FUNC_8(VAR_19, "%s firmware %s: fetch failed with error %d\n",
     FUNC_15(VAR_17->type), VAR_17->path, VAR_24);
 FUNC_7(VAR_19, "%s firmware(s) can be downloaded from %s\n",
   FUNC_15(VAR_17->type), VAR_15);

 FUNC_16(VAR_21);
 return VAR_24;
}
