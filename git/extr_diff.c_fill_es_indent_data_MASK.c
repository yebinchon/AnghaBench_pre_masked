
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emitted_diff_symbol {int flags; char* line; int len; int indent_width; int indent_off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const) ;

__attribute__((used)) static void FUNC_1(struct emitted_diff_symbol *VAR_2)
{
 unsigned int VAR_3 = 0, VAR_4;
 int VAR_5 = 0, VAR_6 = VAR_2->flags & VAR_1;
 const char *VAR_7 = VAR_2->line;
 const int VAR_8 = VAR_2->len;


 while (VAR_7[VAR_3] == '\f' || VAR_7[VAR_3] == '\v' ||
        (VAR_7[VAR_3] == '\r' && VAR_3 < VAR_8 - 1))
  VAR_3++;


 while(1) {
  if (VAR_7[VAR_3] == ' ') {
   VAR_5++;
   VAR_3++;
  } else if (VAR_7[VAR_3] == '\t') {
   VAR_5 += VAR_6 - (VAR_5 % VAR_6);
   while (VAR_7[++VAR_3] == '\t')
    VAR_5 += VAR_6;
  } else {
   break;
  }
 }


 for (VAR_4 = VAR_3; VAR_4 < VAR_8; VAR_4++)
  if (!FUNC_0(VAR_7[VAR_4]))
      break;

 if (VAR_4 == VAR_8) {
  VAR_2->indent_width = VAR_0;
  VAR_2->indent_off = VAR_8;
 } else {
  VAR_2->indent_off = VAR_3;
  VAR_2->indent_width = VAR_5;
 }
}
