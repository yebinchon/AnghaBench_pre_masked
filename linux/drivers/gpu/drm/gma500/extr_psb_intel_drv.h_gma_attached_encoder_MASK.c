
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gma_encoder {int dummy; } ;
struct drm_connector {int dummy; } ;
struct TYPE_2__ {struct gma_encoder* encoder; } ;


 TYPE_1__* FUNC_0 (struct drm_connector*) ;

__attribute__((used)) static inline struct gma_encoder *FUNC_1(
      struct drm_connector *VAR_0)
{
 return FUNC_0(VAR_0)->encoder;
}
