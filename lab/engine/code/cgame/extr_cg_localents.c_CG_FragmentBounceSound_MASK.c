
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int endpos; } ;
typedef TYPE_2__ trace_t ;
typedef int sfxHandle_t ;
struct TYPE_9__ {scalar_t__ leBounceSoundType; } ;
typedef TYPE_3__ localEntity_t ;
struct TYPE_7__ {int gibBounce3Sound; int gibBounce2Sound; int gibBounce1Sound; } ;
struct TYPE_10__ {TYPE_1__ media; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_4__ VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,int ) ;

void FUNC_2( localEntity_t *VAR_6, trace_t *VAR_7 ) {
 if ( VAR_6->leBounceSoundType == VAR_2 ) {

  if ( FUNC_0() & 1 ) {
   int VAR_8 = FUNC_0()&3;
   sfxHandle_t VAR_9;

   if ( VAR_8 == 0 ) {
    VAR_9 = VAR_5.media.gibBounce1Sound;
   } else if ( VAR_8 == 1 ) {
    VAR_9 = VAR_5.media.gibBounce2Sound;
   } else {
    VAR_9 = VAR_5.media.gibBounce3Sound;
   }
   FUNC_1( VAR_7->endpos, VAR_1, VAR_0, VAR_9 );
  }
 } else if ( VAR_6->leBounceSoundType == VAR_3 ) {

 }



 VAR_6->leBounceSoundType = VAR_4;
}
