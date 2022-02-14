
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int eType; } ;
struct TYPE_8__ {int svFlags; } ;
struct TYPE_10__ {scalar_t__ nextthink; int think; int touch; TYPE_2__ s; TYPE_1__ r; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_11__ {scalar_t__ time; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_3 ;
 TYPE_5__ VAR_4 ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_5 ;

void FUNC_3( gentity_t *VAR_6 ) {
 FUNC_1 (VAR_6);


 VAR_6->r.svFlags &= ~VAR_3;


 FUNC_0("sound/world/jumppad.wav");

 VAR_6->s.eType = VAR_1;
 VAR_6->touch = VAR_5;
 VAR_6->think = VAR_0;
 VAR_6->nextthink = VAR_4.time + VAR_2;
 FUNC_2 (VAR_6);
}
