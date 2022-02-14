
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ temp; scalar_t__ permanent; scalar_t__ tempHighwater; } ;
typedef TYPE_1__ hunkUsed_t ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_0( void ) {
 hunkUsed_t *VAR_2;


 if ( VAR_1->temp != VAR_1->permanent ) {
  return;
 }



 if ( VAR_1->tempHighwater - VAR_1->permanent >
  VAR_0->tempHighwater - VAR_0->permanent ) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_0;
  VAR_0 = VAR_2;
 }
}
