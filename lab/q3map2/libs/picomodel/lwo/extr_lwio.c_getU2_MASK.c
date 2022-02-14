
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int picoMemStream_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,unsigned short*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (unsigned short*,int,int) ;

unsigned short FUNC_2( picoMemStream_t *VAR_2 ){
 unsigned short VAR_3;

 if ( VAR_1 == VAR_0 ) {
  return 0;
 }
 if ( 1 != FUNC_0( VAR_2, &VAR_3, 2 ) ) {
  VAR_1 = VAR_0;
  return 0;
 }
 FUNC_1( &VAR_3, 2, 1 );
 VAR_1 += 2;
 return VAR_3;
}
