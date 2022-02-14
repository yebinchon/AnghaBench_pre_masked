
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_property {int dummy; } ;
struct TYPE_2__ {struct drm_property* hdr_output_metadata_property; struct drm_property* non_desktop_property; struct drm_property* link_status_property; struct drm_property* tile_property; struct drm_property* path_property; struct drm_property* dpms_property; struct drm_property* edid_property; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct drm_property* FUNC_1 (struct drm_device*,int,char*,int ) ;
 struct drm_property* FUNC_2 (struct drm_device*,int,char*) ;
 struct drm_property* FUNC_3 (struct drm_device*,int ,char*,int ,int ) ;

int FUNC_4(struct drm_device *VAR_5)
{
 struct drm_property *VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_0 |
       VAR_1,
       "EDID", 0);
 if (!VAR_6)
  return -VAR_2;
 VAR_5->mode_config.edid_property = VAR_6;

 VAR_6 = FUNC_3(VAR_5, 0,
       "DPMS", VAR_3,
       FUNC_0(VAR_3));
 if (!VAR_6)
  return -VAR_2;
 VAR_5->mode_config.dpms_property = VAR_6;

 VAR_6 = FUNC_1(VAR_5,
       VAR_0 |
       VAR_1,
       "PATH", 0);
 if (!VAR_6)
  return -VAR_2;
 VAR_5->mode_config.path_property = VAR_6;

 VAR_6 = FUNC_1(VAR_5,
       VAR_0 |
       VAR_1,
       "TILE", 0);
 if (!VAR_6)
  return -VAR_2;
 VAR_5->mode_config.tile_property = VAR_6;

 VAR_6 = FUNC_3(VAR_5, 0, "link-status",
     VAR_4,
     FUNC_0(VAR_4));
 if (!VAR_6)
  return -VAR_2;
 VAR_5->mode_config.link_status_property = VAR_6;

 VAR_6 = FUNC_2(VAR_5, VAR_1, "non-desktop");
 if (!VAR_6)
  return -VAR_2;
 VAR_5->mode_config.non_desktop_property = VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_0,
       "HDR_OUTPUT_METADATA", 0);
 if (!VAR_6)
  return -VAR_2;
 VAR_5->mode_config.hdr_output_metadata_property = VAR_6;

 return 0;
}
