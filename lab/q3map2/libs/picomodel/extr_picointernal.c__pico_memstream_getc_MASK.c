
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int picoMemStream_t ;


 scalar_t__ FUNC_0 (int *,int*,int) ;

int FUNC_1( picoMemStream_t *VAR_0 ){
 int VAR_1 = 0;


 if ( VAR_0 == ((void*)0) ) {
  return -1;
 }


 if ( FUNC_0( VAR_0, &VAR_1, 1 ) == 0 ) {
  return -1;
 }

 return VAR_1;
}
