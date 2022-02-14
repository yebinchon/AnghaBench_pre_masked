
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* attrdata; size_t nattrs; char const** attrs; } ;
typedef TYPE_1__ git_filter_def ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(git_filter_def *VAR_3)
{
 char *VAR_4 = VAR_3->attrdata;
 size_t VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->nattrs; ++VAR_5) {
  const char *VAR_6, *VAR_7;

  switch (*VAR_4) {
  case '=':
   VAR_6 = VAR_4 + 1;
   for (VAR_4++; *VAR_4 != '='; VAR_4++) ;
   *VAR_4++ = '\0';
   VAR_7 = VAR_4;
   break;
  case '-':
   VAR_6 = VAR_4 + 1; VAR_7 = VAR_0; break;
  case '+':
   VAR_6 = VAR_4 + 1; VAR_7 = VAR_1; break;
  case '!':
   VAR_6 = VAR_4 + 1; VAR_7 = VAR_2; break;
  default:
   VAR_6 = VAR_4; VAR_7 = ((void*)0); break;
  }

  VAR_3->attrs[VAR_5] = VAR_6;
  VAR_3->attrs[VAR_5 + VAR_3->nattrs] = VAR_7;

  VAR_4 += FUNC_0(VAR_4) + 1;
 }
}
