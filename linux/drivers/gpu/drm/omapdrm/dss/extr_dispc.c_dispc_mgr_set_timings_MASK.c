
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videomode {unsigned int hactive; unsigned int vactive; unsigned int hfront_porch; unsigned int hsync_len; unsigned int hback_porch; unsigned int vfront_porch; unsigned int vsync_len; unsigned int vback_porch; unsigned int pixelclock; int flags; } ;
struct dispc_device {TYPE_1__* feat; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
struct TYPE_2__ {scalar_t__ supports_double_pixel; } ;


 int FUNC_0 () ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (char*,unsigned long,...) ;
 int FUNC_2 (struct dispc_device*,int ,int,int,int) ;
 int FUNC_3 (struct dispc_device*,int,struct videomode*) ;
 scalar_t__ FUNC_4 (struct dispc_device*,int,struct videomode*) ;
 int FUNC_5 (struct dispc_device*,int,unsigned int,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct dispc_device *VAR_13,
      enum omap_channel VAR_14,
      const struct videomode *VAR_15)
{
 unsigned int VAR_16, VAR_17;
 unsigned long VAR_18, VAR_19;
 struct videomode VAR_20 = *VAR_15;

 FUNC_1("channel %d xres %u yres %u\n", VAR_14, VAR_20.hactive, VAR_20.vactive);

 if (FUNC_4(VAR_13, VAR_14, &VAR_20)) {
  FUNC_0();
  return;
 }

 if (FUNC_6(VAR_14)) {
  FUNC_3(VAR_13, VAR_14, &VAR_20);

  VAR_16 = VAR_20.hactive + VAR_20.hfront_porch + VAR_20.hsync_len + VAR_20.hback_porch;
  VAR_17 = VAR_20.vactive + VAR_20.vfront_porch + VAR_20.vsync_len + VAR_20.vback_porch;

  VAR_18 = VAR_15->pixelclock / VAR_16;
  VAR_19 = VAR_15->pixelclock / VAR_16 / VAR_17;

  FUNC_1("pck %lu\n", VAR_15->pixelclock);
  FUNC_1("hsync_len %d hfp %d hbp %d vsw %d vfp %d vbp %d\n",
   VAR_20.hsync_len, VAR_20.hfront_porch, VAR_20.hback_porch,
   VAR_20.vsync_len, VAR_20.vfront_porch, VAR_20.vback_porch);
  FUNC_1("vsync_level %d hsync_level %d data_pclk_edge %d de_level %d sync_pclk_edge %d\n",
   FUNC_7(VAR_20.flags, VAR_11, VAR_12),
   FUNC_7(VAR_20.flags, VAR_4, VAR_5),
   FUNC_7(VAR_20.flags, VAR_8, VAR_7),
   FUNC_7(VAR_20.flags, VAR_1, VAR_2),
   FUNC_7(VAR_20.flags, VAR_10, VAR_9));

  FUNC_1("hsync %luHz, vsync %luHz\n", VAR_18, VAR_19);
 } else {
  if (VAR_20.flags & VAR_6)
   VAR_20.vactive /= 2;

  if (VAR_13->feat->supports_double_pixel)
   FUNC_2(VAR_13, VAR_0,
        !!(VAR_20.flags & VAR_3),
        19, 17);
 }

 FUNC_5(VAR_13, VAR_14, VAR_20.hactive, VAR_20.vactive);
}
