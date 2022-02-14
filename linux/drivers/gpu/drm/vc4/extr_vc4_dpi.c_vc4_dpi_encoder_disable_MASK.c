
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_dpi_encoder {struct vc4_dpi* dpi; } ;
struct vc4_dpi {int pixel_clock; } ;
struct drm_encoder {int dummy; } ;


 int FUNC_0 (int ) ;
 struct vc4_dpi_encoder* FUNC_1 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_2(struct drm_encoder *VAR_0)
{
 struct vc4_dpi_encoder *VAR_1 = FUNC_1(VAR_0);
 struct vc4_dpi *VAR_2 = VAR_1->dpi;

 FUNC_0(VAR_2->pixel_clock);
}
