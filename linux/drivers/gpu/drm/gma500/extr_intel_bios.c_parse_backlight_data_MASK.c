
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct drm_psb_private {struct bdb_lvds_backlight* lvds_bl; TYPE_1__* dev; } ;
struct bdb_lvds_options {int panel_type; } ;
struct bdb_lvds_backlight {int dummy; } ;
struct bdb_header {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 void* FUNC_1 (struct bdb_header*,int ) ;
 struct bdb_lvds_backlight* FUNC_2 (struct bdb_lvds_backlight*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct drm_psb_private *VAR_3,
    struct bdb_header *VAR_4)
{
 struct bdb_lvds_backlight *VAR_5 = ((void*)0);
 struct bdb_lvds_backlight *VAR_6;
 u8 VAR_7 = 0;
 void *VAR_8 = ((void*)0);
 struct bdb_lvds_options *VAR_9
    = FUNC_1(VAR_4, VAR_1);

 VAR_3->lvds_bl = ((void*)0);

 if (VAR_9)
  VAR_7 = VAR_9->panel_type;
 else
  return;

 VAR_8 = FUNC_1(VAR_4, VAR_0);
 VAR_5 = (struct bdb_lvds_backlight *)(VAR_8 + 1) + VAR_7;

 VAR_6 = FUNC_2(VAR_5, sizeof(*VAR_5), VAR_2);
 if (!VAR_6) {
  FUNC_0(VAR_3->dev->dev, "out of memory for backlight data\n");
  return;
 }
 VAR_3->lvds_bl = VAR_6;
}
