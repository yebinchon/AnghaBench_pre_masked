
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int,unsigned int) ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long,unsigned long,unsigned long) ;
 int FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (struct clk_hw*) ;
 unsigned long FUNC_4 (int ,int) ;
 void* FUNC_5 (int ) ;
 unsigned long FUNC_6 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_2, unsigned long VAR_3,
        unsigned long *VAR_4, u8 VAR_5,
        unsigned long VAR_6)
{
 unsigned int VAR_7, VAR_8 = 0;
 unsigned long VAR_9, VAR_10 = 0, VAR_11, VAR_12;
 unsigned long VAR_13 = *VAR_4;

 if (!VAR_3)
  VAR_3 = 1;

 VAR_12 = FUNC_5(VAR_5);

 if (!(FUNC_2(VAR_2) & VAR_0)) {
  VAR_9 = *VAR_4;
  VAR_8 = FUNC_0(((u64)VAR_9 * 2), VAR_3);
  if (VAR_8 < 3)
   VAR_8 = 0;
  else
   VAR_8 = (VAR_8 - 3) / 2;
  VAR_8 = VAR_8 > VAR_12 ? VAR_12 : VAR_8;
  return VAR_8;
 }





 VAR_12 = FUNC_6(VAR_1 / VAR_3, VAR_12);

 for (VAR_7 = 0; VAR_7 <= VAR_12; VAR_7++) {
  if (((u64)VAR_3 * (VAR_7 * 2 + 3)) == ((u64)VAR_13 * 2)) {





   *VAR_4 = VAR_13;
   return VAR_7;
  }
  VAR_9 = FUNC_4(FUNC_3(VAR_2),
      ((u64)VAR_3 * (VAR_7 * 2 + 3)) / 2);
  VAR_11 = FUNC_0(((u64)VAR_9 * 2),
           (VAR_7 * 2 + 3));

  if (FUNC_1(VAR_3, VAR_11, VAR_10, VAR_6)) {
   VAR_8 = VAR_7;
   VAR_10 = VAR_11;
   *VAR_4 = VAR_9;
  }
 }

 if (!VAR_8) {
  VAR_8 = FUNC_5(VAR_5);
  *VAR_4 = FUNC_4(FUNC_3(VAR_2), 1);
 }

 return VAR_8;
}
