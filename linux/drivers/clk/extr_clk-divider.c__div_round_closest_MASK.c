
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct clk_div_table {int dummy; } ;


 unsigned long VAR_0 ;
 void* FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct clk_div_table const*,int) ;
 int FUNC_4 (struct clk_div_table const*,int) ;

__attribute__((used)) static int FUNC_5(const struct clk_div_table *VAR_1,
         unsigned long VAR_2, unsigned long VAR_3,
         unsigned long VAR_4)
{
 int VAR_5, VAR_6;
 unsigned long VAR_7, VAR_8;

 VAR_5 = FUNC_0((u64)VAR_2, VAR_3);
 VAR_6 = VAR_2 / VAR_3;

 if (VAR_4 & VAR_0) {
  VAR_5 = FUNC_2(VAR_5);
  VAR_6 = FUNC_1(VAR_6);
 } else if (VAR_1) {
  VAR_5 = FUNC_4(VAR_1, VAR_5);
  VAR_6 = FUNC_3(VAR_1, VAR_6);
 }

 VAR_7 = FUNC_0((u64)VAR_2, VAR_5);
 VAR_8 = FUNC_0((u64)VAR_2, VAR_6);

 return (VAR_3 - VAR_7) <= (VAR_8 - VAR_3) ? VAR_5 : VAR_6;
}
