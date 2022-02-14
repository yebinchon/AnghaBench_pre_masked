
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct resource {int dummy; } ;
struct TYPE_8__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_7__ {int end; scalar_t__ start; } ;
struct TYPE_6__ {int end; scalar_t__ start; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (TYPE_3__*,struct resource*) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 TYPE_2__ VAR_20 ;
 TYPE_1__ VAR_21 ;
 int FUNC_6 (int) ;
 int VAR_22 ;
 int FUNC_7 (struct platform_device*) ;
 int FUNC_8 (struct platform_device*) ;
 int FUNC_9 (int *,int ,int,int,int*) ;
 int FUNC_10 (int *,int ,int,int,int) ;
 int FUNC_11 (int *,int ) ;
 int VAR_23 ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int,int ) ;
 struct resource* FUNC_15 (struct platform_device*,int ,int) ;
 int VAR_24 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ) ;
 int VAR_25 ;
 int FUNC_18 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_26)
{
 struct resource *VAR_27 = FUNC_15(VAR_26,
           VAR_0, 0);
 struct resource *VAR_28 = FUNC_15(VAR_26,
         VAR_0, 1);
 u32 VAR_29 = 0;

 VAR_25 = FUNC_5(&VAR_26->dev, "pcie0");
 if (FUNC_0(VAR_25))
  return FUNC_1(VAR_25);

 VAR_19 = FUNC_4(&VAR_26->dev, VAR_27);
 if (FUNC_0(VAR_19))
  return FUNC_1(VAR_19);

 VAR_23 = FUNC_4(&VAR_26->dev, VAR_28);
 if (FUNC_0(VAR_23))
  return FUNC_1(VAR_23);

 VAR_20.start = 0;
 VAR_20.end = ~0;
 VAR_21.start = 0;
 VAR_21.end = ~0;


 switch (VAR_24) {
 case 130:
  if (FUNC_7(VAR_26))
   return -1;
  break;

 case 129:
 case 128:
  if (FUNC_8(VAR_26))
   return -1;
  break;

 default:
  FUNC_3(&VAR_26->dev, "pcie is not supported on this hardware\n");
  return -1;
 }
 FUNC_6(50);


 FUNC_12(VAR_4, 0, VAR_17);
 FUNC_6(100);


 if ((FUNC_13(VAR_11) & VAR_2) == 0) {
  FUNC_17(VAR_25);
  FUNC_18(VAR_12, 0, VAR_7);
  if (VAR_24 == 130)
   FUNC_18(VAR_1, VAR_5, VAR_6);
  FUNC_3(&VAR_26->dev, "PCIE0 no card, disable it(RST&CLK)\n");
  return -1;
 }


 FUNC_2(0xffffffff, VAR_15);
 FUNC_2(VAR_14, VAR_13);

 FUNC_14(0x7FFF0001, VAR_8);
 FUNC_14(VAR_16, VAR_10);
 FUNC_14(0x06040001, VAR_9);


 FUNC_12(0, VAR_3, VAR_18);


 FUNC_9(((void*)0), 0, 4, 4, &VAR_29);
 FUNC_10(((void*)0), 0, 4, 4, VAR_29 | 0x7);

 FUNC_11(&VAR_22, VAR_26->dev.of_node);
 FUNC_16(&VAR_22);

 return 0;
}
