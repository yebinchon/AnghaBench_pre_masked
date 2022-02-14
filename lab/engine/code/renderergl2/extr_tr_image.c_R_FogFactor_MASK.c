
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {float* fogTable; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

float FUNC_0( float VAR_2, float VAR_3 ) {
 float VAR_4;

 VAR_2 -= 1.0/512;
 if ( VAR_2 < 0 ) {
  return 0;
 }
 if ( VAR_3 < 1.0/32 ) {
  return 0;
 }
 if ( VAR_3 < 31.0/32 ) {
  VAR_2 *= (VAR_3 - 1.0f/32.0f) / (30.0f/32.0f);
 }


 VAR_2 *= 8;

 if ( VAR_2 > 1.0 ) {
  VAR_2 = 1.0;
 }

 VAR_4 = VAR_1.fogTable[ (int)(VAR_2 * (VAR_0-1)) ];

 return VAR_4;
}
