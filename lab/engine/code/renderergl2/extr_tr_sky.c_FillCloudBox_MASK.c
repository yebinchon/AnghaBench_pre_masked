
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int shader_t ;
struct TYPE_2__ {int (* ftol ) (int) ;} ;


 int FUNC_0 (int*,int*,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int,int,int *,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 TYPE_1__ VAR_1 ;
 int **** VAR_2 ;
 int ** VAR_3 ;
 int *** VAR_4 ;
 int** VAR_5 ;
 int** VAR_6 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8( const shader_t *VAR_7, int VAR_8 )
{
 int VAR_9;

 for ( VAR_9 =0; VAR_9 < 6; VAR_9++ )
 {
  int VAR_10[2], VAR_11[2];
  int VAR_12, VAR_13;
  float VAR_14;

  if ( 1 )
  {
   VAR_14 = -VAR_0;


   if ( VAR_9 == 5 )
    continue;
  }
  else
  {
   switch( VAR_9 )
   {
   case 0:
   case 1:
   case 2:
   case 3:
    VAR_14 = -1;
    break;
   case 5:

    continue;
   case 4:
   default:
    VAR_14 = -VAR_0;
    break;
   }
  }

  VAR_6[0][VAR_9] = FUNC_3( VAR_6[0][VAR_9] * VAR_0 ) / VAR_0;
  VAR_6[1][VAR_9] = FUNC_3( VAR_6[1][VAR_9] * VAR_0 ) / VAR_0;
  VAR_5[0][VAR_9] = FUNC_2( VAR_5[0][VAR_9] * VAR_0 ) / VAR_0;
  VAR_5[1][VAR_9] = FUNC_2( VAR_5[1][VAR_9] * VAR_0 ) / VAR_0;

  if ( ( VAR_6[0][VAR_9] >= VAR_5[0][VAR_9] ) ||
    ( VAR_6[1][VAR_9] >= VAR_5[1][VAR_9] ) )
  {
   continue;
  }

  VAR_10[0] = VAR_1.ftol(VAR_6[0][VAR_9] * VAR_0);
  VAR_10[1] = VAR_1.ftol(VAR_6[1][VAR_9] * VAR_0);
  VAR_11[0] = VAR_1.ftol(VAR_5[0][VAR_9] * VAR_0);
  VAR_11[1] = VAR_1.ftol(VAR_5[1][VAR_9] * VAR_0);

  if ( VAR_10[0] < -VAR_0 )
   VAR_10[0] = -VAR_0;
  else if ( VAR_10[0] > VAR_0 )
   VAR_10[0] = VAR_0;
  if ( VAR_10[1] < VAR_14 )
   VAR_10[1] = VAR_14;
  else if ( VAR_10[1] > VAR_0 )
   VAR_10[1] = VAR_0;

  if ( VAR_11[0] < -VAR_0 )
   VAR_11[0] = -VAR_0;
  else if ( VAR_11[0] > VAR_0 )
   VAR_11[0] = VAR_0;
  if ( VAR_11[1] < VAR_14 )
   VAR_11[1] = VAR_14;
  else if ( VAR_11[1] > VAR_0 )
   VAR_11[1] = VAR_0;




  for ( VAR_13 = VAR_10[1]+VAR_0; VAR_13 <= VAR_11[1]+VAR_0; VAR_13++ )
  {
   for ( VAR_12 = VAR_10[0]+VAR_0; VAR_12 <= VAR_11[0]+VAR_0; VAR_12++ )
   {
    FUNC_1( ( VAR_12 - VAR_0 ) / ( float ) VAR_0,
       ( VAR_13 - VAR_0 ) / ( float ) VAR_0,
       VAR_9,
       ((void*)0),
       VAR_3[VAR_13][VAR_12] );

    VAR_4[VAR_13][VAR_12][0] = VAR_2[VAR_9][VAR_13][VAR_12][0];
    VAR_4[VAR_13][VAR_12][1] = VAR_2[VAR_9][VAR_13][VAR_12][1];
   }
  }


  FUNC_0( VAR_10, VAR_11, ( VAR_8 == 0 ) );
 }
}
