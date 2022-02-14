
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct resource {int start; } ;
struct iforce_core_effect {int flags; struct resource mod2_chunk; struct resource mod1_chunk; } ;
struct iforce {struct iforce_core_effect* core_effects; } ;
struct TYPE_10__ {int interval; int button; } ;
struct TYPE_9__ {int delay; int length; } ;
struct TYPE_6__ {int fade_level; int fade_length; int attack_level; int attack_length; } ;
struct TYPE_7__ {TYPE_1__ envelope; int level; } ;
struct TYPE_8__ {TYPE_2__ constant; } ;
struct ff_effect {int id; int direction; TYPE_5__ trigger; TYPE_4__ replay; TYPE_3__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iforce*,int,int ,int ,int,int,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct iforce*,struct resource*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct iforce*,struct resource*,int ,int ) ;
 scalar_t__ FUNC_3 (struct ff_effect*,struct ff_effect*) ;
 scalar_t__ FUNC_4 (struct iforce*,struct ff_effect*,struct ff_effect*) ;
 scalar_t__ FUNC_5 (struct iforce*,struct ff_effect*,struct ff_effect*) ;
 int FUNC_6 (int ,int ) ;

int FUNC_7(struct iforce *VAR_2, struct ff_effect *VAR_3, struct ff_effect *VAR_4)
{
 int VAR_5 = VAR_3->id;
 struct iforce_core_effect* VAR_6 = VAR_2->core_effects + VAR_5;
 struct resource* VAR_7 = &(VAR_2->core_effects[VAR_5].mod1_chunk);
 struct resource* VAR_8 = &(VAR_2->core_effects[VAR_5].mod2_chunk);
 int VAR_9 = 1;
 int VAR_10 = 1;
 int VAR_11 = 0;

 if (!VAR_4 || FUNC_5(VAR_2, VAR_4, VAR_3)) {
  VAR_9 = FUNC_2(VAR_2, VAR_7,
   VAR_4 != ((void*)0),
   VAR_3->u.constant.level);
  if (VAR_9)
   return VAR_9;
  FUNC_6(VAR_0, VAR_6->flags);
 }

 if (!VAR_4 || FUNC_4(VAR_2, VAR_4, VAR_3)) {
  VAR_10 = FUNC_1(VAR_2, VAR_8,
   VAR_4 != ((void*)0),
   VAR_3->u.constant.envelope.attack_length,
   VAR_3->u.constant.envelope.attack_level,
   VAR_3->u.constant.envelope.fade_length,
   VAR_3->u.constant.envelope.fade_level);
  if (VAR_10)
   return VAR_10;
  FUNC_6(VAR_1, VAR_6->flags);
 }

 if (!VAR_4 || FUNC_3(VAR_4, VAR_3)) {
  VAR_11 = FUNC_0(VAR_2, VAR_3->id,
   VAR_7->start,
   VAR_8->start,
   0x00,
   0x20,
   VAR_3->replay.length,
   VAR_3->replay.delay,
   VAR_3->trigger.button,
   VAR_3->trigger.interval,
   VAR_3->direction);
 }







 return VAR_11 < 0 ? VAR_11 : (VAR_9 && VAR_10);
}
