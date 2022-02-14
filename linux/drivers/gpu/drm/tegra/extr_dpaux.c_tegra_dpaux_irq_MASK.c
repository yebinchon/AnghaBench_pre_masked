
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_dpaux {int complete; int work; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tegra_dpaux*,int ) ;
 int FUNC_3 (struct tegra_dpaux*,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 struct tegra_dpaux *VAR_8 = VAR_7;
 irqreturn_t VAR_9 = VAR_5;
 u32 VAR_10;


 VAR_10 = FUNC_2(VAR_8, VAR_0);
 FUNC_3(VAR_8, VAR_10, VAR_0);

 if (VAR_10 & (VAR_3 | VAR_4))
  FUNC_1(&VAR_8->work);

 if (VAR_10 & VAR_2) {

 }

 if (VAR_10 & VAR_1)
  FUNC_0(&VAR_8->complete);

 return VAR_9;
}
