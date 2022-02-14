
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ml_effect_state {unsigned long play_at; unsigned long adj_at; unsigned long stop_at; TYPE_2__* effect; } ;
struct ff_envelope {scalar_t__ fade_length; scalar_t__ attack_length; } ;
struct TYPE_3__ {scalar_t__ length; } ;
struct TYPE_4__ {TYPE_1__ replay; } ;


 scalar_t__ VAR_0 ;
 struct ff_envelope* FUNC_0 (TYPE_2__*) ;
 unsigned long FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_3(struct ml_effect_state *VAR_1)
{
 const struct ff_envelope *VAR_2 = FUNC_0(VAR_1->effect);
 unsigned long VAR_3, VAR_4, VAR_5;

 if (VAR_2->attack_length) {
  VAR_3 = VAR_1->play_at +
   FUNC_1(VAR_2->attack_length);
  if (FUNC_2(VAR_1->adj_at, VAR_3))
   return VAR_1->adj_at +
     FUNC_1(VAR_0);
 }

 if (VAR_1->effect->replay.length) {
  if (VAR_2->fade_length) {

   VAR_4 = VAR_1->stop_at -
     FUNC_1(VAR_2->fade_length);

   if (FUNC_2(VAR_1->adj_at, VAR_4))
    return VAR_4;


   VAR_5 = VAR_1->adj_at +
     FUNC_1(VAR_0);
   if (FUNC_2(VAR_5, VAR_1->stop_at))
    return VAR_5;
  }

  return VAR_1->stop_at;
 }

 return VAR_1->play_at;
}
