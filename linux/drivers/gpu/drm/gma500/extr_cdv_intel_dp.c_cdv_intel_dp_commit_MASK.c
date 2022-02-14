
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gma_encoder {int dummy; } ;
struct drm_encoder {int dummy; } ;


 int FUNC_0 (struct gma_encoder*) ;
 int FUNC_1 (struct gma_encoder*) ;
 int FUNC_2 (struct gma_encoder*) ;
 int FUNC_3 (struct gma_encoder*) ;
 int FUNC_4 (struct gma_encoder*) ;
 struct gma_encoder* FUNC_5 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_6(struct drm_encoder *VAR_0)
{
 struct gma_encoder *VAR_1 = FUNC_5(VAR_0);
 int VAR_2 = FUNC_4(VAR_1);

 if (VAR_2)
  FUNC_3(VAR_1);
 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
 if (VAR_2)
  FUNC_2(VAR_1);
}
