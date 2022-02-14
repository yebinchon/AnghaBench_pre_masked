
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int origin; } ;
struct TYPE_5__ {int use; TYPE_1__ s; int classname; int targetname; } ;
typedef TYPE_2__ gentity_t ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

void FUNC_2( gentity_t *VAR_1 ) {
 if (!VAR_1->targetname)
  FUNC_0("untargeted %s at %s\n", VAR_1->classname, FUNC_1(VAR_1->s.origin));

 VAR_1->use = VAR_0;
}
