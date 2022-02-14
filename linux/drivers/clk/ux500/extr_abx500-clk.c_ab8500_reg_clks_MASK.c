
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct clk {int dummy; } ;
struct TYPE_3__ {int clk_num; struct clk** clks; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct clk**) ;
 TYPE_1__ VAR_16 ;
 struct clk** VAR_17 ;
 int FUNC_1 (int ,int ) ;
 struct clk* FUNC_2 (struct device*,char*,char*,int ,int ,int ,int ,int ) ;
 struct clk* FUNC_3 (struct device*,char*,int *,int ,int ,int ,int,int,int ) ;
 struct clk* FUNC_4 (struct device*,char*,char const**,int,int *,int*,int*,int ) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device_node*,int ,TYPE_1__*) ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_7(struct device *VAR_19)
{
 int VAR_20;
 struct clk *VAR_21;
 struct device_node *VAR_22 = VAR_19->of_node;
 const char *VAR_23[] = {"ab8500_sysclk", "ulpclk"};
 u16 VAR_24[] = {0 , VAR_8};
 u8 VAR_25[] = {0 , VAR_13};
 u8 VAR_26[] = {
  0 ,
  (1 << VAR_14)
 };


 VAR_20 = FUNC_1(VAR_0, VAR_1);
 if (VAR_20)
  return VAR_20;


 VAR_21 = FUNC_2(VAR_19 , "ab8500_sysclk2", "ab8500_sysclk",
  VAR_8, VAR_10,
  VAR_10, 0, 0);
 VAR_17[VAR_3] = VAR_21;


 VAR_21 = FUNC_2(VAR_19 , "ab8500_sysclk3", "ab8500_sysclk",
  VAR_8, VAR_11,
  VAR_11, 0, 0);
 VAR_17[VAR_4] = VAR_21;


 VAR_21 = FUNC_2(VAR_19 , "ab8500_sysclk4", "ab8500_sysclk",
  VAR_8, VAR_12,
  VAR_12, 0, 0);
 VAR_17[VAR_5] = VAR_21;


 VAR_21 = FUNC_3(VAR_19, "ulpclk", ((void*)0),
  VAR_8, VAR_15,
  VAR_15,
  38400000, 9000, 0);
 VAR_17[VAR_7] = VAR_21;


 VAR_21 = FUNC_4(VAR_19 , "intclk", VAR_23, 2,
  VAR_24, VAR_25, VAR_26, 0);
 VAR_17[VAR_6] = VAR_21;


 VAR_21 = FUNC_2(VAR_19 , "audioclk", "intclk",
  VAR_8, VAR_9,
  VAR_9, 0, 0);
 VAR_17[VAR_2] = VAR_21;

 VAR_16.clks = VAR_17;
 VAR_16.clk_num = FUNC_0(VAR_17);
 FUNC_6(VAR_22, VAR_18, &VAR_16);

 FUNC_5(VAR_19, "registered clocks for ab850x\n");

 return 0;
}
