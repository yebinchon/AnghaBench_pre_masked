
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* brightness; } ;
struct tca6507_led {scalar_t__ ontime; scalar_t__ offtime; int bank; int blink; int num; TYPE_1__ led_cdev; scalar_t__ off_dflt; scalar_t__ on_dflt; struct tca6507_chip* chip; } ;
struct tca6507_chip {struct bank* bank; } ;
struct bank {int level; scalar_t__ level_use; scalar_t__ time_use; scalar_t__ ontime; scalar_t__ offtime; scalar_t__ off_dflt; scalar_t__ on_dflt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int) ;
 int * VAR_7 ;
 int * VAR_8 ;
 scalar_t__ FUNC_3 (scalar_t__,int*,int*) ;
 int FUNC_4 (struct tca6507_chip*,int,int) ;
 int FUNC_5 (struct tca6507_chip*,int ,int ) ;
 int FUNC_6 (struct tca6507_chip*,int) ;

__attribute__((used)) static int FUNC_7(struct tca6507_led *VAR_9)
{


 int VAR_10 = FUNC_1(VAR_9->led_cdev.brightness);
 struct tca6507_chip *VAR_11 = VAR_9->chip;
 int VAR_12, VAR_13;
 int VAR_14;
 struct bank *VAR_15;
 int VAR_16 = 0;

 VAR_9->led_cdev.brightness = FUNC_0(VAR_10);
 if (VAR_10 == 0) {
  FUNC_5(VAR_11, VAR_9->num, VAR_5);
  return 0;
 }

 if (VAR_9->ontime == 0 || VAR_9->offtime == 0) {






  int VAR_17 = -1;
  int VAR_18 = 15-VAR_10;

  if (VAR_10 == 15) {
   FUNC_5(VAR_11, VAR_9->num, VAR_6);
   return 0;
  }

  for (VAR_14 = VAR_4; VAR_14 >= VAR_0; VAR_14--) {
   int VAR_19;
   if (VAR_11->bank[VAR_14].level == VAR_10 ||
       VAR_11->bank[VAR_14].level_use == 0) {
    VAR_17 = VAR_14;
    break;
   }
   VAR_19 = FUNC_2(VAR_10 - VAR_11->bank[VAR_14].level);
   if (VAR_19 < VAR_18) {
    VAR_18 = VAR_19;
    VAR_17 = VAR_14;
   }
  }
  if (VAR_17 == -1) {

   FUNC_5(VAR_11, VAR_9->num, VAR_6);
   VAR_9->led_cdev.brightness = VAR_3;
   return 0;
  }

  if (!VAR_11->bank[VAR_17].level_use)
   FUNC_4(VAR_11, VAR_17, VAR_10);

  VAR_11->bank[VAR_17].level_use++;
  VAR_9->bank = VAR_17;
  FUNC_5(VAR_11, VAR_9->num, VAR_7[VAR_17]);
  VAR_9->led_cdev.brightness = FUNC_0(VAR_11->bank[VAR_17].level);
  return 0;
 }






 if (FUNC_3(VAR_9->ontime, &VAR_12, &VAR_13) < 0)
  return -VAR_2;
 if (FUNC_3(VAR_9->offtime, &VAR_12, &VAR_13) < 0)
  return -VAR_2;

 for (VAR_14 = VAR_0; VAR_14 <= VAR_1; VAR_14++) {
  if (VAR_11->bank[VAR_14].level_use == 0)

   break;
  if (VAR_11->bank[VAR_14].level != VAR_10)




   continue;

  if (VAR_11->bank[VAR_14].time_use == 0)

   break;

  if (!(VAR_11->bank[VAR_14].on_dflt ||
        VAR_9->on_dflt ||
        VAR_11->bank[VAR_14].ontime == VAR_9->ontime))

   continue;

  if (!(VAR_11->bank[VAR_14].off_dflt ||
        VAR_9->off_dflt ||
        VAR_11->bank[VAR_14].offtime == VAR_9->offtime))

   continue;


  break;
 }

 if (VAR_14 > VAR_1)

  return -VAR_2;

 VAR_15 = &VAR_11->bank[VAR_14];
 if (VAR_15->level_use == 0)
  FUNC_4(VAR_11, VAR_14, VAR_10);
 VAR_15->level_use++;
 VAR_9->bank = VAR_14;

 if (VAR_15->on_dflt ||
     !VAR_9->on_dflt ||
     VAR_15->time_use == 0) {
  VAR_15->ontime = VAR_9->ontime;
  VAR_15->on_dflt = VAR_9->on_dflt;
  VAR_16 = 1;
 }

 if (VAR_15->off_dflt ||
     !VAR_9->off_dflt ||
     VAR_15->time_use == 0) {
  VAR_15->offtime = VAR_9->offtime;
  VAR_15->off_dflt = VAR_9->off_dflt;
  VAR_16 = 1;
 }

 if (VAR_16)
  FUNC_6(VAR_11, VAR_14);

 VAR_9->ontime = VAR_15->ontime;
 VAR_9->offtime = VAR_15->offtime;

 VAR_15->time_use++;
 VAR_9->blink = 1;
 VAR_9->led_cdev.brightness = FUNC_0(VAR_15->level);
 FUNC_5(VAR_11, VAR_9->num, VAR_8[VAR_14]);
 return 0;
}
