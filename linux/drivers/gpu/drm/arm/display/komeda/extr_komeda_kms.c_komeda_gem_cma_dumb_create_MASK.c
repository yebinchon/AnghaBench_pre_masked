
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int bus_width; } ;
struct komeda_dev {TYPE_1__ chip; } ;
struct drm_mode_create_dumb {int width; int bpp; int pitch; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct komeda_dev* dev_private; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct drm_file*,struct drm_device*,struct drm_mode_create_dumb*) ;

__attribute__((used)) static int FUNC_3(struct drm_file *VAR_0,
          struct drm_device *VAR_1,
          struct drm_mode_create_dumb *VAR_2)
{
 struct komeda_dev *VAR_3 = VAR_1->dev_private;
 u32 VAR_4 = FUNC_1(VAR_2->width * VAR_2->bpp, 8);

 VAR_2->pitch = FUNC_0(VAR_4, VAR_3->chip.bus_width);

 return FUNC_2(VAR_0, VAR_1, VAR_2);
}
