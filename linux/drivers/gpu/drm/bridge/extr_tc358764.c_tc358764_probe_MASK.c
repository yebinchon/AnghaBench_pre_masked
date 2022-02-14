
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int of_node; int * funcs; } ;
struct tc358764 {TYPE_1__ bridge; struct device* dev; } ;
struct device {int of_node; } ;
struct mipi_dsi_device {int lanes; int mode_flags; int format; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*) ;
 struct tc358764* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct mipi_dsi_device*) ;
 int FUNC_5 (struct mipi_dsi_device*,struct tc358764*) ;
 int VAR_7 ;
 int FUNC_6 (struct tc358764*) ;
 int FUNC_7 (struct tc358764*) ;

__attribute__((used)) static int FUNC_8(struct mipi_dsi_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 struct tc358764 *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_1(VAR_9, sizeof(struct tc358764), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 FUNC_5(VAR_8, VAR_10);

 VAR_10->dev = VAR_9;

 VAR_8->lanes = 4;
 VAR_8->format = VAR_2;
 VAR_8->mode_flags = VAR_4 | VAR_6
  | VAR_5 | VAR_3;

 VAR_11 = FUNC_7(VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_6(VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_10->bridge.funcs = &VAR_7;
 VAR_10->bridge.of_node = VAR_9->of_node;

 FUNC_2(&VAR_10->bridge);

 VAR_11 = FUNC_4(VAR_8);
 if (VAR_11 < 0) {
  FUNC_3(&VAR_10->bridge);
  FUNC_0(VAR_9, "failed to attach dsi\n");
 }

 return VAR_11;
}
