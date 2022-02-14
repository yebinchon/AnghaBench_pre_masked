
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int domain; } ;
struct TYPE_4__ {TYPE_1__ irq; } ;
struct gpio_rcar_priv {TYPE_2__ gpio_chip; } ;
typedef int irqreturn_t ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct gpio_rcar_priv*,int ) ;
 int FUNC_4 (struct gpio_rcar_priv*,int ,int ) ;
 int FUNC_5 (int ,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_5, void *VAR_6)
{
 struct gpio_rcar_priv *VAR_7 = VAR_6;
 u32 VAR_8;
 unsigned int VAR_9, VAR_10 = 0;

 while ((VAR_8 = FUNC_3(VAR_7, VAR_1) &
     FUNC_3(VAR_7, VAR_2))) {
  VAR_9 = FUNC_1(VAR_8);
  FUNC_4(VAR_7, VAR_0, FUNC_0(VAR_9));
  FUNC_2(FUNC_5(VAR_7->gpio_chip.irq.domain,
          VAR_9));
  VAR_10++;
 }

 return VAR_10 ? VAR_3 : VAR_4;
}
