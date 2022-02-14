
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc4_vec_encoder {struct vc4_vec* vec; } ;
struct vc4_vec {TYPE_1__* pdev; int clock; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 struct vc4_vec_encoder* FUNC_4 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_5(struct drm_encoder *VAR_6)
{
 struct vc4_vec_encoder *VAR_7 = FUNC_4(VAR_6);
 struct vc4_vec *VAR_8 = VAR_7->vec;
 int VAR_9;

 FUNC_1(VAR_0, 0);
 FUNC_1(VAR_1,
    VAR_5 |
    VAR_2 |
    VAR_3 |
    VAR_4);

 FUNC_2(VAR_8->clock);

 VAR_9 = FUNC_3(&VAR_8->pdev->dev);
 if (VAR_9 < 0) {
  FUNC_0("Failed to release power domain: %d\n", VAR_9);
  return;
 }
}
