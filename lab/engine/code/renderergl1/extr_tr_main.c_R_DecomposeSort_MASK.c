
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
 TYPE_1__ VAR_5 ;

void FUNC_0( unsigned VAR_6, int *VAR_7, shader_t **VAR_8,
      int *VAR_9, int *VAR_10 ) {
 *VAR_9 = ( VAR_6 >> VAR_1 ) & 31;
 *VAR_8 = VAR_5.sortedShaders[ ( VAR_6 >> VAR_3 ) & (VAR_0-1) ];
 *VAR_7 = ( VAR_6 >> VAR_2 ) & VAR_4;
 *VAR_10 = VAR_6 & 3;
}
