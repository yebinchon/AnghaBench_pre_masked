
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct image_s {int dummy; } ;


 int FUNC_0 (struct image_s*) ;
 int VAR_0 ;
 int const VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int ** VAR_2 ;
 int ** VAR_3 ;

__attribute__((used)) static void FUNC_5( struct image_s *VAR_4, const int VAR_5[2], const int VAR_6[2] )
{
 int VAR_7, VAR_8;

 FUNC_0( VAR_4 );

 for ( VAR_8 = VAR_5[1]+VAR_1; VAR_8 < VAR_6[1]+VAR_1; VAR_8++ )
 {
  FUNC_1( VAR_0 );

  for ( VAR_7 = VAR_5[0]+VAR_1; VAR_7 <= VAR_6[0]+VAR_1; VAR_7++ )
  {
   FUNC_3( VAR_3[VAR_8][VAR_7] );
   FUNC_4( VAR_2[VAR_8][VAR_7] );

   FUNC_3( VAR_3[VAR_8+1][VAR_7] );
   FUNC_4( VAR_2[VAR_8+1][VAR_7] );
  }

  FUNC_2();
 }
}
