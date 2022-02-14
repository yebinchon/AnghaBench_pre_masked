
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mipi_dsi_host {int dummy; } ;
struct mipi_dsi_device {int lanes; int mode_flags; int format; } ;
struct mcde_dsi {TYPE_1__* mcde; struct mipi_dsi_device* mdsi; int dev; } ;
struct TYPE_2__ {struct mipi_dsi_device* mdsi; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,...) ;
 struct mcde_dsi* FUNC_2 (struct mipi_dsi_host*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct mipi_dsi_host *VAR_1,
    struct mipi_dsi_device *VAR_2)
{
 struct mcde_dsi *VAR_3 = FUNC_2(VAR_1);

 if (VAR_2->lanes < 1 || VAR_2->lanes > 2) {
  FUNC_0("dsi device params invalid, 1 or 2 lanes supported\n");
  return -VAR_0;
 }

 FUNC_1(VAR_3->dev, "attached DSI device with %d lanes\n", VAR_2->lanes);

 FUNC_1(VAR_3->dev, "format %08x, %dbpp\n", VAR_2->format,
   FUNC_3(VAR_2->format));
 FUNC_1(VAR_3->dev, "mode flags: %08lx\n", VAR_2->mode_flags);

 VAR_3->mdsi = VAR_2;
 if (VAR_3->mcde)
  VAR_3->mcde->mdsi = VAR_2;

 return 0;
}
