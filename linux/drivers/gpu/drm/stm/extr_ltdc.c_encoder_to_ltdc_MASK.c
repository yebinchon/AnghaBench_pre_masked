
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ltdc_device {int dummy; } ;
struct drm_encoder {TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__ dev_private; } ;



__attribute__((used)) static inline struct ltdc_device *FUNC_0(struct drm_encoder *VAR_0)
{
 return (struct ltdc_device *)VAR_0->dev->dev_private;
}
