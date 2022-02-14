
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct videomode {scalar_t__ pixelclock; } ;
struct dispc_device {TYPE_1__* feat; } ;
typedef enum omap_plane_id { ____Placeholder_omap_plane_id } omap_plane_id ;
typedef enum omap_overlay_caps { ____Placeholder_omap_overlay_caps } omap_overlay_caps ;
typedef enum omap_dss_rotation_type { ____Placeholder_omap_dss_rotation_type } omap_dss_rotation_type ;
struct TYPE_2__ {int max_downscale; int (* calc_scaling ) (struct dispc_device*,unsigned long,unsigned long,struct videomode const*,int,int,int,int,int,int*,int*,int*,int*,int*,int,unsigned long*,int) ;} ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;



 int FUNC_2 (char*,int,int,int,int,int,int ,int,int ,int,int,int,int,int,int ,int,int ,int,unsigned long,unsigned long) ;
 int FUNC_3 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_4 (struct dispc_device*) ;
 scalar_t__ FUNC_5 (struct dispc_device*,int ) ;
 int FUNC_6 (struct dispc_device*,unsigned long,unsigned long,struct videomode const*,int,int,int,int,int,int*,int*,int*,int*,int*,int,unsigned long*,int) ;

__attribute__((used)) static int FUNC_7(struct dispc_device *VAR_5,
      enum omap_plane_id VAR_6,
      unsigned long VAR_7, unsigned long VAR_8,
      enum omap_overlay_caps VAR_9,
      const struct videomode *VAR_10,
      u16 VAR_11, u16 VAR_12,
      u16 VAR_13, u16 VAR_14,
      u32 VAR_15, bool *VAR_16,
      int *VAR_17, int *VAR_18, u16 VAR_19,
      enum omap_dss_rotation_type VAR_20,
      bool VAR_21)
{
 int VAR_22 = VAR_5->feat->max_downscale;
 int VAR_23 = VAR_5->feat->max_downscale;
 const int VAR_24 = 16;
 unsigned long VAR_25 = 0;
 int VAR_26, VAR_27, VAR_28;

 if (VAR_11 == VAR_13 && VAR_12 == VAR_14)
  return 0;

 if (VAR_6 == VAR_4) {
  switch (VAR_15) {
  case 130:
   VAR_22 = VAR_23 = 2;
   break;
  case 128:
  case 129:
   VAR_22 = 2;
   VAR_23 = 4;
   break;
  default:
   break;
  }
 }
 if (!VAR_21 && (VAR_7 == 0 || VAR_10->pixelclock == 0)) {
  FUNC_3("cannot calculate scaling settings: pclk is zero\n");
  return -VAR_0;
 }

 if ((VAR_9 & VAR_2) == 0)
  return -VAR_0;

 if (VAR_21) {
  *VAR_17 = *VAR_18 = 1;
 } else {
  *VAR_17 = VAR_24;
  *VAR_18 = (VAR_20 == VAR_3 &&
    FUNC_5(VAR_5, VAR_1)) ?
    2 : VAR_24;
 }

 VAR_26 = FUNC_1(FUNC_1(VAR_11, VAR_13), VAR_22);
 VAR_27 = FUNC_1(FUNC_1(VAR_12, VAR_14), VAR_23);

 if (VAR_26 > *VAR_17 || VAR_13 > VAR_11 * 8)
  return -VAR_0;

 if (VAR_27 > *VAR_18 || VAR_14 > VAR_12 * 8)
  return -VAR_0;

 VAR_28 = VAR_5->feat->calc_scaling(VAR_5, VAR_7, VAR_8, VAR_10, VAR_11, VAR_12,
     VAR_13, VAR_14, VAR_15,
     VAR_16, VAR_17, VAR_18,
     &VAR_26, &VAR_27, VAR_19, &VAR_25,
     VAR_21);
 if (VAR_28)
  return VAR_28;

 FUNC_2("%dx%d -> %dx%d (%d.%02d x %d.%02d), decim %dx%d %dx%d (%d.%02d x %d.%02d), taps %d, req clk %lu, cur clk %lu\n",
  VAR_11, VAR_12,
  VAR_13, VAR_14,
  VAR_13 / VAR_11, FUNC_0(VAR_13, VAR_11),
  VAR_14 / VAR_12, FUNC_0(VAR_14, VAR_12),

  VAR_26, VAR_27,
  VAR_11 / VAR_26, VAR_12 / VAR_27,
  VAR_13 / (VAR_11 / VAR_26), FUNC_0(VAR_13, VAR_11 / VAR_26),
  VAR_14 / (VAR_12 / VAR_27), FUNC_0(VAR_14, VAR_12 / VAR_27),

  *VAR_16 ? 5 : 3,
  VAR_25, FUNC_4(VAR_5));

 if (!VAR_25 || VAR_25 > FUNC_4(VAR_5)) {
  FUNC_3("failed to set up scaling, "
   "required core clk rate = %lu Hz, "
   "current core clk rate = %lu Hz\n",
   VAR_25, FUNC_4(VAR_5));
  return -VAR_0;
 }

 *VAR_17 = VAR_26;
 *VAR_18 = VAR_27;
 return 0;
}
