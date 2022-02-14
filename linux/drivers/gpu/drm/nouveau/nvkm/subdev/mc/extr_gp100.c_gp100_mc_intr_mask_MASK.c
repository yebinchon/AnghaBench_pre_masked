
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_mc {int dummy; } ;
struct gp100_mc {int mask; int lock; } ;


 struct gp100_mc* FUNC_0 (struct nvkm_mc*) ;
 int FUNC_1 (struct gp100_mc*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void
FUNC_4(struct nvkm_mc *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct gp100_mc *VAR_3 = FUNC_0(VAR_0);
 unsigned long VAR_4;
 FUNC_2(&VAR_3->lock, VAR_4);
 VAR_3->mask = (VAR_3->mask & ~VAR_1) | VAR_2;
 FUNC_1(VAR_3);
 FUNC_3(&VAR_3->lock, VAR_4);
}
