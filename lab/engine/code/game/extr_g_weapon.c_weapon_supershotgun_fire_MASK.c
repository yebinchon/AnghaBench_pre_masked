
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int trBase; } ;
struct TYPE_8__ {int eventParm; int origin2; TYPE_1__ pos; int number; int otherEntityNum; } ;
struct TYPE_9__ {TYPE_2__ s; } ;
typedef TYPE_3__ gentity_t ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int,TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 () ;

void FUNC_5 (gentity_t *VAR_3) {
 gentity_t *VAR_4;


 VAR_4 = FUNC_0( VAR_2, VAR_0 );
 FUNC_3( VAR_1, 4096, VAR_4->s.origin2 );
 FUNC_2( VAR_4->s.origin2 );
 VAR_4->s.eventParm = FUNC_4() & 255;
 VAR_4->s.otherEntityNum = VAR_3->s.number;

 FUNC_1( VAR_4->s.pos.trBase, VAR_4->s.origin2, VAR_4->s.eventParm, VAR_3 );
}
