
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ttm_placement {int num_busy_placement; int busy_placement; int num_placement; int placement; } ;
struct nouveau_bo {int busy_placements; int placements; scalar_t__ pin_refcnt; scalar_t__ force_coherent; struct ttm_placement placement; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int,int) ;
 int FUNC_1 (struct nouveau_bo*,int) ;

void
FUNC_2(struct nouveau_bo *VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 struct ttm_placement *VAR_6 = &VAR_3->placement;
 uint32_t VAR_7 = (VAR_3->force_coherent ? VAR_1 :
       VAR_2) |
    (VAR_3->pin_refcnt ? VAR_0 : 0);

 VAR_6->placement = VAR_3->placements;
 FUNC_0(VAR_3->placements, &VAR_6->num_placement,
      VAR_4, VAR_7);

 VAR_6->busy_placement = VAR_3->busy_placements;
 FUNC_0(VAR_3->busy_placements, &VAR_6->num_busy_placement,
      VAR_4 | VAR_5, VAR_7);

 FUNC_1(VAR_3, VAR_4);
}
