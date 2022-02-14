
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u64 ;
struct clk_si570 {int fxtal; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,unsigned long) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_4, struct clk_si570 *VAR_5,
  u64 *VAR_6, unsigned int *VAR_7, unsigned int *VAR_8)
{
 int VAR_9;
 unsigned int VAR_10, VAR_11;
 u64 VAR_12, VAR_13 = VAR_3;
 static const uint8_t VAR_14[] = { 11, 9, 7, 6, 5, 4 };

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_14); VAR_9++) {
  VAR_11 = VAR_14[VAR_9];

  VAR_10 = FUNC_2(FUNC_2(VAR_2, VAR_11), VAR_4);
  if (!VAR_10 || (VAR_10 & 1))
   VAR_10++;
  while (VAR_10 <= 128) {
   VAR_12 = (u64)VAR_4 * (u64)VAR_11 * (u64)VAR_10;
   if (VAR_12 > VAR_1)
    break;
   if (VAR_12 >= VAR_2 && VAR_12 < VAR_13) {
    *VAR_7 = VAR_10;
    *VAR_8 = VAR_11;
    *VAR_6 = FUNC_1(VAR_12 << 28, VAR_5->fxtal);
    VAR_13 = VAR_12;
   }
   VAR_10 += (VAR_10 == 1 ? 1 : 2);
  }
 }

 if (VAR_13 == VAR_3)
  return -VAR_0;

 return 0;
}
