
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct exynos_dsi_driver_data {int * reg_values; scalar_t__ has_clklane_stop; } ;
struct exynos_dsi {int mode_flags; int format; int dev; int lanes; struct exynos_dsi_driver_data* driver_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int ) ;
 int VAR_18 ;
 int FUNC_4 (int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;




 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 size_t VAR_36 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct exynos_dsi*,int) ;
 int FUNC_7 (struct exynos_dsi*,int ) ;
 int FUNC_8 (struct exynos_dsi*,int ,int) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static int FUNC_10(struct exynos_dsi *VAR_37)
{
 const struct exynos_dsi_driver_data *VAR_38 = VAR_37->driver_data;
 int VAR_39;
 u32 VAR_40;
 u32 VAR_41;


 VAR_40 = FUNC_7(VAR_37, VAR_6);
 VAR_40 &= ~0x1f;
 FUNC_8(VAR_37, VAR_6, VAR_40);

 FUNC_9(9000, 11000);

 VAR_40 |= 0x1f;
 FUNC_8(VAR_37, VAR_6, VAR_40);
 FUNC_9(9000, 11000);


 VAR_40 = 0;






 if (VAR_37->mode_flags & VAR_27) {
  VAR_40 |= VAR_22;





  if (!(VAR_37->mode_flags & VAR_35))
   VAR_40 |= VAR_15;
  if (VAR_37->mode_flags & VAR_34)
   VAR_40 |= VAR_19;
  if (VAR_37->mode_flags & VAR_29)
   VAR_40 |= VAR_1;
  if (VAR_37->mode_flags & VAR_28)
   VAR_40 |= VAR_0;
  if (VAR_37->mode_flags & VAR_33)
   VAR_40 |= VAR_10;
  if (!(VAR_37->mode_flags & VAR_31))
   VAR_40 |= VAR_8;
  if (!(VAR_37->mode_flags & VAR_30))
   VAR_40 |= VAR_7;
  if (!(VAR_37->mode_flags & VAR_32))
   VAR_40 |= VAR_9;
 }

 if (!(VAR_37->mode_flags & VAR_26))
  VAR_40 |= VAR_4;

 switch (VAR_37->format) {
 case 128:
  VAR_40 |= VAR_14;
  break;
 case 130:
  VAR_40 |= VAR_12;
  break;
 case 129:
  VAR_40 |= VAR_13;
  break;
 case 131:
  VAR_40 |= VAR_11;
  break;
 default:
  FUNC_5(VAR_37->dev, "invalid pixel format\n");
  return -VAR_24;
 }
 if (VAR_38->has_clklane_stop &&
   VAR_37->mode_flags & VAR_25) {
  VAR_40 |= VAR_2;
 }
 FUNC_8(VAR_37, VAR_3, VAR_40);

 VAR_41 = FUNC_0(VAR_37->lanes) - 1;
 FUNC_6(VAR_37, VAR_41);


 VAR_39 = 100;
 do {
  if (VAR_39-- == 0) {
   FUNC_5(VAR_37->dev, "waiting for bus lanes timed out\n");
   return -VAR_23;
  }

  VAR_40 = FUNC_7(VAR_37, VAR_16);
  if ((VAR_40 & FUNC_4(VAR_41))
      != FUNC_4(VAR_41))
   continue;
 } while (!(VAR_40 & (VAR_17 | VAR_21)));

 VAR_40 = FUNC_7(VAR_37, VAR_5);
 VAR_40 &= ~VAR_18;
 VAR_40 |= FUNC_3(VAR_38->reg_values[VAR_36]);
 FUNC_8(VAR_37, VAR_5, VAR_40);

 VAR_40 = FUNC_1(0xff) | FUNC_2(0xffff);
 FUNC_8(VAR_37, VAR_20, VAR_40);

 return 0;
}
