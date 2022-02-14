
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pmic8xxx_kp {int num_rows; int num_cols; int dev; } ;


 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(struct pmic8xxx_kp *VAR_0, u16 *VAR_1)
{
 int VAR_2, VAR_3 = -1;
 u16 VAR_4, VAR_5;

 VAR_4 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_0->num_rows; VAR_2++) {
  VAR_5 = (~VAR_1[VAR_2]) &
     ((1 << VAR_0->num_cols) - 1);

  if (FUNC_1(VAR_5) > 1) {
   if (VAR_3 == -1)
    VAR_3 = VAR_2;
   if (VAR_4 & VAR_5) {
    FUNC_0(VAR_0->dev, "detected ghost key on row[%d]"
      " and row[%d]\n", VAR_3, VAR_2);
    return 1;
   }
  }
  VAR_4 |= VAR_5;
 }
 return 0;
}
