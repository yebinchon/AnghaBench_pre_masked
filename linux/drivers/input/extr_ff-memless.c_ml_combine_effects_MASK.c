
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct ml_effect_state {struct ff_effect* effect; } ;
struct TYPE_9__ {void* weak_magnitude; void* strong_magnitude; } ;
struct TYPE_8__ {int envelope; int magnitude; } ;
struct TYPE_7__ {void* end_level; void* start_level; } ;
struct TYPE_6__ {int envelope; int level; } ;
struct TYPE_10__ {TYPE_4__ rumble; TYPE_3__ periodic; TYPE_2__ ramp; TYPE_1__ constant; } ;
struct ff_effect {int type; int direction; TYPE_5__ u; } ;
typedef int s16 ;





 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct ml_effect_state*,int ,int *) ;
 void* FUNC_2 (int ,int,int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;
 void* FUNC_7 (int ,int) ;
 void* FUNC_8 (int,void*,int,unsigned int) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(struct ff_effect *VAR_0,
          struct ml_effect_state *VAR_1,
          int VAR_2)
{
 struct ff_effect *VAR_3 = VAR_1->effect;
 unsigned int VAR_4, VAR_5, VAR_6;
 int VAR_7, VAR_8;
 s16 VAR_9;

 switch (VAR_3->type) {
 case 130:
  VAR_6 = VAR_3->direction * 360 / 0xffff;
  VAR_9 = FUNC_5(FUNC_1(VAR_1,
     VAR_3->u.constant.level,
     &VAR_3->u.constant.envelope));
  VAR_7 = FUNC_4(FUNC_6(VAR_6), VAR_9) * VAR_2 / 0xffff;
  VAR_8 = FUNC_4(-FUNC_3(VAR_6), VAR_9) * VAR_2 / 0xffff;





  VAR_0->u.ramp.start_level =
   FUNC_2(VAR_0->u.ramp.start_level + VAR_7, -0x80, 0x7f);
  VAR_0->u.ramp.end_level =
   FUNC_2(VAR_0->u.ramp.end_level + VAR_8, -0x80, 0x7f);
  break;

 case 128:
  VAR_4 = (u32)VAR_3->u.rumble.strong_magnitude * VAR_2 / 0xffff;
  VAR_5 = (u32)VAR_3->u.rumble.weak_magnitude * VAR_2 / 0xffff;

  if (VAR_0->u.rumble.strong_magnitude + VAR_4)
   VAR_0->direction = FUNC_8(
    VAR_0->direction,
    VAR_0->u.rumble.strong_magnitude,
    VAR_3->direction, VAR_4);
  else if (VAR_0->u.rumble.weak_magnitude + VAR_5)
   VAR_0->direction = FUNC_8(
    VAR_0->direction,
    VAR_0->u.rumble.weak_magnitude,
    VAR_3->direction, VAR_5);
  else
   VAR_0->direction = 0;
  VAR_0->u.rumble.strong_magnitude =
   FUNC_7(VAR_4 + VAR_0->u.rumble.strong_magnitude,
       0xffffU);
  VAR_0->u.rumble.weak_magnitude =
   FUNC_7(VAR_5 + VAR_0->u.rumble.weak_magnitude, 0xffffU);
  break;

 case 129:
  VAR_6 = FUNC_1(VAR_1, FUNC_0(VAR_3->u.periodic.magnitude),
       &VAR_3->u.periodic.envelope);


  VAR_6 = VAR_6 * VAR_2 / 0x7fff;

  if (VAR_0->u.rumble.strong_magnitude + VAR_6)
   VAR_0->direction = FUNC_8(
    VAR_0->direction,
    VAR_0->u.rumble.strong_magnitude,
    VAR_3->direction, VAR_6);
  else
   VAR_0->direction = 0;
  VAR_0->u.rumble.strong_magnitude =
   FUNC_7(VAR_6 + VAR_0->u.rumble.strong_magnitude, 0xffffU);
  VAR_0->u.rumble.weak_magnitude =
   FUNC_7(VAR_6 + VAR_0->u.rumble.weak_magnitude, 0xffffU);
  break;

 default:
  FUNC_9("invalid type in ml_combine_effects()\n");
  break;
 }

}
