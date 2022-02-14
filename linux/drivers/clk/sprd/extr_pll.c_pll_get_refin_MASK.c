
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sprd_pll {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sprd_pll const*,int ) ;
 int FUNC_1 (struct sprd_pll const*,int ) ;
 int FUNC_2 (struct sprd_pll const*,int ) ;
 scalar_t__ FUNC_3 (struct sprd_pll const*,int ) ;
 int FUNC_4 (struct sprd_pll const*,int) ;

__attribute__((used)) static unsigned long FUNC_5(const struct sprd_pll *VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4, VAR_5 = 3;
 const unsigned long VAR_6[4] = { 2, 4, 13, 26 };

 if (FUNC_3(VAR_1, VAR_0)) {
  VAR_4 = FUNC_0(VAR_1, VAR_0);
  VAR_2 = FUNC_2(VAR_1, VAR_0);
  VAR_3 = FUNC_1(VAR_1, VAR_0);
  VAR_5 = (FUNC_4(VAR_1, VAR_4) & VAR_3) >> VAR_2;
  if (VAR_5 > 3)
   VAR_5 = 3;
 }

 return VAR_6[VAR_5];
}
