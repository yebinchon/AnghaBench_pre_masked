
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int fade_level; int fade_length; int attack_level; int attack_length; } ;
struct TYPE_7__ {int period; TYPE_2__ envelope; int phase; int offset; int magnitude; int waveform; } ;
struct TYPE_5__ {int strong_magnitude; int weak_magnitude; } ;
struct TYPE_8__ {TYPE_3__ periodic; TYPE_1__ rumble; } ;
struct ff_effect {int type; TYPE_4__ u; } ;
struct ff_device {int ffbit; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct ff_device *VAR_3, struct ff_effect *VAR_4)
{
 int VAR_5;

 switch (VAR_4->type) {
 case 128:
  if (!FUNC_1(VAR_1, VAR_3->ffbit))
   return -VAR_0;





  VAR_5 = VAR_4->u.rumble.strong_magnitude / 3 +
       VAR_4->u.rumble.weak_magnitude / 6;

  VAR_4->type = VAR_1;
  VAR_4->u.periodic.waveform = VAR_2;
  VAR_4->u.periodic.period = 50;
  VAR_4->u.periodic.magnitude = FUNC_0(VAR_5, 0x7fff);
  VAR_4->u.periodic.offset = 0;
  VAR_4->u.periodic.phase = 0;
  VAR_4->u.periodic.envelope.attack_length = 0;
  VAR_4->u.periodic.envelope.attack_level = 0;
  VAR_4->u.periodic.envelope.fade_length = 0;
  VAR_4->u.periodic.envelope.fade_level = 0;

  return 0;

 default:

  return 0;
 }
}
