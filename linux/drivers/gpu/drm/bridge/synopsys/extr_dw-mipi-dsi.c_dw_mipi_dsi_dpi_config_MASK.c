
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_mipi_dsi {int format; int channel; } ;
struct drm_display_mode {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int VAR_11 ;




 int FUNC_2 (int) ;
 int VAR_12 ;
 int FUNC_3 (struct dw_mipi_dsi*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct dw_mipi_dsi *VAR_13,
       const struct drm_display_mode *VAR_14)
{
 u32 VAR_15 = 0, VAR_16 = 0;

 switch (VAR_13->format) {
 case 128:
  VAR_16 = VAR_3;
  break;
 case 130:
  VAR_16 = VAR_2 | VAR_11;
  break;
 case 129:
  VAR_16 = VAR_1;
  break;
 case 131:
  VAR_16 = VAR_0;
  break;
 }

 if (VAR_14->flags & VAR_5)
  VAR_15 |= VAR_12;
 if (VAR_14->flags & VAR_4)
  VAR_15 |= VAR_10;

 FUNC_3(VAR_13, VAR_9, FUNC_0(VAR_13->channel));
 FUNC_3(VAR_13, VAR_7, VAR_16);
 FUNC_3(VAR_13, VAR_6, VAR_15);






 FUNC_3(VAR_13, VAR_8, FUNC_2(4)
    | FUNC_1(4));
}
