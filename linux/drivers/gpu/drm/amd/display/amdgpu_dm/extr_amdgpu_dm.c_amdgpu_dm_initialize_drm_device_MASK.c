
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int argb8888; } ;
typedef struct dc_plane_cap {scalar_t__ type; TYPE_1__ pixel_format_support; int blends_with_below; int blends_with_above; } const dc_plane_cap ;
struct dc_link {int dummy; } ;
struct amdgpu_mode_info {int * planes; } ;
struct TYPE_8__ {scalar_t__ force; } ;
struct amdgpu_encoder {TYPE_3__ base; } ;
struct amdgpu_dm_connector {TYPE_3__ base; } ;
struct amdgpu_display_manager {int display_indexes_num; TYPE_5__* dc; int adev; int ddev; } ;
struct amdgpu_device {int asic_type; struct amdgpu_mode_info mode_info; struct amdgpu_display_manager dm; } ;
typedef int int32_t ;
typedef enum dc_connection_type { ____Placeholder_dc_connection_type } dc_connection_type ;
struct TYPE_9__ {int disable_stutter; } ;
struct TYPE_7__ {int max_links; int max_streams; int max_planes; struct dc_plane_cap const* planes; } ;
struct TYPE_10__ {TYPE_4__ debug; TYPE_2__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct amdgpu_display_manager*,struct amdgpu_encoder*,int,struct amdgpu_encoder*) ;
 scalar_t__ FUNC_3 (struct amdgpu_display_manager*,int ,int) ;
 scalar_t__ FUNC_4 (int ,struct amdgpu_encoder*,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct amdgpu_encoder*) ;
 int VAR_9 ;
 int VAR_10 ;
 struct dc_link* FUNC_7 (TYPE_5__*,int) ;
 scalar_t__ FUNC_8 (struct dc_link*,int ) ;
 int FUNC_9 (struct dc_link*,int*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct dc_link*) ;
 scalar_t__ FUNC_13 (struct amdgpu_display_manager*,struct amdgpu_mode_info*,int,int ,struct dc_plane_cap const*) ;
 int FUNC_14 (struct amdgpu_encoder*) ;
 struct amdgpu_encoder* FUNC_15 (int,int ) ;
 int FUNC_16 (struct amdgpu_display_manager*,struct dc_link*) ;

__attribute__((used)) static int FUNC_17(struct amdgpu_device *VAR_11)
{
 struct amdgpu_display_manager *VAR_12 = &VAR_11->dm;
 int32_t VAR_13;
 struct amdgpu_dm_connector *VAR_14 = ((void*)0);
 struct amdgpu_encoder *VAR_15 = ((void*)0);
 struct amdgpu_mode_info *VAR_16 = &VAR_11->mode_info;
 uint32_t VAR_17;
 int32_t VAR_18;
 enum dc_connection_type VAR_19 = VAR_10;
 const struct dc_plane_cap *VAR_20;

 VAR_17 = VAR_12->dc->caps.max_links;
 if (FUNC_5(VAR_12->adev)) {
  FUNC_1("DM: Failed to initialize mode config\n");
  return -VAR_6;
 }


 VAR_18 = VAR_12->dc->caps.max_streams;
 FUNC_0(VAR_18 <= VAR_1);





 for (VAR_13 = (VAR_18 - 1); VAR_13 >= 0; VAR_13--) {
  VAR_20 = &VAR_12->dc->caps.planes[VAR_13];

  if (FUNC_13(VAR_12, VAR_16, VAR_13,
         VAR_5, VAR_20)) {
   FUNC_1("KMS: Failed to initialize primary plane\n");
   goto fail;
  }
 }
 for (VAR_13 = 0; VAR_13 < VAR_12->dc->caps.max_planes; ++VAR_13) {
  struct dc_plane_cap *VAR_21 = &VAR_12->dc->caps.planes[VAR_13];

  if (VAR_21->type != VAR_2)
   continue;

  if (!VAR_21->blends_with_above || !VAR_21->blends_with_below)
   continue;

  if (!VAR_21->pixel_format_support.argb8888)
   continue;

  if (FUNC_13(VAR_12, ((void*)0), VAR_18 + VAR_13,
         VAR_4, VAR_21)) {
   FUNC_1("KMS: Failed to initialize overlay plane\n");
   goto fail;
  }


  break;
 }

 for (VAR_13 = 0; VAR_13 < VAR_12->dc->caps.max_streams; VAR_13++)
  if (FUNC_3(VAR_12, VAR_16->planes[VAR_13], VAR_13)) {
   FUNC_1("KMS: Failed to initialize crtc\n");
   goto fail;
  }

 VAR_12->display_indexes_num = VAR_12->dc->caps.max_streams;


 for (VAR_13 = 0; VAR_13 < VAR_17; VAR_13++) {
  struct dc_link *VAR_22 = ((void*)0);

  if (VAR_13 > VAR_0) {
   FUNC_1(
    "KMS: Cannot support more than %d display indexes\n",
     VAR_0);
   continue;
  }

  VAR_14 = FUNC_15(sizeof(*VAR_14), VAR_7);
  if (!VAR_14)
   goto fail;

  VAR_15 = FUNC_15(sizeof(*VAR_15), VAR_7);
  if (!VAR_15)
   goto fail;

  if (FUNC_4(VAR_12->ddev, VAR_15, VAR_13)) {
   FUNC_1("KMS: Failed to initialize encoder\n");
   goto fail;
  }

  if (FUNC_2(VAR_12, VAR_14, VAR_13, VAR_15)) {
   FUNC_1("KMS: Failed to initialize connector\n");
   goto fail;
  }

  VAR_22 = FUNC_7(VAR_12->dc, VAR_13);

  if (!FUNC_9(VAR_22, &VAR_19))
   FUNC_1("KMS: Failed to detect connector\n");

  if (VAR_14->base.force && VAR_19 == VAR_10) {
   FUNC_12(VAR_22);
   FUNC_6(VAR_14);

  } else if (FUNC_8(VAR_22, VAR_3)) {
   FUNC_6(VAR_14);
   FUNC_16(VAR_12, VAR_22);
  }


 }


 switch (VAR_11->asic_type) {
 case 148:
 case 145:
 case 143:
 case 144:
 case 142:
 case 132:
 case 146:
 case 147:
 case 133:
 case 137:
 case 138:
 case 136:
 case 128:
 case 131:
 case 130:
 case 129:
  if (FUNC_10(VAR_12->adev)) {
   FUNC_1("DM: Failed to initialize IRQ\n");
   goto fail;
  }
  break;
 default:
  FUNC_1("Unsupported ASIC type: 0x%X\n", VAR_11->asic_type);
  goto fail;
 }

 if (VAR_11->asic_type != 147 && VAR_11->asic_type != 133)
  VAR_12->dc->debug.disable_stutter = VAR_9 & VAR_8 ? 0 : 1;

 return 0;
fail:
 FUNC_14(VAR_15);
 FUNC_14(VAR_14);

 return -VAR_6;
}
