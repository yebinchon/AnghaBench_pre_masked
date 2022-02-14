
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mode; int output_mode; int load; scalar_t__ range; scalar_t__ size; } ;
struct TYPE_3__ {TYPE_2__ i; } ;
struct nv50_wndw_atom {TYPE_1__ xlut; } ;
struct nv50_wndw {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct nv50_wndw *VAR_1, struct nv50_wndw_atom *VAR_2)
{
 VAR_2->xlut.i.mode = 2;
 VAR_2->xlut.i.size = 0;
 VAR_2->xlut.i.range = 0;
 VAR_2->xlut.i.output_mode = 1;
 VAR_2->xlut.i.load = VAR_0;
}
