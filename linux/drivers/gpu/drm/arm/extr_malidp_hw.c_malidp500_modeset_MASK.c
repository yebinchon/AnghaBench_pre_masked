
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_8 (struct malidp_hw_device*,int,int ) ;
 int FUNC_9 (struct malidp_hw_device*,int,int ) ;
 int FUNC_10 (struct malidp_hw_device*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct malidp_hw_device *VAR_19, struct videomode *VAR_20)
{
 u32 VAR_21 = 0;

 FUNC_10(VAR_19, VAR_19->output_color_depth,
  VAR_19->hw->map.out_depth_base);
 FUNC_8(VAR_19, VAR_4, VAR_5);
 if (VAR_20->flags & VAR_0)
  VAR_21 |= VAR_6;
 if (VAR_20->flags & VAR_2)
  VAR_21 |= VAR_8;
 VAR_21 |= VAR_12;
 FUNC_9(VAR_19, VAR_21, VAR_5);







 VAR_21 = ((VAR_10 & 0xfff) << 16) |
       (VAR_11 & 0xfff);
 FUNC_10(VAR_19, VAR_21, VAR_3);
 FUNC_10(VAR_19, VAR_9, VAR_3 + 4);

 VAR_21 = FUNC_3(VAR_20->hfront_porch) |
  FUNC_2(VAR_20->hback_porch);
 FUNC_10(VAR_19, VAR_21, VAR_7 + VAR_15);

 VAR_21 = FUNC_0(VAR_20->vfront_porch) |
  FUNC_6(VAR_20->vback_porch);
 FUNC_10(VAR_19, VAR_21, VAR_7 + VAR_17);

 VAR_21 = FUNC_4(VAR_20->hsync_len) |
  FUNC_7(VAR_20->vsync_len);
 FUNC_10(VAR_19, VAR_21, VAR_7 + VAR_16);

 VAR_21 = FUNC_1(VAR_20->hactive) | FUNC_5(VAR_20->vactive);
 FUNC_10(VAR_19, VAR_21, VAR_7 + VAR_14);

 if (VAR_20->flags & VAR_1)
  FUNC_9(VAR_19, VAR_18, VAR_13);
 else
  FUNC_8(VAR_19, VAR_18, VAR_13);
}
