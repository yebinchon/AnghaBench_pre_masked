
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ w; scalar_t__ h; } ;
struct TYPE_8__ {int visible; int crtc; } ;
struct nv50_wndw_atom {TYPE_2__ image; TYPE_4__ state; } ;
struct nv50_wndw {int dummy; } ;
struct TYPE_5__ {int visible; } ;
struct nv50_head_atom {TYPE_1__ curs; int state; } ;
struct nv50_head {TYPE_3__* func; } ;
struct TYPE_7__ {int (* curs_layout ) (struct nv50_head*,struct nv50_wndw_atom*,struct nv50_head_atom*) ;int (* curs_format ) (struct nv50_head*,struct nv50_wndw_atom*,struct nv50_head_atom*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int *,int ,int ,int,int) ;
 struct nv50_head* FUNC_1 (int ) ;
 int FUNC_2 (struct nv50_head*,struct nv50_wndw_atom*,struct nv50_head_atom*) ;
 int FUNC_3 (struct nv50_head*,struct nv50_wndw_atom*,struct nv50_head_atom*) ;

__attribute__((used)) static int
FUNC_4(struct nv50_wndw *VAR_2, struct nv50_wndw_atom *VAR_3,
   struct nv50_head_atom *VAR_4)
{
 struct nv50_head *VAR_5 = FUNC_1(VAR_3->state.crtc);
 int VAR_6;

 VAR_6 = FUNC_0(&VAR_3->state, &VAR_4->state,
        VAR_0,
        VAR_0,
        1, 1);
 VAR_4->curs.visible = VAR_3->state.visible;
 if (VAR_6 || !VAR_4->curs.visible)
  return VAR_6;

 if (VAR_3->image.w != VAR_3->image.h)
  return -VAR_1;

 VAR_6 = VAR_5->func->curs_layout(VAR_5, VAR_3, VAR_4);
 if (VAR_6)
  return VAR_6;

 return VAR_5->func->curs_format(VAR_5, VAR_3, VAR_4);
}
