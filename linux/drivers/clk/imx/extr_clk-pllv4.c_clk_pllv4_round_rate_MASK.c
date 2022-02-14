
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u64 ;
typedef long u32 ;
struct clk_hw {int dummy; } ;


 unsigned long FUNC_0 (unsigned long*) ;
 long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (long,long) ;
 unsigned long* VAR_2 ;
 int FUNC_3 (char*,int ,unsigned long,unsigned long) ;

__attribute__((used)) static long FUNC_4(struct clk_hw *VAR_3, unsigned long VAR_4,
     unsigned long *VAR_5)
{
 unsigned long VAR_6 = *VAR_5;
 unsigned long VAR_7, VAR_8;
 u32 VAR_9, VAR_10 = VAR_0;
 bool VAR_11 = 0;
 u64 VAR_12;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_2); VAR_8++) {
  VAR_7 = VAR_6 * VAR_2[VAR_8];
  if (VAR_4 >= VAR_7) {
   VAR_11 = 1;
   break;
  }
 }

 if (!VAR_11) {
  FUNC_3("%s: unable to round rate %lu, parent rate %lu\n",
   FUNC_1(VAR_3), VAR_4, VAR_6);
  return 0;
 }

 if (VAR_6 <= VAR_1)
  VAR_10 = VAR_6;

 VAR_12 = (u64)(VAR_4 - VAR_7);
 VAR_12 *= VAR_10;
 FUNC_2(VAR_12, VAR_6);
 VAR_9 = VAR_12;







 if (VAR_9 >= VAR_10)
  return VAR_7;

 VAR_12 = (u64)VAR_6;
 VAR_12 *= VAR_9;
 FUNC_2(VAR_12, VAR_10);

 return VAR_7 + (u32)VAR_12;
}
