
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_9__ {int timings; int of_node; int * funcs; } ;
struct dumb_vga {TYPE_3__ bridge; int * ddc; int * vdd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 struct dumb_vga* FUNC_4 (TYPE_1__*,int,int ) ;
 int * FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_4 ;
 int * FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct platform_device*,struct dumb_vga*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_5)
{
 struct dumb_vga *VAR_6;

 VAR_6 = FUNC_4(&VAR_5->dev, sizeof(*VAR_6), VAR_3);
 if (!VAR_6)
  return -VAR_1;
 FUNC_9(VAR_5, VAR_6);

 VAR_6->vdd = FUNC_5(&VAR_5->dev, "vdd");
 if (FUNC_0(VAR_6->vdd)) {
  int VAR_7 = FUNC_1(VAR_6->vdd);
  if (VAR_7 == -VAR_2)
   return -VAR_2;
  VAR_6->vdd = ((void*)0);
  FUNC_2(&VAR_5->dev, "No vdd regulator found: %d\n", VAR_7);
 }

 VAR_6->ddc = FUNC_7(&VAR_5->dev);
 if (FUNC_0(VAR_6->ddc)) {
  if (FUNC_1(VAR_6->ddc) == -VAR_0) {
   FUNC_2(&VAR_5->dev,
    "No i2c bus specified. Disabling EDID readout\n");
   VAR_6->ddc = ((void*)0);
  } else {
   FUNC_3(&VAR_5->dev, "Couldn't retrieve i2c bus\n");
   return FUNC_1(VAR_6->ddc);
  }
 }

 VAR_6->bridge.funcs = &VAR_4;
 VAR_6->bridge.of_node = VAR_5->dev.of_node;
 VAR_6->bridge.timings = FUNC_8(&VAR_5->dev);

 FUNC_6(&VAR_6->bridge);

 return 0;
}
