
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* label; int base; int set_multiple; int set; int get_multiple; int get; int direction_output; int direction_input; int get_direction; int names; int ngpio; int owner; struct device* parent; } ;
struct dio48e_gpio {TYPE_1__ chip; int lock; scalar_t__ base; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__* VAR_7 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 char* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,TYPE_1__*,struct dio48e_gpio*) ;
 struct dio48e_gpio* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,int ,int ,int ,char const* const,struct dio48e_gpio*) ;
 int FUNC_5 (struct device*,scalar_t__,scalar_t__,char const* const) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_6 (TYPE_1__*,int *,int ,int ,int ) ;
 int VAR_18 ;
 int FUNC_7 (scalar_t__) ;
 int * VAR_19 ;
 int FUNC_8 (int,scalar_t__) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_20, unsigned int VAR_21)
{
 struct dio48e_gpio *VAR_22;
 const char *const VAR_23 = FUNC_1(VAR_20);
 int VAR_24;

 VAR_22 = FUNC_3(VAR_20, sizeof(*VAR_22), VAR_4);
 if (!VAR_22)
  return -VAR_3;

 if (!FUNC_5(VAR_20, VAR_7[VAR_21], VAR_0, VAR_23)) {
  FUNC_0(VAR_20, "Unable to lock port addresses (0x%X-0x%X)\n",
   VAR_7[VAR_21], VAR_7[VAR_21] + VAR_0);
  return -VAR_2;
 }

 VAR_22->chip.label = VAR_23;
 VAR_22->chip.parent = VAR_20;
 VAR_22->chip.owner = VAR_6;
 VAR_22->chip.base = -1;
 VAR_22->chip.ngpio = VAR_1;
 VAR_22->chip.names = VAR_17;
 VAR_22->chip.get_direction = VAR_11;
 VAR_22->chip.direction_input = VAR_8;
 VAR_22->chip.direction_output = VAR_9;
 VAR_22->chip.get = VAR_10;
 VAR_22->chip.get_multiple = VAR_12;
 VAR_22->chip.set = VAR_13;
 VAR_22->chip.set_multiple = VAR_14;
 VAR_22->base = VAR_7[VAR_21];

 FUNC_9(&VAR_22->lock);

 VAR_24 = FUNC_2(VAR_20, &VAR_22->chip, VAR_22);
 if (VAR_24) {
  FUNC_0(VAR_20, "GPIO registering failed (%d)\n", VAR_24);
  return VAR_24;
 }


 FUNC_8(0x80, VAR_7[VAR_21] + 3);
 FUNC_8(0x00, VAR_7[VAR_21]);
 FUNC_8(0x00, VAR_7[VAR_21] + 1);
 FUNC_8(0x00, VAR_7[VAR_21] + 2);
 FUNC_8(0x00, VAR_7[VAR_21] + 3);
 FUNC_8(0x80, VAR_7[VAR_21] + 7);
 FUNC_8(0x00, VAR_7[VAR_21] + 4);
 FUNC_8(0x00, VAR_7[VAR_21] + 5);
 FUNC_8(0x00, VAR_7[VAR_21] + 6);
 FUNC_8(0x00, VAR_7[VAR_21] + 7);


 FUNC_7(VAR_7[VAR_21] + 0xB);

 VAR_24 = FUNC_6(&VAR_22->chip, &VAR_16, 0,
  VAR_18, VAR_5);
 if (VAR_24) {
  FUNC_0(VAR_20, "Could not add irqchip (%d)\n", VAR_24);
  return VAR_24;
 }

 VAR_24 = FUNC_4(VAR_20, VAR_19[VAR_21], VAR_15, 0, VAR_23,
  VAR_22);
 if (VAR_24) {
  FUNC_0(VAR_20, "IRQ handler registering failed (%d)\n", VAR_24);
  return VAR_24;
 }

 return 0;
}
