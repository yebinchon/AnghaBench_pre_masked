
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; int output_mode; int load; scalar_t__ range; scalar_t__ size; } ;
struct nv50_head_atom {TYPE_1__ olut; } ;
struct nv50_head {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct nv50_head *VAR_1, struct nv50_head_atom *VAR_2)
{
 VAR_2->olut.mode = 2;
 VAR_2->olut.size = 0;
 VAR_2->olut.range = 0;
 VAR_2->olut.output_mode = 1;
 VAR_2->olut.load = VAR_0;
}
