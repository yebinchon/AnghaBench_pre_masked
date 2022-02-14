
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int user; } ;
struct nv50_dmac {int lock; int * ptr; TYPE_1__ base; } ;


 int FUNC_0 (struct nv50_dmac*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int) ;

void
FUNC_3(u32 *VAR_0, struct nv50_dmac *VAR_1)
{
 struct nv50_dmac *VAR_2 = VAR_1;

 FUNC_0(VAR_2);

 FUNC_2(&VAR_2->base.user, 0x0000, (VAR_0 - VAR_2->ptr) << 2);
 FUNC_1(&VAR_2->lock);
}
