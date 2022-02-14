
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_4__ {int legsAnim; } ;
struct TYPE_5__ {scalar_t__* lerpOrigin; TYPE_1__ currentState; } ;
typedef TYPE_2__ centity_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_1(centity_t *VAR_7) {
 vec3_t VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14;

 VAR_12 = VAR_7->currentState.legsAnim & ~VAR_0;

 if (VAR_12 == VAR_4 || VAR_12 == VAR_3) {
  VAR_14 = VAR_1;
 } else {
  VAR_14 = VAR_2;
 }




 VAR_13 = 0;

 VAR_8[0] = VAR_7->lerpOrigin[0];
 VAR_8[1] = VAR_7->lerpOrigin[1];
 VAR_8[2] = VAR_7->lerpOrigin[2] + VAR_6 + 1;
 VAR_9 = FUNC_0(VAR_8, -1);

 if (VAR_9 & VAR_5) {
  VAR_11 = VAR_14 - VAR_6;
  VAR_10 = VAR_11 / 2;
  VAR_13 = 1;
  VAR_8[2] = VAR_7->lerpOrigin[2] + VAR_6 + VAR_10;
  VAR_9 = FUNC_0(VAR_8, -1);

  if (VAR_9 & VAR_5) {
   VAR_13 = 2;
   VAR_8[2] = VAR_7->lerpOrigin[2] + VAR_6 + VAR_11;
   VAR_9 = FUNC_0(VAR_8, -1);

   if (VAR_9 & VAR_5) {
    VAR_13 = 3;
   }
  }
 }

 return VAR_13;
}
