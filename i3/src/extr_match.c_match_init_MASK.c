
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int window_type; int window_mode; int urgent; } ;
typedef TYPE_1__ Match ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

void FUNC_1(Match *VAR_3) {
    FUNC_0(VAR_3, 0, sizeof(Match));
    VAR_3->urgent = VAR_1;
    VAR_3->window_mode = VAR_2;

    VAR_3->window_type = VAR_0;
}
