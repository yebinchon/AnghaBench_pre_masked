
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ag71xx {int* pllreg; int pllregmap; } ;


 int FUNC_0 (struct ag71xx*) ;
 int FUNC_1 (int ,int,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct ag71xx *VAR_0)
{
 u32 VAR_1 = VAR_0->pllreg[0];
 u32 VAR_2 = VAR_0->pllreg[2];

 if (!VAR_0->pllregmap)
  return;

 FUNC_1(VAR_0->pllregmap, VAR_1, 3 << VAR_2, 2 << VAR_2);
 FUNC_2(100);

 FUNC_0(VAR_0);

 FUNC_1(VAR_0->pllregmap, VAR_1, 3 << VAR_2, 3 << VAR_2);
 FUNC_2(100);

 FUNC_1(VAR_0->pllregmap, VAR_1, 3 << VAR_2, 0);
 FUNC_2(100);
}
