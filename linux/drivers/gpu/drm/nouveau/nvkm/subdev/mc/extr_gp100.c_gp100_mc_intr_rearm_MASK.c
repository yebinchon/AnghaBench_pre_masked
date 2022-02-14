
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_mc {int dummy; } ;
struct gp100_mc {int intr; int lock; } ;


 struct gp100_mc* FUNC_0 (struct nvkm_mc*) ;
 int FUNC_1 (struct gp100_mc*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void
FUNC_4(struct nvkm_mc *VAR_0)
{
 struct gp100_mc *VAR_1 = FUNC_0(VAR_0);
 unsigned long VAR_2;
 FUNC_2(&VAR_1->lock, VAR_2);
 VAR_1->intr = 1;
 FUNC_1(VAR_1);
 FUNC_3(&VAR_1->lock, VAR_2);
}
