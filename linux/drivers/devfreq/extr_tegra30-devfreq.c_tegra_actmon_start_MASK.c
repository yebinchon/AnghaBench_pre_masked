
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_devfreq {int irq; int * devices; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (struct tegra_devfreq*) ;
 int FUNC_2 (struct tegra_devfreq*,scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct tegra_devfreq*,int *) ;

__attribute__((used)) static void FUNC_6(struct tegra_devfreq *VAR_2)
{
 unsigned int VAR_3;

 FUNC_3(VAR_2->irq);

 FUNC_2(VAR_2, VAR_1 - 1,
        VAR_0);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->devices); VAR_3++)
  FUNC_5(VAR_2, &VAR_2->devices[VAR_3]);

 FUNC_1(VAR_2);

 FUNC_4(VAR_2->irq);
}
