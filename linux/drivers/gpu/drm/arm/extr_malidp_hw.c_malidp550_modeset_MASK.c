
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct videomode {int flags; int vactive; int hactive; int vsync_len; int hsync_len; int vback_porch; int vfront_porch; int hback_porch; int hfront_porch; } ;
struct malidp_hw_device {int output_color_depth; TYPE_2__* hw; } ;
struct TYPE_3__ {scalar_t__ out_depth_base; } ;
struct TYPE_4__ {TYPE_1__ map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_8 (struct malidp_hw_device*,int ,int ) ;
 int FUNC_9 (struct malidp_hw_device*,int ,int ) ;
 int FUNC_10 (struct malidp_hw_device*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct malidp_hw_device *VAR_18, struct videomode *VAR_19)
{
 u32 VAR_20 = VAR_11;

 FUNC_10(VAR_18, VAR_18->output_color_depth,
  VAR_18->hw->map.out_depth_base);
 FUNC_10(VAR_18, VAR_20, VAR_4);
 VAR_20 = (((VAR_10 >> 4) & 0xff) << 16) |
       (((VAR_9 >> 4) & 0xff) << 8) |
       ((VAR_8 >> 4) & 0xff);
 FUNC_10(VAR_18, VAR_20, VAR_3);

 VAR_20 = FUNC_3(VAR_19->hfront_porch) |
  FUNC_2(VAR_19->hback_porch);
 FUNC_10(VAR_18, VAR_20, VAR_6 + VAR_14);

 VAR_20 = FUNC_0(VAR_19->vfront_porch) |
  FUNC_6(VAR_19->vback_porch);
 FUNC_10(VAR_18, VAR_20, VAR_6 + VAR_16);

 VAR_20 = FUNC_4(VAR_19->hsync_len) |
  FUNC_7(VAR_19->vsync_len);
 if (VAR_19->flags & VAR_0)
  VAR_20 |= VAR_5;
 if (VAR_19->flags & VAR_2)
  VAR_20 |= VAR_7;
 FUNC_10(VAR_18, VAR_20, VAR_6 + VAR_15);

 VAR_20 = FUNC_1(VAR_19->hactive) | FUNC_5(VAR_19->vactive);
 FUNC_10(VAR_18, VAR_20, VAR_6 + VAR_13);

 if (VAR_19->flags & VAR_1)
  FUNC_9(VAR_18, VAR_17, VAR_12);
 else
  FUNC_8(VAR_18, VAR_17, VAR_12);
}
