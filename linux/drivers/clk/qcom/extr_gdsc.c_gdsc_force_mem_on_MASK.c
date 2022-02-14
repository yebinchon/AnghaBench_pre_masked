
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gdsc {int cxc_count; int * cxcs; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static inline void FUNC_1(struct gdsc *VAR_2)
{
 int VAR_3;
 u32 VAR_4 = VAR_0 | VAR_1;

 for (VAR_3 = 0; VAR_3 < VAR_2->cxc_count; VAR_3++)
  FUNC_0(VAR_2->regmap, VAR_2->cxcs[VAR_3], VAR_4, VAR_4);
}
