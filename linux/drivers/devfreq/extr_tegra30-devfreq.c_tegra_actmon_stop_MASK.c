
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_devfreq {int irq; int * devices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (struct tegra_devfreq*) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct tegra_devfreq *VAR_3)
{
 unsigned int VAR_4;

 FUNC_3(VAR_3->irq);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3->devices); VAR_4++) {
  FUNC_2(&VAR_3->devices[VAR_4], 0x00000000, VAR_0);
  FUNC_2(&VAR_3->devices[VAR_4], VAR_2,
         VAR_1);
 }

 FUNC_1(VAR_3);

 FUNC_4(VAR_3->irq);
}
