
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ml_effect_state {scalar_t__ stop_at; scalar_t__ play_at; struct ff_effect* effect; } ;
struct ff_envelope {int attack_length; int fade_length; int fade_level; int attack_level; } ;
struct TYPE_2__ {scalar_t__ length; } ;
struct ff_effect {TYPE_1__ replay; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,int,...) ;
 scalar_t__ FUNC_5 (unsigned long,scalar_t__) ;
 scalar_t__ FUNC_6 (unsigned long,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(struct ml_effect_state *VAR_2, int VAR_3,
     struct ff_envelope *VAR_4)
{
 struct ff_effect *VAR_5 = VAR_2->effect;
 unsigned long VAR_6 = VAR_0;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 if (VAR_4->attack_length &&
     FUNC_6(VAR_6,
   VAR_2->play_at + FUNC_3(VAR_4->attack_length))) {
  FUNC_4("value = 0x%x, attack_level = 0x%x\n",
    VAR_3, VAR_4->attack_level);
  VAR_7 = FUNC_1(VAR_6 - VAR_2->play_at);
  VAR_8 = VAR_4->attack_length;
  VAR_9 = FUNC_2(VAR_1, VAR_4->attack_level, 0x7fff);

 } else if (VAR_4->fade_length && VAR_5->replay.length &&
     FUNC_5(VAR_6,
         VAR_2->stop_at - FUNC_3(VAR_4->fade_length)) &&
     FUNC_6(VAR_6, VAR_2->stop_at)) {
  VAR_7 = FUNC_1(VAR_2->stop_at - VAR_6);
  VAR_8 = VAR_4->fade_length;
  VAR_9 = FUNC_2(VAR_1, VAR_4->fade_level, 0x7fff);
 } else
  return VAR_3;

 VAR_10 = FUNC_0(VAR_3) - VAR_9;

 FUNC_4("difference = %d\n", VAR_10);
 FUNC_4("time_from_level = 0x%x\n", VAR_7);
 FUNC_4("time_of_envelope = 0x%x\n", VAR_8);

 VAR_10 = VAR_10 * VAR_7 / VAR_8;

 FUNC_4("difference = %d\n", VAR_10);

 return VAR_3 < 0 ?
  -(VAR_10 + VAR_9) : (VAR_10 + VAR_9);
}
