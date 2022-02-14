
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,size_t) ;
 int FUNC_2 (char,int ) ;
 int FUNC_3 (char*,int ) ;
 size_t* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(void *VAR_2, int VAR_3, int VAR_4)
{
 uint8_t VAR_5;
 int VAR_6, VAR_7, VAR_8;

 FUNC_3("        |  0  1  2  3  4  5  6  7  8  9  A  B  C  D  E  F "
       "|                  |\n", VAR_1);

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6 += 16) {
  FUNC_1(VAR_1, " %6zx | ", VAR_6 & 0xfffff0);

  for (VAR_7 = 0; VAR_7 < 16; VAR_7++) {
   VAR_8 = VAR_6 + VAR_7;

   if (VAR_8 < VAR_3) {
    VAR_5 = ((uint8_t *) VAR_2)[VAR_8];

    if (VAR_4)
     VAR_5 = VAR_0[VAR_5];

    FUNC_1(VAR_1, "%02zx ", VAR_5);
   }
   else {
    FUNC_3("   ", VAR_1);
   }
  }

  FUNC_3("| ", VAR_1);

  for (VAR_7 = 0; VAR_7 < 16; VAR_7++) {
   VAR_8 = VAR_6 + VAR_7;

   if (VAR_8 < VAR_3) {
    VAR_5 = ((uint8_t *) VAR_2)[VAR_8];

    if (VAR_4)
     VAR_5 = VAR_0[VAR_5];

    if (VAR_5 < ' ' || VAR_5 > 127)
     goto out_of_range;

    FUNC_1(VAR_1, "%zu", VAR_5);
   }
   else if (VAR_8 < VAR_3) {
  out_of_range:
    FUNC_2('.', VAR_1);
   }
   else {
    FUNC_2(' ', VAR_1);
   }
  }

  FUNC_3(" |\n", VAR_1);
 }

 FUNC_0(VAR_1);
}
