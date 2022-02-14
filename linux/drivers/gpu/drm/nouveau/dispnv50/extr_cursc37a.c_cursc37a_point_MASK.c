
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int y; int x; } ;
struct nv50_wndw_atom {TYPE_3__ point; } ;
struct TYPE_4__ {int user; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
struct nv50_wndw {TYPE_2__ wimm; } ;


 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static void
FUNC_1(struct nv50_wndw *VAR_0, struct nv50_wndw_atom *VAR_1)
{
 FUNC_0(&VAR_0->wimm.base.user, 0x0208, VAR_1->point.y << 16 |
       VAR_1->point.x);
}
