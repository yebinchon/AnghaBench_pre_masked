
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* label; int base; int set_multiple; int set; int get_multiple; int get; int direction_output; int direction_input; int get_direction; int names; int ngpio; int owner; struct device* parent; } ;
struct gpiomm_gpio {TYPE_1__ chip; int lock; scalar_t__ base; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__* VAR_6 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 char* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,TYPE_1__*,struct gpiomm_gpio*) ;
 struct gpiomm_gpio* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,scalar_t__,scalar_t__,char const* const) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_15, unsigned int VAR_16)
{
 struct gpiomm_gpio *VAR_17;
 const char *const VAR_18 = FUNC_1(VAR_15);
 int VAR_19;

 VAR_17 = FUNC_3(VAR_15, sizeof(*VAR_17), VAR_2);
 if (!VAR_17)
  return -VAR_1;

 if (!FUNC_4(VAR_15, VAR_6[VAR_16], VAR_3, VAR_18)) {
  FUNC_0(VAR_15, "Unable to lock port addresses (0x%X-0x%X)\n",
   VAR_6[VAR_16], VAR_6[VAR_16] + VAR_3);
  return -VAR_0;
 }

 VAR_17->chip.label = VAR_18;
 VAR_17->chip.parent = VAR_15;
 VAR_17->chip.owner = VAR_5;
 VAR_17->chip.base = -1;
 VAR_17->chip.ngpio = VAR_4;
 VAR_17->chip.names = VAR_14;
 VAR_17->chip.get_direction = VAR_10;
 VAR_17->chip.direction_input = VAR_7;
 VAR_17->chip.direction_output = VAR_8;
 VAR_17->chip.get = VAR_9;
 VAR_17->chip.get_multiple = VAR_11;
 VAR_17->chip.set = VAR_12;
 VAR_17->chip.set_multiple = VAR_13;
 VAR_17->base = VAR_6[VAR_16];

 FUNC_6(&VAR_17->lock);

 VAR_19 = FUNC_2(VAR_15, &VAR_17->chip, VAR_17);
 if (VAR_19) {
  FUNC_0(VAR_15, "GPIO registering failed (%d)\n", VAR_19);
  return VAR_19;
 }


 FUNC_5(0x80, VAR_6[VAR_16] + 3);
 FUNC_5(0x00, VAR_6[VAR_16]);
 FUNC_5(0x00, VAR_6[VAR_16] + 1);
 FUNC_5(0x00, VAR_6[VAR_16] + 2);
 FUNC_5(0x80, VAR_6[VAR_16] + 7);
 FUNC_5(0x00, VAR_6[VAR_16] + 4);
 FUNC_5(0x00, VAR_6[VAR_16] + 5);
 FUNC_5(0x00, VAR_6[VAR_16] + 6);

 return 0;
}
