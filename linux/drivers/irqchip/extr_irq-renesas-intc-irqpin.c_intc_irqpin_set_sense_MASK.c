
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intc_irqpin_priv {int sense_bitfield_width; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct intc_irqpin_priv*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct intc_irqpin_priv *VAR_2, int VAR_3, int VAR_4)
{

 int VAR_5 = VAR_2->sense_bitfield_width;
 int VAR_6 = 32 - (VAR_3 + 1) * VAR_5;

 FUNC_0(&VAR_2->pdev->dev, "sense irq = %d, mode = %d\n", VAR_3, VAR_4);

 if (VAR_4 >= (1 << VAR_5))
  return -VAR_0;

 FUNC_1(VAR_2, VAR_1, VAR_6,
          VAR_5, VAR_4);
 return 0;
}
