
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int cpp; } ;
struct nv50_head_atom {TYPE_1__ base; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_8__ {int index; TYPE_4__ base; } ;
struct nv50_head {TYPE_3__ base; } ;
struct nv50_dmac {int dummy; } ;
struct TYPE_10__ {TYPE_2__* core; } ;
struct TYPE_7__ {struct nv50_dmac chan; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int*,struct nv50_dmac*) ;
 int FUNC_3 (int*,int,int) ;
 int* FUNC_4 (struct nv50_dmac*,int) ;
 TYPE_5__* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct nv50_head *VAR_0, struct nv50_head_atom *VAR_1)
{
 struct nv50_dmac *VAR_2 = &FUNC_5(VAR_0->base.base.dev)->core->chan;
 u32 VAR_3 = 0;
 u32 *VAR_4;

 if (VAR_1->base.cpp) {
  switch (VAR_1->base.cpp) {
  case 8: VAR_3 |= 0x00000500; break;
  case 4: VAR_3 |= 0x00000300; break;
  case 2: VAR_3 |= 0x00000100; break;
  case 1: VAR_3 |= 0x00000000; break;
  default:
   FUNC_0(1);
   break;
  }
  VAR_3 |= 0x00000001;
 }

 if ((VAR_4 = FUNC_4(VAR_2, 2))) {
  FUNC_3(VAR_4, 0x04d0 + VAR_0->base.index * 0x300, 1);
  FUNC_1(VAR_4, VAR_3);
  FUNC_2(VAR_4, VAR_2);
 }
}
