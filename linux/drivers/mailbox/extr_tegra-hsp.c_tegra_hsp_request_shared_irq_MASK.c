
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_hsp {unsigned int num_si; unsigned int* shared_irqs; unsigned int shared_irq; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned int,int ,int ,int ,struct tegra_hsp*) ;
 int VAR_1 ;
 int FUNC_5 (struct tegra_hsp*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct tegra_hsp *VAR_2)
{
 unsigned int VAR_3, VAR_4 = 0;
 int VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_si; VAR_3++) {
  VAR_4 = VAR_2->shared_irqs[VAR_3];
  if (VAR_4 <= 0)
   continue;

  VAR_5 = FUNC_4(VAR_2->dev, VAR_4, VAR_1, 0,
           FUNC_3(VAR_2->dev), VAR_2);
  if (VAR_5 < 0) {
   FUNC_2(VAR_2->dev, "failed to request interrupt: %d\n",
    VAR_5);
   continue;
  }

  VAR_2->shared_irq = VAR_3;


  FUNC_5(VAR_2, 0, FUNC_0(VAR_2->shared_irq));

  FUNC_1(VAR_2->dev, "interrupt requested: %u\n", VAR_4);

  break;
 }

 if (VAR_3 == VAR_2->num_si) {
  FUNC_2(VAR_2->dev, "failed to find available interrupt\n");
  return -VAR_0;
 }

 return 0;
}
