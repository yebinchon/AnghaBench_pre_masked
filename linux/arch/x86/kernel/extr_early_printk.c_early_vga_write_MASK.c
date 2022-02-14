
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct console {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct console *VAR_5, const char *VAR_6, unsigned VAR_7)
{
 char VAR_8;
 int VAR_9, VAR_10, VAR_11;

 while ((VAR_8 = *VAR_6++) != '\0' && VAR_7-- > 0) {
  if (VAR_2 >= VAR_4) {

   for (VAR_10 = 1, VAR_11 = 0; VAR_10 < VAR_4; VAR_10++, VAR_11++) {
    for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
     FUNC_1(FUNC_0(VAR_0+2*(VAR_3*VAR_10+VAR_9)),
            VAR_0 + 2*(VAR_3*VAR_11 + VAR_9));
    }
   }
   for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
    FUNC_1(0x720, VAR_0 + 2*(VAR_3*VAR_11 + VAR_9));
   VAR_2 = VAR_4-1;
  }
  if (VAR_8 == '\n') {
   VAR_1 = 0;
   VAR_2++;
  } else if (VAR_8 != '\r') {
   FUNC_1(((0x7 << 8) | (unsigned short) VAR_8),
          VAR_0 + 2*(VAR_3*VAR_2 +
      VAR_1++));
   if (VAR_1 >= VAR_3) {
    VAR_1 = 0;
    VAR_2++;
   }
  }
 }
}
