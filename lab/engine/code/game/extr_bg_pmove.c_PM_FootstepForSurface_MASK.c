
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int surfaceFlags; } ;
struct TYPE_4__ {TYPE_1__ groundTrace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static int FUNC_0( void ) {
 if ( VAR_4.groundTrace.surfaceFlags & VAR_3 ) {
  return 0;
 }
 if ( VAR_4.groundTrace.surfaceFlags & VAR_2 ) {
  return VAR_1;
 }
 return VAR_0;
}
