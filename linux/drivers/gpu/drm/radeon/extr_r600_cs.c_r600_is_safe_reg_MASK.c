
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_cs_parser {int dev; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int ,char*,int,int) ;
 int* VAR_0 ;

__attribute__((used)) static bool FUNC_2(struct radeon_cs_parser *VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4, VAR_5;

 VAR_5 = (VAR_2 >> 7);
 if (VAR_5 >= FUNC_0(VAR_0)) {
  FUNC_1(VAR_1->dev, "forbidden register 0x%08x at %d\n", VAR_2, VAR_3);
  return 0;
 }
 VAR_4 = 1 << ((VAR_2 >> 2) & 31);
 if (!(VAR_0[VAR_5] & VAR_4))
  return 1;
 FUNC_1(VAR_1->dev, "forbidden register 0x%08x at %d\n", VAR_2, VAR_3);
 return 0;
}
