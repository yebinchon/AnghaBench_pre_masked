
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int down; scalar_t__ repeats; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 () ;
 int VAR_6 ;
 int FUNC_2 (scalar_t__,int ,int,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;

void FUNC_3( int VAR_12, unsigned VAR_13 )
{
 VAR_9[VAR_12].repeats = 0;
 VAR_9[VAR_12].down = VAR_10;
 VAR_7--;

 if (VAR_7 < 0) {
  VAR_7 = 0;
 }


 if ( VAR_12 == VAR_3 || ( VAR_12 == VAR_4 && VAR_9[VAR_5].down ) )
  return;







 FUNC_0( VAR_12, VAR_10, VAR_13 );

 if ( FUNC_1( ) & VAR_2 && VAR_11 ) {
  FUNC_2( VAR_11, VAR_6, VAR_12, VAR_10 );
 } else if ( FUNC_1( ) & VAR_1 && VAR_8 ) {
  FUNC_2( VAR_8, VAR_0, VAR_12, VAR_10 );
 }
}
