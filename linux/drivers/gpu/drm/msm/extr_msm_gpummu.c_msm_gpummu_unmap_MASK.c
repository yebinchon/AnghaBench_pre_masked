
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
struct msm_mmu {int dummy; } ;
struct msm_gpummu {int gpu; scalar_t__* table; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 struct msm_gpummu* FUNC_1 (struct msm_mmu*) ;

__attribute__((used)) static int FUNC_2(struct msm_mmu *VAR_5, uint64_t VAR_6, unsigned VAR_7)
{
 struct msm_gpummu *VAR_8 = FUNC_1(VAR_5);
 unsigned VAR_9 = (VAR_6 - VAR_3) / VAR_2;
 unsigned VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_7 / VAR_2; VAR_10++, VAR_9++)
                VAR_8->table[VAR_9] = 0;

 FUNC_0(VAR_8->gpu, VAR_4,
  VAR_0 |
  VAR_1);
 return 0;
}
