
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* down; void* wasPressed; void* active; void* downtime; } ;
typedef TYPE_1__ kbutton_t ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (char*) ;
 void* VAR_0 ;

void FUNC_3( kbutton_t *VAR_1 ) {
 int VAR_2;
 char *VAR_3;

 VAR_3 = FUNC_0(1);
 if ( VAR_3[0] ) {
  VAR_2 = FUNC_2(VAR_3);
 } else {
  VAR_2 = -1;
 }

 if ( VAR_2 == VAR_1->down[0] || VAR_2 == VAR_1->down[1] ) {
  return;
 }

 if ( !VAR_1->down[0] ) {
  VAR_1->down[0] = VAR_2;
 } else if ( !VAR_1->down[1] ) {
  VAR_1->down[1] = VAR_2;
 } else {
  FUNC_1 ("Three keys down for a button!\n");
  return;
 }

 if ( VAR_1->active ) {
  return;
 }


 VAR_3 = FUNC_0(2);
 VAR_1->downtime = FUNC_2(VAR_3);

 VAR_1->active = VAR_0;
 VAR_1->wasPressed = VAR_0;
}
