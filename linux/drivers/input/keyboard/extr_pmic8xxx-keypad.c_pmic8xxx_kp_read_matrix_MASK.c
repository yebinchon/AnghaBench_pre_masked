
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pmic8xxx_kp {int num_rows; int dev; int regmap; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct pmic8xxx_kp*) ;
 int FUNC_3 (struct pmic8xxx_kp*,int *,int ,int) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 int FUNC_5 (int ,int ,unsigned int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct pmic8xxx_kp *VAR_6, u16 *VAR_7,
      u16 *VAR_8)
{
 int VAR_9, VAR_10;
 unsigned int VAR_11;

 if (VAR_6->num_rows < VAR_4)
  VAR_10 = VAR_4;
 else
  VAR_10 = VAR_6->num_rows;

 FUNC_2(VAR_6);

 if (VAR_8) {
  VAR_9 = FUNC_3(VAR_6, VAR_8, VAR_1,
      VAR_10);
  if (VAR_9 < 0) {
   FUNC_1(VAR_6->dev,
    "Error reading KEYP_OLD_DATA, rc=%d\n", VAR_9);
   return VAR_9;
  }
 }

 VAR_9 = FUNC_3(VAR_6, VAR_7, VAR_2,
      VAR_10);
 if (VAR_9 < 0) {
  FUNC_1(VAR_6->dev,
   "Error reading KEYP_RECENT_DATA, rc=%d\n", VAR_9);
  return VAR_9;
 }


 FUNC_6((4 * FUNC_0(VAR_5, VAR_0)) + 1);

 VAR_9 = FUNC_4(VAR_6->regmap, VAR_3, &VAR_11);
 if (VAR_9 < 0) {
  FUNC_1(VAR_6->dev, "Error reading KEYP_SCAN reg, rc=%d\n", VAR_9);
  return VAR_9;
 }

 VAR_11 &= 0xFE;
 VAR_9 = FUNC_5(VAR_6->regmap, VAR_3, VAR_11);
 if (VAR_9 < 0)
  FUNC_1(VAR_6->dev, "Error writing KEYP_SCAN reg, rc=%d\n", VAR_9);

 return VAR_9;
}
