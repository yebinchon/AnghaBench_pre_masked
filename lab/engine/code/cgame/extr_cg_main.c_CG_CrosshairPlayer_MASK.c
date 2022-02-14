
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ time; scalar_t__ crosshairClientTime; int crosshairClientNum; } ;


 TYPE_1__ VAR_0 ;

int FUNC_0( void ) {
 if ( VAR_0.time > ( VAR_0.crosshairClientTime + 1000 ) ) {
  return -1;
 }
 return VAR_0.crosshairClientNum;
}
