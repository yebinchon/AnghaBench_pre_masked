
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ urgent; scalar_t__ id; scalar_t__ window_type; scalar_t__ dock; scalar_t__ window_mode; int * con_id; int * workspace; int * window_role; int * instance; int * class; int * application; int * mark; int * title; } ;
typedef TYPE_1__ Match ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

bool FUNC_0(Match *VAR_5) {



    return (VAR_5->title == ((void*)0) &&
            VAR_5->mark == ((void*)0) &&
            VAR_5->application == ((void*)0) &&
            VAR_5->class == ((void*)0) &&
            VAR_5->instance == ((void*)0) &&
            VAR_5->window_role == ((void*)0) &&
            VAR_5->workspace == ((void*)0) &&
            VAR_5->urgent == VAR_2 &&
            VAR_5->id == VAR_4 &&
            VAR_5->window_type == VAR_1 &&
            VAR_5->con_id == ((void*)0) &&
            VAR_5->dock == VAR_0 &&
            VAR_5->window_mode == VAR_3);
}
