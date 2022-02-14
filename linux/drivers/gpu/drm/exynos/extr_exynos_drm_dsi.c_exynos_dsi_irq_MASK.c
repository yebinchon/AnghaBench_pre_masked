
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct exynos_dsi {int completed; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct exynos_dsi*,int ) ;
 scalar_t__ FUNC_3 (struct exynos_dsi*) ;
 int FUNC_4 (struct exynos_dsi*) ;
 int FUNC_5 (struct exynos_dsi*,int ,int) ;
 scalar_t__ FUNC_6 (unsigned long*,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_9, void *VAR_10)
{
 struct exynos_dsi *VAR_11 = VAR_10;
 u32 VAR_12;

 VAR_12 = FUNC_2(VAR_11, VAR_1);
 if (!VAR_12) {
  static unsigned long int VAR_13;
  if (FUNC_6(&VAR_13, 500))
   FUNC_1(VAR_11->dev, "spurious interrupt\n");
  return VAR_8;
 }
 FUNC_5(VAR_11, VAR_1, VAR_12);

 if (VAR_12 & VAR_7) {
  u32 VAR_14 = ~(VAR_3 | VAR_5 |
   VAR_6 | VAR_4 |
   VAR_7);
  FUNC_5(VAR_11, VAR_0, VAR_14);
  FUNC_0(&VAR_11->completed);
  return VAR_8;
 }

 if (!(VAR_12 & (VAR_3 | VAR_5 |
   VAR_2)))
  return VAR_8;

 if (FUNC_3(VAR_11))
  FUNC_4(VAR_11);

 return VAR_8;
}
