
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int flags; int start; } ;
struct TYPE_2__ {struct heartbeat_data* platform_data; } ;
struct platform_device {int num_resources; TYPE_1__ dev; } ;
struct heartbeat_data {int nr_bits; int* bit_pos; int mask; int regsize; int timer; int base; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int* VAR_6 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int VAR_7 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (struct heartbeat_data*) ;
 struct heartbeat_data* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,scalar_t__) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (struct platform_device*,struct heartbeat_data*) ;
 int FUNC_8 (struct resource*) ;
 int FUNC_9 (int *,int ,int ) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_9)
{
 struct resource *VAR_10;
 struct heartbeat_data *VAR_11;
 int VAR_12;

 if (FUNC_10(VAR_9->num_resources != 1)) {
  FUNC_1(&VAR_9->dev, "invalid number of resources\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_6(VAR_9, VAR_4, 0);
 if (FUNC_10(VAR_10 == ((void*)0))) {
  FUNC_1(&VAR_9->dev, "invalid resource\n");
  return -VAR_0;
 }

 if (VAR_9->dev.platform_data) {
  VAR_11 = VAR_9->dev.platform_data;
 } else {
  VAR_11 = FUNC_4(sizeof(struct heartbeat_data), VAR_3);
  if (FUNC_10(!VAR_11))
   return -VAR_1;
 }

 VAR_11->base = FUNC_2(VAR_10->start, FUNC_8(VAR_10));
 if (FUNC_10(!VAR_11->base)) {
  FUNC_1(&VAR_9->dev, "ioremap failed\n");

  if (!VAR_9->dev.platform_data)
   FUNC_3(VAR_11);

  return -VAR_2;
 }

 if (!VAR_11->nr_bits) {
  VAR_11->bit_pos = VAR_6;
  VAR_11->nr_bits = FUNC_0(VAR_6);
 }

 VAR_11->mask = 0;
 for (VAR_12 = 0; VAR_12 < VAR_11->nr_bits; VAR_12++)
  VAR_11->mask |= (1 << VAR_11->bit_pos[VAR_12]);

 if (!VAR_11->regsize) {
  switch (VAR_10->flags & VAR_5) {
  case 129:
   VAR_11->regsize = 32;
   break;
  case 130:
   VAR_11->regsize = 16;
   break;
  case 128:
  default:
   VAR_11->regsize = 8;
   break;
  }
 }

 FUNC_9(&VAR_11->timer, VAR_7, 0);
 FUNC_7(VAR_9, VAR_11);

 return FUNC_5(&VAR_11->timer, VAR_8 + 1);
}
