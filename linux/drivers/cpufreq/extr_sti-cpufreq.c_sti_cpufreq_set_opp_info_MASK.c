
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reg_field {int dummy; } ;
struct opp_table {int dummy; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct TYPE_2__ {struct device* cpu; } ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct opp_table*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct opp_table*) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_3 (struct device*,char*,unsigned int,unsigned int,unsigned int,...) ;
 int FUNC_4 (struct device*,char*) ;
 struct opp_table* FUNC_5 (struct device*,char*) ;
 struct opp_table* FUNC_6 (struct device*,unsigned int*,int) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct device_node*,char*,int ,unsigned int*) ;
 int FUNC_9 (char*,int,char*,int) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (struct reg_field const*,unsigned int,int ) ;
 struct reg_field* FUNC_13 () ;

__attribute__((used)) static int FUNC_14(void)
{
 struct device *VAR_8 = VAR_7.cpu;
 struct device_node *VAR_9 = VAR_8->of_node;
 const struct reg_field *VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12[VAR_6];
 int VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17;
 char VAR_18[VAR_3];
 struct opp_table *VAR_19;

 VAR_10 = FUNC_13();
 if (!VAR_10) {
  FUNC_4(VAR_8, "This SoC doesn't support voltage scaling\n");
  return -VAR_1;
 }

 VAR_17 = FUNC_8(VAR_9, "st,syscfg-eng",
      VAR_2, &VAR_11);
 if (VAR_17) {
  FUNC_7(VAR_8, "Failed to read HW info offset from DT\n");
  VAR_14 = VAR_0;
  VAR_13 = 0;
  goto use_defaults;
 }

 VAR_13 = FUNC_12(VAR_10,
            VAR_11,
            VAR_4);
 if (VAR_13 < 0) {
  FUNC_7(VAR_8, "Failed to obtain process code\n");

  VAR_13 = 0;
 }

 VAR_14 = FUNC_12(VAR_10,
         VAR_11,
         VAR_5);
 if (VAR_14) {
  FUNC_7(VAR_8, "Failed to obtain substrate code\n");

  VAR_14 = VAR_0;
 }

use_defaults:
 VAR_15 = FUNC_10();
 if (VAR_15 < 0) {
  FUNC_4(VAR_8, "Failed to obtain major version\n");

  VAR_15 = VAR_0;
 }

 VAR_16 = FUNC_11();
 if (VAR_16 < 0) {
  FUNC_4(VAR_8, "Failed to obtain minor version\n");

  VAR_16 = VAR_0;
 }

 FUNC_9(VAR_18, VAR_3, "pcode%d", VAR_13);

 VAR_19 = FUNC_5(VAR_8, VAR_18);
 if (FUNC_1(VAR_19)) {
  FUNC_4(VAR_8, "Failed to set prop name\n");
  return FUNC_2(VAR_19);
 }

 VAR_12[0] = FUNC_0(VAR_15);
 VAR_12[1] = FUNC_0(VAR_16);
 VAR_12[2] = FUNC_0(VAR_14);

 VAR_19 = FUNC_6(VAR_8, VAR_12, VAR_6);
 if (FUNC_1(VAR_19)) {
  FUNC_4(VAR_8, "Failed to set supported hardware\n");
  return FUNC_2(VAR_19);
 }

 FUNC_3(VAR_8, "pcode: %d major: %d minor: %d substrate: %d\n",
  VAR_13, VAR_15, VAR_16, VAR_14);
 FUNC_3(VAR_8, "version[0]: %x version[1]: %x version[2]: %x\n",
  VAR_12[0], VAR_12[1], VAR_12[2]);

 return 0;
}
