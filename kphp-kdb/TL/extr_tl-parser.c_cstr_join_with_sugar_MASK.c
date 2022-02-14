
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_token {char* text; struct tl_token* next; } ;


 int FUNC_0 (int) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (struct tl_token*,int*,int*) ;
 char* FUNC_4 (int) ;

char *FUNC_5 (struct tl_token *VAR_0) {
  int VAR_1, VAR_2, VAR_3;
  FUNC_3 (VAR_0, &VAR_2, &VAR_3);
  FUNC_0 (VAR_2 >= 1);
  if (VAR_2 == 1) {
    return FUNC_1 (VAR_0->text);
  }
  VAR_3 += VAR_2 + 1;
  char *VAR_4 = FUNC_4 (VAR_3), *VAR_5 = VAR_4;
  for (VAR_1 = 0; VAR_0 != ((void*)0); VAR_0 = VAR_0->next, VAR_1++) {
    VAR_5 += FUNC_2 (VAR_5, "%s", VAR_0->text);
    *VAR_5++ = VAR_1 ? ((VAR_1 == VAR_2 - 1) ? '>' : ',') : '<';
  }
  *VAR_5++ = 0;
  FUNC_0 (VAR_5 == VAR_4 + VAR_3);
  return VAR_4;
}
