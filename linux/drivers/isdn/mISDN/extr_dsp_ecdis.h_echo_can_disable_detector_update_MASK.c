
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ec_disable_detector_state {int channel_level; int notch_level; int tone_cycle_duration; int good_cycles; int hit; void* tone_present; int notch; } ;
typedef int int16_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static inline int
FUNC_2(struct ec_disable_detector_state *VAR_2,
     int16_t VAR_3)
{
 int16_t VAR_4;

 VAR_4 = FUNC_1(&VAR_2->notch, VAR_3);






 VAR_2->channel_level += ((FUNC_0(VAR_3) - VAR_2->channel_level) >> 5);
 VAR_2->notch_level += ((FUNC_0(VAR_4) - VAR_2->notch_level) >> 4);
 if (VAR_2->channel_level > 280) {


  if (VAR_2->notch_level * 6 < VAR_2->channel_level) {

   if (!VAR_2->tone_present) {

    if (VAR_2->tone_cycle_duration >= 425 * 8
        && VAR_2->tone_cycle_duration <= 475 * 8) {
     VAR_2->good_cycles++;
     if (VAR_2->good_cycles > 2)
      VAR_2->hit = VAR_1;
    }
    VAR_2->tone_cycle_duration = 0;
   }
   VAR_2->tone_present = VAR_1;
  } else
   VAR_2->tone_present = VAR_0;
  VAR_2->tone_cycle_duration++;
 } else {
  VAR_2->tone_present = VAR_0;
  VAR_2->tone_cycle_duration = 0;
  VAR_2->good_cycles = 0;
 }
 return VAR_2->hit;
}
