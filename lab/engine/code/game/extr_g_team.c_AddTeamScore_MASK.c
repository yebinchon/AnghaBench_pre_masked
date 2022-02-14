
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_7__ {void* eventParm; } ;
struct TYPE_6__ {int svFlags; } ;
struct TYPE_8__ {TYPE_2__ s; TYPE_1__ r; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_9__ {scalar_t__* teamScores; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 TYPE_3__* FUNC_0 (int ,int ) ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 TYPE_4__ VAR_9 ;

void FUNC_1(vec3_t VAR_10, int VAR_11, int VAR_12) {
 gentity_t *VAR_13;

 VAR_13 = FUNC_0(VAR_10, VAR_0 );
 VAR_13->r.svFlags |= VAR_6;

 if ( VAR_11 == VAR_8 ) {
  if ( VAR_9.teamScores[ VAR_8 ] + VAR_12 == VAR_9.teamScores[ VAR_7 ] ) {

   VAR_13->s.eventParm = VAR_5;
  }
  else if ( VAR_9.teamScores[ VAR_8 ] <= VAR_9.teamScores[ VAR_7 ] &&
     VAR_9.teamScores[ VAR_8 ] + VAR_12 > VAR_9.teamScores[ VAR_7 ]) {

   VAR_13->s.eventParm = VAR_4;
  }
  else {

   VAR_13->s.eventParm = VAR_3;
  }
 }
 else {
  if ( VAR_9.teamScores[ VAR_7 ] + VAR_12 == VAR_9.teamScores[ VAR_8 ] ) {

   VAR_13->s.eventParm = VAR_5;
  }
  else if ( VAR_9.teamScores[ VAR_7 ] <= VAR_9.teamScores[ VAR_8 ] &&
     VAR_9.teamScores[ VAR_7 ] + VAR_12 > VAR_9.teamScores[ VAR_8 ]) {

   VAR_13->s.eventParm = VAR_2;
  }
  else {

   VAR_13->s.eventParm = VAR_1;
  }
 }
 VAR_9.teamScores[ VAR_11 ] += VAR_12;
}
