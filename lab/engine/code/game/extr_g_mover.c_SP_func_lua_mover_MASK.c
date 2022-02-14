
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* use ) (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;scalar_t__ targetname; } ;
typedef TYPE_1__ gentity_t ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;

void FUNC_1( gentity_t *VAR_0 ) {
 if (VAR_0->targetname) {
  VAR_0->use = FUNC_0;
 } else {
  FUNC_0(VAR_0, VAR_0, VAR_0);
 }
}
