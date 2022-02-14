
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct prompt {int nonewline; int Term; scalar_t__ TermMode; scalar_t__ active; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*) ;
 size_t FUNC_2 (char const*) ;
 int FUNC_3 (int ,char const*,int ) ;

void
FUNC_4(struct prompt *VAR_1, const char *VAR_2, va_list VAR_3)
{
  if (VAR_1 && VAR_1->active) {
    char VAR_4[VAR_0];
    const char *VAR_5;

    if (VAR_1->TermMode) {

      size_t VAR_6 = FUNC_2(VAR_2);

      if (VAR_6 && VAR_6 < sizeof VAR_4 - 1 && VAR_2[VAR_6-1] == '\n' &&
          (VAR_6 == 1 || VAR_2[VAR_6-2] != '\r')) {
        FUNC_1(VAR_4, VAR_2);
        FUNC_1(VAR_4 + VAR_6 - 1, "\r\n");
        VAR_5 = VAR_4;
      } else
        VAR_5 = VAR_2;
    } else
      VAR_5 = VAR_2;
    FUNC_3(VAR_1->Term, VAR_5, VAR_3);
    FUNC_0(VAR_1->Term);
    VAR_1->nonewline = 1;
  }
}
