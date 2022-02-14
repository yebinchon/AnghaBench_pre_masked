
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_mmu {int dev; } ;
struct msm_gpummu {int pt_base; int table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct msm_gpummu*) ;
 struct msm_gpummu* FUNC_2 (struct msm_mmu*) ;

__attribute__((used)) static void FUNC_3(struct msm_mmu *VAR_2)
{
 struct msm_gpummu *VAR_3 = FUNC_2(VAR_2);

 FUNC_0(VAR_2->dev, VAR_1, VAR_3->table, VAR_3->pt_base,
  VAR_0);

 FUNC_1(VAR_3);
}
