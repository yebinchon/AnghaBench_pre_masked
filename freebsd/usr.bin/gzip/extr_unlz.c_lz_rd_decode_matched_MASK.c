
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lz_range_decoder {int dummy; } ;


 unsigned int FUNC_0 (struct lz_range_decoder*,int*) ;

__attribute__((used)) static unsigned
FUNC_1(struct lz_range_decoder *VAR_0, int *VAR_1, int VAR_2)
{
 unsigned VAR_3 = 1;

 for (int VAR_4 = 7; VAR_4 >= 0; VAR_4--) {
  const unsigned VAR_5 = (VAR_2 >> VAR_4) & 1;
  const unsigned VAR_6 = FUNC_0(VAR_0,
      &VAR_1[VAR_3 + (VAR_5 << 8) + 0x100]);
  VAR_3 = (VAR_3 << 1) | VAR_6;
  if (VAR_5 != VAR_6) {
   while (VAR_3 < 0x100) {
    VAR_3 = (VAR_3 << 1) |
        FUNC_0(VAR_0, &VAR_1[VAR_3]);
   }
   break;
  }
 }
 return VAR_3 & 0xFF;
}
