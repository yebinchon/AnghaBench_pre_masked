
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_2__ {int down; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

qboolean FUNC_0( int VAR_3 ) {
 if ( VAR_3 < 0 || VAR_3 >= VAR_0 ) {
  return VAR_2;
 }

 return VAR_1[VAR_3].down;
}
