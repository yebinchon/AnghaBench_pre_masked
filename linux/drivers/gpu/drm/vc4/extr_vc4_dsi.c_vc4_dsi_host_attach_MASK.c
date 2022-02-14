
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc4_dsi {int lanes; int mode_flags; int divider; TYPE_1__* pdev; int format; int channel; } ;
struct mipi_dsi_host {int dummy; } ;
struct mipi_dsi_device {int lanes; int mode_flags; int format; int channel; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 struct vc4_dsi* FUNC_1 (struct mipi_dsi_host*) ;

__attribute__((used)) static int FUNC_2(struct mipi_dsi_host *VAR_5,
          struct mipi_dsi_device *VAR_6)
{
 struct vc4_dsi *VAR_7 = FUNC_1(VAR_5);

 VAR_7->lanes = VAR_6->lanes;
 VAR_7->channel = VAR_6->channel;
 VAR_7->mode_flags = VAR_6->mode_flags;

 switch (VAR_6->format) {
 case 128:
  VAR_7->format = VAR_3;
  VAR_7->divider = 24 / VAR_7->lanes;
  break;
 case 130:
  VAR_7->format = VAR_1;
  VAR_7->divider = 24 / VAR_7->lanes;
  break;
 case 129:
  VAR_7->format = VAR_2;
  VAR_7->divider = 18 / VAR_7->lanes;
  break;
 case 131:
  VAR_7->format = VAR_0;
  VAR_7->divider = 16 / VAR_7->lanes;
  break;
 default:
  FUNC_0(&VAR_7->pdev->dev, "Unknown DSI format: %d.\n",
   VAR_7->format);
  return 0;
 }

 if (!(VAR_7->mode_flags & VAR_4)) {
  FUNC_0(&VAR_7->pdev->dev,
   "Only VIDEO mode panels supported currently.\n");
  return 0;
 }

 return 0;
}
