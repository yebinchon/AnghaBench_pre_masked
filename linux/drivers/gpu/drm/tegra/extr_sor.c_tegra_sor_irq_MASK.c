
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_sor {int format; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (struct tegra_sor*) ;
 int FUNC_2 (struct tegra_sor*) ;
 int FUNC_3 (struct tegra_sor*,int ) ;
 int FUNC_4 (struct tegra_sor*,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_6, void *VAR_7)
{
 struct tegra_sor *VAR_8 = VAR_7;
 u32 VAR_9;

 VAR_9 = FUNC_3(VAR_8, VAR_5);
 FUNC_4(VAR_8, VAR_9, VAR_5);

 if (VAR_9 & VAR_4) {
  VAR_9 = FUNC_3(VAR_8, VAR_1);

  if (VAR_9 & VAR_3) {
   unsigned int VAR_10;

   VAR_10 = VAR_9 & VAR_2;

   FUNC_0(VAR_10, &VAR_8->format);

   FUNC_2(VAR_8);
  } else {
   FUNC_1(VAR_8);
  }
 }

 return VAR_0;
}
