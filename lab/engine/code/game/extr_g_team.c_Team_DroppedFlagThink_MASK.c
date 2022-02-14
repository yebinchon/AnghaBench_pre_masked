
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* item; } ;
typedef TYPE_2__ gentity_t ;
struct TYPE_4__ {scalar_t__ giTag; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;

void FUNC_2(gentity_t *VAR_6) {
 int VAR_7 = VAR_4;

 if( VAR_6->item->giTag == VAR_2 ) {
  VAR_7 = VAR_5;
 }
 else if( VAR_6->item->giTag == VAR_0 ) {
  VAR_7 = VAR_3;
 }
 else if( VAR_6->item->giTag == VAR_1 ) {
  VAR_7 = VAR_4;
 }

 FUNC_1( FUNC_0( VAR_7 ), VAR_7 );

}
