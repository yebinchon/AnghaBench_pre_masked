
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bochs_device {TYPE_2__* dev; int connector; int pipe; int fb_base; } ;
struct TYPE_6__ {int max_width; int max_height; int preferred_depth; int prefer_shadow_fbdev; int quirk_addfb_prefer_host_byte_order; int * funcs; scalar_t__ prefer_shadow; int fb_base; } ;
struct TYPE_7__ {TYPE_1__ mode_config; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int *,int *,int ,int ,int *,int *) ;

int FUNC_5(struct bochs_device *VAR_3)
{
 FUNC_2(VAR_3->dev);

 VAR_3->dev->mode_config.max_width = 8192;
 VAR_3->dev->mode_config.max_height = 8192;

 VAR_3->dev->mode_config.fb_base = VAR_3->fb_base;
 VAR_3->dev->mode_config.preferred_depth = 24;
 VAR_3->dev->mode_config.prefer_shadow = 0;
 VAR_3->dev->mode_config.prefer_shadow_fbdev = 1;
 VAR_3->dev->mode_config.quirk_addfb_prefer_host_byte_order = 1;

 VAR_3->dev->mode_config.funcs = &VAR_1;

 FUNC_1(VAR_3->dev);
 FUNC_4(VAR_3->dev,
         &VAR_3->pipe,
         &VAR_2,
         VAR_0,
         FUNC_0(VAR_0),
         ((void*)0),
         &VAR_3->connector);

 FUNC_3(VAR_3->dev);

 return 0;
}
