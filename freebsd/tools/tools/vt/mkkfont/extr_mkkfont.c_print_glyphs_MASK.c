
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct file_header {unsigned int height; int glyph_count; int width; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned int,int,int ) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int ,int) ;
 int * FUNC_4 (unsigned int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_7(struct file_header *VAR_1)
{
 unsigned int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
 uint8_t *VAR_7;

 VAR_2 = FUNC_3(VAR_1->width, 8) * VAR_1->height;
 VAR_3 = FUNC_0(VAR_1->glyph_count);

 FUNC_6("\nstatic uint8_t font_bytes[%u * %u] = {", VAR_3, VAR_2);
 VAR_6 = VAR_3 * VAR_2;
 VAR_7 = FUNC_4(VAR_6);

 if (FUNC_1(VAR_7, VAR_6, 1, VAR_0) != 1) {
  FUNC_5("glyph");
  return (1);
 }

 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4 += 12) {
  for (VAR_5 = 0; VAR_5 < 12 && VAR_5 < VAR_6 - VAR_4; VAR_5++) {
   FUNC_6(VAR_5 == 0 ? "\n\t" : " ");
   FUNC_6("0x%02hhx,", VAR_7[VAR_4 + VAR_5]);
  }
 }

 FUNC_2(VAR_7);
 FUNC_6("\n};\n");

 return (0);
}
