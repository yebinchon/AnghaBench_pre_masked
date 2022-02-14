
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* label; int base; int set_multiple; int set; int get_multiple; int get; int direction_output; int direction_input; int get_direction; int names; int ngpio; int owner; struct device* parent; } ;
struct ws16c48_gpio {TYPE_1__ chip; int lock; scalar_t__ base; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__* VAR_8 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 char* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,TYPE_1__*,struct ws16c48_gpio*) ;
 struct ws16c48_gpio* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,int ,int ,int ,char const* const,struct ws16c48_gpio*) ;
 int FUNC_5 (struct device*,scalar_t__,scalar_t__,char const* const) ;
 int FUNC_6 (TYPE_1__*,int *,int ,int ,int ) ;
 int VAR_9 ;
 int * VAR_10 ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static int FUNC_9(struct device *VAR_21, unsigned int VAR_22)
{
 struct ws16c48_gpio *VAR_23;
 const char *const VAR_24 = FUNC_1(VAR_21);
 int VAR_25;

 VAR_23 = FUNC_3(VAR_21, sizeof(*VAR_23), VAR_2);
 if (!VAR_23)
  return -VAR_1;

 if (!FUNC_5(VAR_21, VAR_8[VAR_22], VAR_6, VAR_24)) {
  FUNC_0(VAR_21, "Unable to lock port addresses (0x%X-0x%X)\n",
   VAR_8[VAR_22], VAR_8[VAR_22] + VAR_6);
  return -VAR_0;
 }

 VAR_23->chip.label = VAR_24;
 VAR_23->chip.parent = VAR_21;
 VAR_23->chip.owner = VAR_5;
 VAR_23->chip.base = -1;
 VAR_23->chip.ngpio = VAR_7;
 VAR_23->chip.names = VAR_20;
 VAR_23->chip.get_direction = VAR_14;
 VAR_23->chip.direction_input = VAR_11;
 VAR_23->chip.direction_output = VAR_12;
 VAR_23->chip.get = VAR_13;
 VAR_23->chip.get_multiple = VAR_15;
 VAR_23->chip.set = VAR_16;
 VAR_23->chip.set_multiple = VAR_17;
 VAR_23->base = VAR_8[VAR_22];

 FUNC_8(&VAR_23->lock);

 VAR_25 = FUNC_2(VAR_21, &VAR_23->chip, VAR_23);
 if (VAR_25) {
  FUNC_0(VAR_21, "GPIO registering failed (%d)\n", VAR_25);
  return VAR_25;
 }


 FUNC_7(0x80, VAR_8[VAR_22] + 7);
 FUNC_7(0, VAR_8[VAR_22] + 8);
 FUNC_7(0, VAR_8[VAR_22] + 9);
 FUNC_7(0, VAR_8[VAR_22] + 10);
 FUNC_7(0xC0, VAR_8[VAR_22] + 7);

 VAR_25 = FUNC_6(&VAR_23->chip, &VAR_19, 0,
  VAR_9, VAR_4);
 if (VAR_25) {
  FUNC_0(VAR_21, "Could not add irqchip (%d)\n", VAR_25);
  return VAR_25;
 }

 VAR_25 = FUNC_4(VAR_21, VAR_10[VAR_22], VAR_18, VAR_3,
  VAR_24, VAR_23);
 if (VAR_25) {
  FUNC_0(VAR_21, "IRQ handler registering failed (%d)\n", VAR_25);
  return VAR_25;
 }

 return 0;
}
