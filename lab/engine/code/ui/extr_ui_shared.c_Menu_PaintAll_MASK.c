
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_0; int member_1; int member_2; int member_3; } ;
typedef TYPE_1__ vec4_t ;
struct TYPE_5__ {int FPS; int (* drawText ) (int,int,double,TYPE_1__,int ,int ,int ,int ) ;} ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int,int,double,TYPE_1__,int ,int ,int ,int ) ;
 int FUNC_4 (char*,int ) ;

void FUNC_5(void) {
 int VAR_5;
 if (&FUNC_2) {
  FUNC_2(VAR_2);
 }

 for (VAR_5 = 0; VAR_5 < FUNC_0(); VAR_5++) {
  FUNC_1(&VAR_1[VAR_5], VAR_4);
 }

 if (VAR_3) {
  vec4_t VAR_6 = {1, 1, 1, 1};
  VAR_0->drawText(5, 25, .5, VAR_6, FUNC_4("fps: %f", VAR_0->FPS), 0, 0, 0);
 }
}
