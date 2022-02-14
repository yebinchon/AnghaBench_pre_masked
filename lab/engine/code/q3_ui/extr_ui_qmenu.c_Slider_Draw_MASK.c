
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_6__ {int x; int y; scalar_t__ menuPosition; int flags; int name; TYPE_1__* parent; } ;
struct TYPE_7__ {scalar_t__ maxvalue; scalar_t__ minvalue; float range; float curvalue; TYPE_2__ generic; } ;
typedef TYPE_3__ menuslider_s ;
struct TYPE_5__ {scalar_t__ cursor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int,int,int) ;
 int FUNC_1 (int,int,int ,int,float*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (float*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 float* VAR_9 ;
 float* VAR_10 ;
 float* VAR_11 ;

__attribute__((used)) static void FUNC_3( menuslider_s *VAR_12 ) {
 int VAR_13;
 int VAR_14;
 int VAR_15;
 float *VAR_16;
 int VAR_17;
 qboolean VAR_18;

 VAR_13 = VAR_12->generic.x;
 VAR_14 = VAR_12->generic.y;
 VAR_18 = (VAR_12->generic.parent->cursor == VAR_12->generic.menuPosition);

 if( VAR_12->generic.flags & VAR_0 ) {
  VAR_16 = VAR_9;
  VAR_15 = VAR_5;
 }
 else if( VAR_18 ) {
  VAR_16 = VAR_10;
  VAR_15 = VAR_5 | VAR_3;
 }
 else {
  VAR_16 = VAR_11;
  VAR_15 = VAR_5;
 }


 FUNC_1( VAR_13 - VAR_2, VAR_14, VAR_12->generic.name, VAR_4|VAR_15, VAR_16 );


 FUNC_2( VAR_16 );
 FUNC_0( VAR_13 + VAR_2, VAR_14, 96, 16, VAR_6 );
 FUNC_2( ((void*)0) );


 if( VAR_12->maxvalue > VAR_12->minvalue ) {
  VAR_12->range = ( VAR_12->curvalue - VAR_12->minvalue ) / ( float ) ( VAR_12->maxvalue - VAR_12->minvalue );
  if( VAR_12->range < 0 ) {
   VAR_12->range = 0;
  }
  else if( VAR_12->range > 1) {
   VAR_12->range = 1;
  }
 }
 else {
  VAR_12->range = 0;
 }


 if( VAR_15 & VAR_3) {
  VAR_17 = VAR_8;
 }
 else {
  VAR_17 = VAR_7;
 }

 FUNC_0( (int)( VAR_13 + 2*VAR_2 + (VAR_1-1)*VAR_2* VAR_12->range ) - 2, VAR_14 - 2, 12, 20, VAR_17 );
}
