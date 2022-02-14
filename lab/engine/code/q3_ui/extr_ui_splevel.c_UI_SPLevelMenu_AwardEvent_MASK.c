
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; } ;
typedef TYPE_1__ menucommon_s ;
struct TYPE_4__ {int * awardSounds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1( void* VAR_4, int VAR_5 ) {
 int VAR_6;

 if (VAR_5 != VAR_2) {
  return;
 }

 VAR_6 = ((menucommon_s*)VAR_4)->id - VAR_1;
 FUNC_0( VAR_3.awardSounds[VAR_6], VAR_0 );
}
