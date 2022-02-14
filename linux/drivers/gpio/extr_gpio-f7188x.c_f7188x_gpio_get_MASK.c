
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct gpio_chip {int dummy; } ;
struct f7188x_sio {int addr; } ;
struct f7188x_gpio_bank {int regbase; TYPE_1__* data; } ;
struct TYPE_2__ {struct f7188x_sio* sio; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct f7188x_gpio_bank* FUNC_4 (struct gpio_chip*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 int VAR_3;
 struct f7188x_gpio_bank *VAR_4 = FUNC_4(VAR_1);
 struct f7188x_sio *VAR_5 = VAR_4->data->sio;
 u8 VAR_6, VAR_7;

 VAR_3 = FUNC_5(VAR_5->addr);
 if (VAR_3)
  return VAR_3;
 FUNC_8(VAR_5->addr, VAR_0);

 VAR_6 = FUNC_7(VAR_5->addr, FUNC_3(VAR_4->regbase));
 VAR_6 = !!(VAR_6 & FUNC_0(VAR_2));
 if (VAR_6)
  VAR_7 = FUNC_7(VAR_5->addr, FUNC_2(VAR_4->regbase));
 else
  VAR_7 = FUNC_7(VAR_5->addr, FUNC_1(VAR_4->regbase));

 FUNC_6(VAR_5->addr);

 return !!(VAR_7 & FUNC_0(VAR_2));
}
