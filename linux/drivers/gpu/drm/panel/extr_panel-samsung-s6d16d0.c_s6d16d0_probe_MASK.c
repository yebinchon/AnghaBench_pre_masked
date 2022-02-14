
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * funcs; struct device* dev; } ;
struct s6d16d0 {TYPE_1__ panel; int reset_gpio; int supply; struct device* dev; } ;
struct device {int dummy; } ;
struct mipi_dsi_device {int lanes; int hs_rate; int lp_rate; int mode_flags; int format; struct device dev; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,int ) ;
 struct s6d16d0* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct mipi_dsi_device*) ;
 int FUNC_10 (struct mipi_dsi_device*,struct s6d16d0*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_11(struct mipi_dsi_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 struct s6d16d0 *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_4(VAR_9, sizeof(struct s6d16d0), VAR_2);
 if (!VAR_10)
  return -VAR_0;

 FUNC_10(VAR_8, VAR_10);
 VAR_10->dev = VAR_9;

 VAR_8->lanes = 2;
 VAR_8->format = VAR_5;
 VAR_8->hs_rate = 420160000;
 VAR_8->lp_rate = 19200000;







 VAR_8->mode_flags =
  VAR_4 |
  VAR_6;

 VAR_10->supply = FUNC_5(VAR_9, "vdd1");
 if (FUNC_1(VAR_10->supply))
  return FUNC_2(VAR_10->supply);


 VAR_10->reset_gpio = FUNC_3(VAR_9, "reset",
       VAR_3);
 if (FUNC_1(VAR_10->reset_gpio)) {
  VAR_11 = FUNC_2(VAR_10->reset_gpio);
  if (VAR_11 != -VAR_1)
   FUNC_0(VAR_9, "failed to request GPIO (%d)\n",
          VAR_11);
  return VAR_11;
 }

 FUNC_7(&VAR_10->panel);
 VAR_10->panel.dev = VAR_9;
 VAR_10->panel.funcs = &VAR_7;

 VAR_11 = FUNC_6(&VAR_10->panel);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_9(VAR_8);
 if (VAR_11 < 0)
  FUNC_8(&VAR_10->panel);

 return VAR_11;
}
