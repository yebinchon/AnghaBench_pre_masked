
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct a6xx_gmu_bo {int size; struct a6xx_gmu_bo* pages; int iova; } ;
struct a6xx_gmu {int domain; } ;


 scalar_t__ FUNC_0 (struct a6xx_gmu_bo*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct a6xx_gmu_bo,int ) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (struct a6xx_gmu_bo*) ;

__attribute__((used)) static void FUNC_4(struct a6xx_gmu *VAR_2, struct a6xx_gmu_bo *VAR_3)
{
 int VAR_4, VAR_5;
 u64 VAR_6;

 if (FUNC_0(VAR_3))
  return;

 VAR_4 = VAR_3->size >> VAR_0;
 VAR_6 = VAR_3->iova;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++, VAR_6 += VAR_1) {
  FUNC_2(VAR_2->domain, VAR_6, VAR_1);
  FUNC_1(VAR_3->pages[VAR_5], 0);
 }

 FUNC_3(VAR_3->pages);
 FUNC_3(VAR_3);
}
