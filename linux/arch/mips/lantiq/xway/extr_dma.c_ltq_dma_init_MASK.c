
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct clk*) ;
 struct clk* FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char*,unsigned int,unsigned int,unsigned int) ;
 struct clk* FUNC_4 (int *,struct resource*) ;
 struct clk* VAR_13 ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (char*) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int
FUNC_10(struct platform_device *VAR_14)
{
 struct clk *VAR_15;
 struct resource *VAR_16;
 unsigned VAR_17;
 int VAR_18;

 VAR_16 = FUNC_9(VAR_14, VAR_6, 0);
 VAR_13 = FUNC_4(&VAR_14->dev, VAR_16);
 if (FUNC_0(VAR_13))
  FUNC_8("Failed to remap dma resource");


 VAR_15 = FUNC_2(&VAR_14->dev, ((void*)0));
 if (FUNC_0(VAR_15))
  FUNC_8("Failed to get dma clock");

 FUNC_1(VAR_15);
 FUNC_7(0, VAR_5, VAR_10);


 FUNC_6(0, VAR_12);


 for (VAR_18 = 0; VAR_18 < VAR_3; VAR_18++) {
  FUNC_6(VAR_18, VAR_9);
  FUNC_6(VAR_1, VAR_7);
  FUNC_6(VAR_4 | VAR_2, VAR_8);
  FUNC_7(VAR_0, 0, VAR_7);
 }

 VAR_17 = FUNC_5(VAR_11);
 FUNC_3(&VAR_14->dev,
  "Init done - hw rev: %X, ports: %d, channels: %d\n",
  VAR_17 & 0x1f, (VAR_17 >> 16) & 0xf, VAR_17 >> 20);

 return 0;
}
