
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct f7188x_sio {int type; } ;
struct f7188x_gpio_data {int nr_bank; struct f7188x_gpio_bank* bank; struct f7188x_sio* sio; } ;
struct TYPE_2__ {int * parent; } ;
struct f7188x_gpio_bank {TYPE_1__ chip; struct f7188x_gpio_data* data; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int,int) ;
 struct f7188x_sio* FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*,struct f7188x_gpio_bank*) ;
 struct f7188x_gpio_data* FUNC_4 (int *,int,int ) ;

 void* VAR_3 ;

 void* VAR_4 ;
 void* VAR_5 ;

 void* VAR_6 ;

 void* VAR_7 ;


 void* VAR_8 ;

 void* VAR_9 ;
 int FUNC_5 (struct platform_device*,struct f7188x_gpio_data*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_10)
{
 int VAR_11;
 int VAR_12;
 struct f7188x_sio *VAR_13 = FUNC_2(&VAR_10->dev);
 struct f7188x_gpio_data *VAR_14;

 VAR_14 = FUNC_4(&VAR_10->dev, sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 switch (VAR_13->type) {
 case 134:
  VAR_14->nr_bank = FUNC_0(VAR_3);
  VAR_14->bank = VAR_3;
  break;
 case 133:
  VAR_14->nr_bank = FUNC_0(VAR_4);
  VAR_14->bank = VAR_4;
  break;
 case 132:
  VAR_14->nr_bank = FUNC_0(VAR_5);
  VAR_14->bank = VAR_5;
  break;
 case 131:
  VAR_14->nr_bank = FUNC_0(VAR_7);
  VAR_14->bank = VAR_7;
  break;
 case 130:
  VAR_14->nr_bank = FUNC_0(VAR_6);
  VAR_14->bank = VAR_6;
  break;
 case 128:
  VAR_14->nr_bank = FUNC_0(VAR_9);
  VAR_14->bank = VAR_9;
  break;
 case 129:
  VAR_14->nr_bank = FUNC_0(VAR_8);
  VAR_14->bank = VAR_8;
  break;
 default:
  return -VAR_0;
 }
 VAR_14->sio = VAR_13;

 FUNC_5(VAR_10, VAR_14);


 for (VAR_12 = 0; VAR_12 < VAR_14->nr_bank; VAR_12++) {
  struct f7188x_gpio_bank *VAR_15 = &VAR_14->bank[VAR_12];

  VAR_15->chip.parent = &VAR_10->dev;
  VAR_15->data = VAR_14;

  VAR_11 = FUNC_3(&VAR_10->dev, &VAR_15->chip, VAR_15);
  if (VAR_11) {
   FUNC_1(&VAR_10->dev,
    "Failed to register gpiochip %d: %d\n",
    VAR_12, VAR_11);
   return VAR_11;
  }
 }

 return 0;
}
