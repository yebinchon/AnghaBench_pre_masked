
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct ccu_data {int dummy; } ;
struct bcm_clk_div {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (struct bcm_clk_div*) ;
 int FUNC_3 (struct bcm_clk_div*) ;
 unsigned long FUNC_4 (struct ccu_data*,struct bcm_clk_div*) ;
 unsigned long FUNC_5 (struct bcm_clk_div*,unsigned long) ;
 unsigned long FUNC_6 (struct bcm_clk_div*) ;
 unsigned long FUNC_7 (struct bcm_clk_div*) ;

__attribute__((used)) static long FUNC_8(struct ccu_data *VAR_1, struct bcm_clk_div *VAR_2,
    struct bcm_clk_div *VAR_3,
    unsigned long VAR_4, unsigned long VAR_5,
    u64 *VAR_6)
{
 u64 VAR_7;
 u64 VAR_8;
 u64 VAR_9;
 u64 VAR_10;
 u64 VAR_11;

 FUNC_0(!FUNC_2(VAR_2));
 FUNC_0(!VAR_4);
 FUNC_0(VAR_5 > (u64)VAR_0);
 if (FUNC_2(VAR_3)) {
  u64 VAR_12;
  u64 VAR_13;

  VAR_12 = FUNC_5(VAR_3, VAR_5);
  VAR_12 = FUNC_5(VAR_2, VAR_12);
  VAR_13 = FUNC_4(VAR_1, VAR_3);
  VAR_7 = FUNC_1(VAR_12,
       VAR_13);
 } else {
  VAR_7 = FUNC_5(VAR_2, VAR_5);
 }






 if (!FUNC_3(VAR_2)) {
  VAR_10 = FUNC_1(VAR_7,
       VAR_4);
  VAR_8 = FUNC_7(VAR_2);
  VAR_9 = FUNC_6(VAR_2);
  if (VAR_10 > VAR_9)
   VAR_10 = VAR_9;
  else if (VAR_10 < VAR_8)
   VAR_10 = VAR_8;
 } else {
  VAR_10 = FUNC_4(VAR_1, VAR_2);
 }


 VAR_11 = FUNC_1(VAR_7, VAR_10);

 if (VAR_6)
  *VAR_6 = VAR_10;

 return (long)VAR_11;
}
