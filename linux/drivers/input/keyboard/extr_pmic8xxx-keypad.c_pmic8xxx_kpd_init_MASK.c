
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pmic8xxx_kp {scalar_t__ num_cols; scalar_t__ num_rows; int dev; int regmap; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (struct device_node const*,char*,unsigned int*) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct pmic8xxx_kp *VAR_19,
        struct platform_device *VAR_20)
{
 const struct device_node *VAR_21 = VAR_20->dev.of_node;
 unsigned int VAR_22;
 unsigned int VAR_23;
 unsigned int VAR_24;
 int VAR_25, VAR_26, VAR_27;
 u8 VAR_28 = 0, VAR_29 = 0;
 static const u8 VAR_30[] = {
  0, 1, 2, 3, 4, 4, 5, 5, 6, 6, 6, 7, 7, 7,
 };


 if (VAR_19->num_cols < VAR_4)
  VAR_25 = 0;
 else
  VAR_25 = VAR_19->num_cols - VAR_4;
 VAR_29 = (VAR_25 & VAR_3) <<
  VAR_5;


 if (VAR_19->num_rows < VAR_6)
  VAR_25 = 0;
 else
  VAR_25 = VAR_30[VAR_19->num_rows - VAR_6];

 VAR_29 |= (VAR_25 << VAR_7);

 VAR_26 = FUNC_4(VAR_19->regmap, VAR_2, VAR_29);
 if (VAR_26 < 0) {
  FUNC_0(VAR_19->dev, "Error writing KEYP_CTRL reg, rc=%d\n", VAR_26);
  return VAR_26;
 }

 if (FUNC_3(VAR_21, "scan-delay", &VAR_22))
  VAR_22 = VAR_17;

 if (VAR_22 > VAR_14 || VAR_22 < VAR_17 ||
     !FUNC_2(VAR_22)) {
  FUNC_0(&VAR_20->dev, "invalid keypad scan time supplied\n");
  return -VAR_0;
 }

 if (FUNC_3(VAR_21, "row-hold", &VAR_23))
  VAR_23 = VAR_16;

 if (VAR_23 > VAR_13 ||
     VAR_23 < VAR_16 ||
     ((VAR_23 % VAR_16) != 0)) {
  FUNC_0(&VAR_20->dev, "invalid keypad row hold time supplied\n");
  return -VAR_0;
 }

 if (FUNC_3(VAR_21, "debounce", &VAR_24))
  VAR_24 = VAR_15;

 if (((VAR_24 % 5) != 0) ||
     VAR_24 > VAR_12 ||
     VAR_24 < VAR_15) {
  FUNC_0(&VAR_20->dev, "invalid debounce time supplied\n");
  return -VAR_0;
 }

 VAR_25 = (VAR_24 / 5) - 1;

 VAR_28 |= (VAR_25 << VAR_9);

 VAR_25 = FUNC_1(VAR_22) - 1;
 VAR_28 |= (VAR_25 << VAR_10);


 VAR_27 = (VAR_23 * VAR_1) / VAR_18;

 VAR_28 |= (VAR_27 << VAR_11);

 VAR_26 = FUNC_4(VAR_19->regmap, VAR_8, VAR_28);
 if (VAR_26)
  FUNC_0(VAR_19->dev, "Error writing KEYP_SCAN reg, rc=%d\n", VAR_26);

 return VAR_26;

}
