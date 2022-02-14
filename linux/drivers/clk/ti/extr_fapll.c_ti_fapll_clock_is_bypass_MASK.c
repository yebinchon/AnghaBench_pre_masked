
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fapll_data {scalar_t__ bypass_bit_inverted; int base; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct fapll_data *VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_1->base);

 if (VAR_1->bypass_bit_inverted)
  return !(VAR_2 & VAR_0);
 else
  return !!(VAR_2 & VAR_0);
}
