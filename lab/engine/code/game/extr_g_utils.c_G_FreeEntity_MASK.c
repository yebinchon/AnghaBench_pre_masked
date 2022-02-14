
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* classname; int inuse; int freetime; scalar_t__ neverFree; } ;
typedef TYPE_1__ gentity_t ;
struct TYPE_7__ {int time; } ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2( gentity_t *VAR_2 ) {
 FUNC_1 (VAR_2);

 if ( VAR_2->neverFree ) {
  return;
 }

 FUNC_0 (VAR_2, 0, sizeof(*VAR_2));
 VAR_2->classname = "freed";
 VAR_2->freetime = VAR_0.time;
 VAR_2->inuse = VAR_1;
}
