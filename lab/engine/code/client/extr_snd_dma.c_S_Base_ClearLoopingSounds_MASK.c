
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_4__ {scalar_t__ kill; TYPE_1__* sfx; } ;
struct TYPE_3__ {scalar_t__ soundLength; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_1( qboolean VAR_4 ) {
 int VAR_5;
 for ( VAR_5 = 0 ; VAR_5 < VAR_0 ; VAR_5++) {
  if (VAR_4 || VAR_1[VAR_5].kill == VAR_3 || (VAR_1[VAR_5].sfx && VAR_1[VAR_5].sfx->soundLength == 0)) {
   FUNC_0(VAR_5);
  }
 }
 VAR_2 = 0;
}
