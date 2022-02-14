
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powermate_device {int static_brightness; int requires_update; int pulse_asleep; int pulse_awake; int pulse_speed; int pulse_table; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct powermate_device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct powermate_device *VAR_4, int VAR_5, int VAR_6,
    int VAR_7, int VAR_8, int VAR_9)
{
 unsigned long VAR_10;

 if (VAR_6 < 0)
  VAR_6 = 0;
 if (VAR_7 < 0)
  VAR_7 = 0;
 if (VAR_6 > 510)
  VAR_6 = 510;
 if (VAR_7 > 2)
  VAR_7 = 2;

 VAR_8 = !!VAR_8;
 VAR_9 = !!VAR_9;


 FUNC_1(&VAR_4->lock, VAR_10);


 if (VAR_5 != VAR_4->static_brightness) {
  VAR_4->static_brightness = VAR_5;
  VAR_4->requires_update |= VAR_3;
 }
 if (VAR_8 != VAR_4->pulse_asleep) {
  VAR_4->pulse_asleep = VAR_8;
  VAR_4->requires_update |= (VAR_0 | VAR_3);
 }
 if (VAR_9 != VAR_4->pulse_awake) {
  VAR_4->pulse_awake = VAR_9;
  VAR_4->requires_update |= (VAR_1 | VAR_3);
 }
 if (VAR_6 != VAR_4->pulse_speed || VAR_7 != VAR_4->pulse_table) {
  VAR_4->pulse_speed = VAR_6;
  VAR_4->pulse_table = VAR_7;
  VAR_4->requires_update |= VAR_2;
 }

 FUNC_0(VAR_4);

 FUNC_2(&VAR_4->lock, VAR_10);
}
