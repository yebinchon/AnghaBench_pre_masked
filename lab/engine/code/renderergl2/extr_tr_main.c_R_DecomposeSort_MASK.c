
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int shader_t ;
struct TYPE_2__ {int ** sortedShaders; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 TYPE_1__ VAR_6 ;

void FUNC_0( unsigned VAR_7, int *VAR_8, shader_t **VAR_9,
      int *VAR_10, int *VAR_11, int *VAR_12 ) {
 *VAR_10 = ( VAR_7 >> VAR_1 ) & 31;
 *VAR_9 = VAR_6.sortedShaders[ ( VAR_7 >> VAR_4 ) & (VAR_0-1) ];
 *VAR_8 = ( VAR_7 >> VAR_3 ) & VAR_5;
 *VAR_12 = (VAR_7 >> VAR_2 ) & 1;
 *VAR_11 = VAR_7 & 1;
}
