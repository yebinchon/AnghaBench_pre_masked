
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct msm_kms {int dummy; } ;
struct mdp4_kms {int rev; int clk; struct drm_device* dev; } ;
struct TYPE_2__ {int allow_fb_modifiers; } ;
struct drm_device {int dev; TYPE_1__ mode_config; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int,int) ;
 int VAR_2 ;
 int FUNC_2 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 unsigned long FUNC_7 (int ) ;
 int FUNC_8 (struct mdp4_kms*) ;
 int FUNC_9 (struct mdp4_kms*) ;
 int FUNC_10 (struct mdp4_kms*,int ) ;
 int FUNC_11 (struct mdp4_kms*,int ,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 struct mdp4_kms* FUNC_14 (int ) ;
 int FUNC_15 (struct msm_kms*) ;

__attribute__((used)) static int FUNC_16(struct msm_kms *VAR_19)
{
 struct mdp4_kms *VAR_20 = FUNC_14(FUNC_15(VAR_19));
 struct drm_device *VAR_21 = VAR_20->dev;
 uint32_t VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
 unsigned long VAR_27;
 int VAR_28 = 0;

 FUNC_12(VAR_21->dev);

 FUNC_9(VAR_20);
 VAR_22 = FUNC_10(VAR_20, VAR_14);
 FUNC_8(VAR_20);

 VAR_23 = FUNC_2(VAR_22, VAR_3);
 VAR_24 = FUNC_2(VAR_22, VAR_4);

 FUNC_0("found MDP4 version v%d.%d", VAR_23, VAR_24);

 if (VAR_23 != 4) {
  FUNC_1(VAR_21->dev, "unexpected MDP version: v%d.%d\n",
    VAR_23, VAR_24);
  VAR_28 = -VAR_2;
  goto out;
 }

 VAR_20->rev = VAR_24;

 if (VAR_20->rev > 1) {
  FUNC_11(VAR_20, VAR_5, 0x0707ffff);
  FUNC_11(VAR_20, VAR_6, 0x03073f3f);
 }

 FUNC_11(VAR_20, VAR_11, 0x3);


 FUNC_11(VAR_20, VAR_12, 0x02222);

 VAR_27 = FUNC_7(VAR_20->clk);

 if ((VAR_20->rev >= 1) || (VAR_27 >= 90000000)) {
  VAR_25 = 0x47;
  VAR_26 = 0x47;
 } else {
  VAR_25 = 0x27;
  VAR_26 = 0x43;
 }

 FUNC_0("fetch config: dmap=%02x, vg=%02x", VAR_25, VAR_26);

 FUNC_11(VAR_20, FUNC_3(VAR_1), VAR_25);
 FUNC_11(VAR_20, FUNC_3(VAR_0), VAR_25);

 FUNC_11(VAR_20, FUNC_5(VAR_17), VAR_26);
 FUNC_11(VAR_20, FUNC_5(VAR_18), VAR_26);
 FUNC_11(VAR_20, FUNC_5(VAR_15), VAR_26);
 FUNC_11(VAR_20, FUNC_5(VAR_16), VAR_26);

 if (VAR_20->rev >= 2)
  FUNC_11(VAR_20, VAR_10, 1);
 FUNC_11(VAR_20, VAR_9, 0);


 FUNC_11(VAR_20, FUNC_6(VAR_17), 0);
 FUNC_11(VAR_20, FUNC_6(VAR_18), 0);
 FUNC_11(VAR_20, VAR_7, 0);
 FUNC_11(VAR_20, VAR_8, 0);
 FUNC_11(VAR_20, FUNC_4(1), 0);
 FUNC_11(VAR_20, FUNC_4(2), 0);

 if (VAR_20->rev > 1)
  FUNC_11(VAR_20, VAR_13, 1);

 VAR_21->mode_config.allow_fb_modifiers = 1;

out:
 FUNC_13(VAR_21->dev);

 return VAR_28;
}
