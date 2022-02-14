
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int angles; int origin; int eType; } ;
struct TYPE_8__ {int damage; int spawnflags; int think; int use; int movedir; TYPE_1__ s; struct TYPE_8__* enemy; scalar_t__ target; int classname; } ;
typedef TYPE_2__ gentity_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (char*,int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ) ;

void FUNC_7 (gentity_t *VAR_4)
{
 gentity_t *VAR_5;

 VAR_4->s.eType = VAR_0;

 if (VAR_4->target) {
  VAR_5 = FUNC_1 (((void*)0), FUNC_0(VAR_3), VAR_4->target);
  if (!VAR_5) {
   FUNC_2 ("%s at %s: %s is a bad target\n", VAR_4->classname, FUNC_6(VAR_4->s.origin), VAR_4->target);
  }
  VAR_4->enemy = VAR_5;
 } else {
  FUNC_3 (VAR_4->s.angles, VAR_4->movedir);
 }

 VAR_4->use = VAR_2;
 VAR_4->think = VAR_1;

 if ( !VAR_4->damage ) {
  VAR_4->damage = 1;
 }

 if (VAR_4->spawnflags & 1)
  FUNC_5 (VAR_4);
 else
  FUNC_4 (VAR_4);
}
