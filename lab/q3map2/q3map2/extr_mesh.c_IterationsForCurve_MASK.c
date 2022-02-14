
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;

int FUNC_1( float VAR_0, int VAR_1 ){
 int VAR_2, VAR_3;



 for ( VAR_2 = 0; VAR_2 < 3; VAR_2++ )
 {
  VAR_3 = VAR_1 * 16 * FUNC_0( 2, VAR_2 );
  if ( VAR_3 >= VAR_0 ) {
   break;
  }
 }


 return VAR_2;
}
