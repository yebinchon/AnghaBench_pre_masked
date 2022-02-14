
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_5__ {scalar_t__ menuPosition; int y; TYPE_1__* parent; } ;
struct TYPE_6__ {int numitems; int curvalue; int * itemnames; TYPE_2__ generic; } ;
typedef TYPE_3__ menulist_s ;
struct TYPE_4__ {scalar_t__ cursor; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int ,int,float*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 float* VAR_5 ;
 float* VAR_6 ;

__attribute__((used)) static void FUNC_1( void *VAR_7 ) {
 menulist_s *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 float *VAR_12;
 qboolean VAR_13;
 int VAR_14;

 VAR_8 = (menulist_s *)VAR_7;

 VAR_13 = (VAR_8->generic.parent->cursor == VAR_8->generic.menuPosition);

 VAR_9 = 320;
 VAR_10 = VAR_8->generic.y;
 for( VAR_11 = 0; VAR_11 < VAR_8->numitems; VAR_11++ ) {
  VAR_14 = VAR_2|VAR_4|VAR_1;
  if( VAR_11 == VAR_8->curvalue ) {
   VAR_12 = VAR_6;
   if( VAR_13 ) {
    VAR_14 |= VAR_3;
   }
  }
  else {
   VAR_12 = VAR_5;
  }

  FUNC_0( VAR_9, VAR_10, VAR_8->itemnames[VAR_11], VAR_14, VAR_12 );
  VAR_10 += VAR_0;
 }
}
