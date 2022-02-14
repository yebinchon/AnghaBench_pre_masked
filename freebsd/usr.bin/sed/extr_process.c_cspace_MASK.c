
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum e_spflag { ____Placeholder_e_spflag } e_spflag ;
struct TYPE_3__ {size_t len; size_t blen; char* space; char* back; } ;
typedef TYPE_1__ SPACE ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,char const*,size_t) ;
 char* FUNC_2 (char*,size_t) ;

void
FUNC_3(SPACE *VAR_1, const char *VAR_2, size_t VAR_3, enum e_spflag VAR_4)
{
 size_t VAR_5;


 VAR_5 = VAR_1->len + VAR_3 + 1;
 if (VAR_5 > VAR_1->blen) {
  VAR_1->blen = VAR_5 + 1024;
  if ((VAR_1->space = VAR_1->back = FUNC_2(VAR_1->back, VAR_1->blen)) ==
      ((void*)0))
   FUNC_0(1, "realloc");
 }

 if (VAR_4 == VAR_0)
  VAR_1->len = 0;

 FUNC_1(VAR_1->space + VAR_1->len, VAR_2, VAR_3);

 VAR_1->space[VAR_1->len += VAR_3] = '\0';
}
