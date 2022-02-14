
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* label; int base; int get_multiple; int get; int direction_input; int get_direction; int names; int ngpio; int owner; struct device* parent; } ;
struct idi_48_gpio {TYPE_1__ chip; int ack_lock; int lock; scalar_t__ base; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__* VAR_8 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 char* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,TYPE_1__*,struct idi_48_gpio*) ;
 struct idi_48_gpio* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,int ,int ,int ,char const* const,struct idi_48_gpio*) ;
 int FUNC_5 (struct device*,scalar_t__,scalar_t__,char const* const) ;
 int FUNC_6 (TYPE_1__*,int *,int ,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_7 (scalar_t__) ;
 int * VAR_17 ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_18, unsigned int VAR_19)
{
 struct idi_48_gpio *VAR_20;
 const char *const VAR_21 = FUNC_1(VAR_18);
 int VAR_22;

 VAR_20 = FUNC_3(VAR_18, sizeof(*VAR_20), VAR_2);
 if (!VAR_20)
  return -VAR_1;

 if (!FUNC_5(VAR_18, VAR_8[VAR_19], VAR_4, VAR_21)) {
  FUNC_0(VAR_18, "Unable to lock port addresses (0x%X-0x%X)\n",
   VAR_8[VAR_19], VAR_8[VAR_19] + VAR_4);
  return -VAR_0;
 }

 VAR_20->chip.label = VAR_21;
 VAR_20->chip.parent = VAR_18;
 VAR_20->chip.owner = VAR_7;
 VAR_20->chip.base = -1;
 VAR_20->chip.ngpio = VAR_3;
 VAR_20->chip.names = VAR_10;
 VAR_20->chip.get_direction = VAR_13;
 VAR_20->chip.direction_input = VAR_11;
 VAR_20->chip.get = VAR_12;
 VAR_20->chip.get_multiple = VAR_14;
 VAR_20->base = VAR_8[VAR_19];

 FUNC_9(&VAR_20->lock);
 FUNC_10(&VAR_20->ack_lock);

 VAR_22 = FUNC_2(VAR_18, &VAR_20->chip, VAR_20);
 if (VAR_22) {
  FUNC_0(VAR_18, "GPIO registering failed (%d)\n", VAR_22);
  return VAR_22;
 }


 FUNC_8(0, VAR_8[VAR_19] + 7);
 FUNC_7(VAR_8[VAR_19] + 7);

 VAR_22 = FUNC_6(&VAR_20->chip, &VAR_16, 0,
  VAR_9, VAR_6);
 if (VAR_22) {
  FUNC_0(VAR_18, "Could not add irqchip (%d)\n", VAR_22);
  return VAR_22;
 }

 VAR_22 = FUNC_4(VAR_18, VAR_17[VAR_19], VAR_15, VAR_5,
  VAR_21, VAR_20);
 if (VAR_22) {
  FUNC_0(VAR_18, "IRQ handler registering failed (%d)\n", VAR_22);
  return VAR_22;
 }

 return 0;
}
