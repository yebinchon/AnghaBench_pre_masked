
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct glyph {int dummy; } ;


 unsigned int VAR_0 ;
 struct glyph* FUNC_0 (int *,unsigned int,int) ;
 scalar_t__ FUNC_1 (struct glyph*,unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_2(unsigned VAR_1, unsigned VAR_2, uint8_t *VAR_3, uint8_t *VAR_4)
{
 struct glyph *VAR_5;


 if (VAR_1 == 0xFFFD) {
  if (VAR_2 < VAR_0)
   VAR_5 = FUNC_0(VAR_3, 0, 1);
 } else if (VAR_1 >= 0x20) {
  VAR_5 = FUNC_0(VAR_3, VAR_2, 0);
  if (FUNC_1(VAR_5, VAR_1, VAR_2) != 0)
   return (1);
  if (VAR_4 != ((void*)0)) {
   VAR_5 = FUNC_0(VAR_4, VAR_2 + 1, 0);
   if (FUNC_1(VAR_5, VAR_1, VAR_2 + 1) != 0)
    return (1);
  }
 }
 return (0);
}
