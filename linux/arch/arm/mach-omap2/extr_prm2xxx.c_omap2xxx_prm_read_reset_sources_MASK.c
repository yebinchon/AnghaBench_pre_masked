
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct prm_reset_src_map {int reg_shift; int std_shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct prm_reset_src_map* VAR_2 ;

__attribute__((used)) static u32 FUNC_1(void)
{
 struct prm_reset_src_map *VAR_3;
 u32 VAR_4 = 0;
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_0);

 VAR_3 = VAR_2;
 while (VAR_3->reg_shift >= 0 && VAR_3->std_shift >= 0) {
  if (VAR_5 & (1 << VAR_3->reg_shift))
   VAR_4 |= 1 << VAR_3->std_shift;
  VAR_3++;
 }

 return VAR_4;
}
