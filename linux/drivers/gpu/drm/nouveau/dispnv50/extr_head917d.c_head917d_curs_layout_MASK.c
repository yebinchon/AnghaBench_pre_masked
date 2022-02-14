
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* fb; } ;
struct nv50_wndw_atom {TYPE_2__ state; } ;
struct TYPE_6__ {int layout; } ;
struct nv50_head_atom {TYPE_3__ curs; } ;
struct nv50_head {int dummy; } ;
struct TYPE_4__ {int width; } ;


 int VAR_0 ;

int
FUNC_0(struct nv50_head *VAR_1, struct nv50_wndw_atom *VAR_2,
       struct nv50_head_atom *VAR_3)
{
 switch (VAR_2->state.fb->width) {
 case 32: VAR_3->curs.layout = 0; break;
 case 64: VAR_3->curs.layout = 1; break;
 case 128: VAR_3->curs.layout = 2; break;
 case 256: VAR_3->curs.layout = 3; break;
 default:
  return -VAR_0;
 }
 return 0;
}
