
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vc4_vec_encoder {struct vc4_vec* vec; } ;
struct vc4_vec {TYPE_2__* tv_mode; int clock; TYPE_1__* pdev; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_4__ {int (* mode_set ) (struct vc4_vec*) ;} ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (int ,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct vc4_vec*) ;
 struct vc4_vec_encoder* FUNC_9 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_10(struct drm_encoder *VAR_18)
{
 struct vc4_vec_encoder *VAR_19 = FUNC_9(VAR_18);
 struct vc4_vec *VAR_20 = VAR_19->vec;
 int VAR_21;

 VAR_21 = FUNC_7(&VAR_20->pdev->dev);
 if (VAR_21 < 0) {
  FUNC_0("Failed to retain power domain: %d\n", VAR_21);
  return;
 }
 VAR_21 = FUNC_6(VAR_20->clock, 108000000);
 if (VAR_21) {
  FUNC_0("Failed to set clock rate: %d\n", VAR_21);
  return;
 }

 VAR_21 = FUNC_5(VAR_20->clock);
 if (VAR_21) {
  FUNC_0("Failed to turn on core clock: %d\n", VAR_21);
  return;
 }


 FUNC_4(VAR_17, 1);
 FUNC_4(VAR_15, 1);


 FUNC_4(VAR_16, 0);







 FUNC_4(VAR_14, 0x28);




 FUNC_4(VAR_3, 0xac);
 FUNC_4(VAR_2, 0xec);
 FUNC_4(VAR_4,
    VAR_6 | VAR_5);
 FUNC_4(VAR_7, VAR_8);
 FUNC_4(VAR_9,
    FUNC_1(0xc) |
    FUNC_2(0xc) |
    FUNC_3(0x46));


 FUNC_4(VAR_13, 0);

 VAR_20->tv_mode->mode_set(VAR_20);

 FUNC_4(VAR_10,
    VAR_12 | VAR_11);
 FUNC_4(VAR_0, VAR_1);
}
