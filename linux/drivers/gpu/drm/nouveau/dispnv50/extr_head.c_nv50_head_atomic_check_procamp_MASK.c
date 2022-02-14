
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int procamp; } ;
struct TYPE_5__ {int cos; int sin; } ;
struct TYPE_6__ {TYPE_1__ sat; } ;
struct nv50_head_atom {TYPE_3__ set; TYPE_2__ procamp; } ;
struct TYPE_8__ {int color_vibrance; int vibrant_hue; } ;
struct nouveau_conn_atom {TYPE_4__ procamp; } ;



__attribute__((used)) static void
FUNC_0(struct nv50_head_atom *VAR_0,
          struct nv50_head_atom *VAR_1,
          struct nouveau_conn_atom *VAR_2)
{
 const int VAR_3 = VAR_2->procamp.color_vibrance - 100;
 const int VAR_4 = VAR_2->procamp.vibrant_hue - 90;
 const int VAR_5 = (VAR_3 > 0) ? 50 : 0;
 VAR_1->procamp.sat.cos = ((VAR_3 * 2047 + VAR_5) / 100) & 0xfff;
 VAR_1->procamp.sat.sin = ((VAR_4 * 2047) / 100) & 0xfff;
 VAR_1->set.procamp = 1;
}
