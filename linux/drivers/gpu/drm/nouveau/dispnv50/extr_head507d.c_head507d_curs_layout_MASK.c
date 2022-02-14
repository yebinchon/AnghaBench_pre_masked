
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int w; } ;
struct nv50_wndw_atom {TYPE_1__ image; } ;
struct TYPE_4__ {int layout; } ;
struct nv50_head_atom {TYPE_2__ curs; } ;
struct nv50_head {int dummy; } ;


 int VAR_0 ;

int
FUNC_0(struct nv50_head *VAR_1, struct nv50_wndw_atom *VAR_2,
       struct nv50_head_atom *VAR_3)
{
 switch (VAR_2->image.w) {
 case 32: VAR_3->curs.layout = 0; break;
 case 64: VAR_3->curs.layout = 1; break;
 default:
  return -VAR_0;
 }
 return 0;
}
