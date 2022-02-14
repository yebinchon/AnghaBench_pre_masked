
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_cs_parser {struct evergreen_cs_track* track; } ;
struct evergreen_cs_track {int* reg_safe_bm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline bool FUNC_1(struct radeon_cs_parser *VAR_1, u32 VAR_2)
{
 struct evergreen_cs_track *VAR_3 = VAR_1->track;
 u32 VAR_4, VAR_5;

 VAR_5 = (VAR_2 >> 7);
 if (FUNC_0(VAR_5 >= VAR_0)) {
  return 0;
 }
 VAR_4 = 1 << ((VAR_2 >> 2) & 31);
 if (!(VAR_3->reg_safe_bm[VAR_5] & VAR_4))
  return 1;

 return 0;
}
