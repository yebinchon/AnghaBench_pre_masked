
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t team_t ;
struct TYPE_2__ {scalar_t__* teamScores; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int,size_t) ;
 TYPE_1__ VAR_3 ;

team_t FUNC_1( int VAR_4 ) {
 int VAR_5[VAR_1];

 VAR_5[VAR_0] = FUNC_0( VAR_4, VAR_0 );
 VAR_5[VAR_2] = FUNC_0( VAR_4, VAR_2 );

 if ( VAR_5[VAR_0] > VAR_5[VAR_2] ) {
  return VAR_2;
 }
 if ( VAR_5[VAR_2] > VAR_5[VAR_0] ) {
  return VAR_0;
 }

 if ( VAR_3.teamScores[VAR_0] > VAR_3.teamScores[VAR_2] ) {
  return VAR_2;
 }
 return VAR_0;
}
