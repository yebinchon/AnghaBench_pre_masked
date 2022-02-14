
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int format; } ;
struct nv50_wndw_atom {TYPE_1__ image; } ;
struct TYPE_4__ {int format; } ;
struct nv50_head_atom {TYPE_2__ curs; } ;
struct nv50_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

int
FUNC_1(struct nv50_head *VAR_1, struct nv50_wndw_atom *VAR_2,
       struct nv50_head_atom *VAR_3)
{
 switch (VAR_2->image.format) {
 case 0xcf: VAR_3->curs.format = 1; break;
 default:
  FUNC_0(1);
  return -VAR_0;
 }
 return 0;
}
