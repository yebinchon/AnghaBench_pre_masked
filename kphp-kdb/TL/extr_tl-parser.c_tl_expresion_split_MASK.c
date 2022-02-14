
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_token {char* text; struct tl_token* next; } ;
struct tl_expression {int dummy; } ;
struct tl_compiler {int dummy; } ;


 void* FUNC_0 (char*) ;
 struct tl_token* FUNC_1 (struct tl_token*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char const* const) ;
 int FUNC_4 (char const* const) ;
 char* FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (struct tl_compiler*,struct tl_expression*,char*) ;
 int FUNC_7 (char*,int) ;
 void* FUNC_8 (int) ;
 struct tl_token* FUNC_9 (int) ;

struct tl_token *FUNC_10 (struct tl_compiler *VAR_0, struct tl_expression *VAR_1, const char *const VAR_2, int VAR_3) {
  int VAR_4 = FUNC_4 (VAR_2) + 1;
  char *VAR_5 = FUNC_8 (VAR_4);
  FUNC_3 (VAR_5, VAR_2);

  if (VAR_3) {
    if (FUNC_6 (VAR_0, VAR_1, VAR_5) < 0) {
      return ((void*)0);
    }
  }

  char *VAR_6;
  struct tl_token *VAR_7 = ((void*)0);
  for (VAR_6 = FUNC_5 (VAR_5, " "); VAR_6 != ((void*)0); VAR_6 = FUNC_5 (((void*)0), " ")) {
    struct tl_token *VAR_8 = FUNC_9 (sizeof (struct tl_token));




    if (!FUNC_2 (VAR_6, "bytes")) {
      VAR_8->text = FUNC_0 ("string");
    } else if (!FUNC_2 (VAR_6, "Bytes")) {
      VAR_8->text = FUNC_0 ("String");
    } else {
      int VAR_9 = FUNC_4 (VAR_6);
      if (VAR_9 >= 6 && !FUNC_2 (VAR_6 + VAR_9 - 6, ":bytes")) {
        VAR_8->text = FUNC_8 (VAR_9 + 2);
        FUNC_3 (VAR_8->text, VAR_6);
        FUNC_3 (VAR_8->text + VAR_9 - 6, ":string");
      } else if (VAR_9 >= 6 && !FUNC_2 (VAR_6 + VAR_9 - 6, ":Bytes")) {
        VAR_8->text = FUNC_8 (VAR_9 + 2);
        FUNC_3 (VAR_8->text, VAR_6);
        FUNC_3 (VAR_8->text + VAR_9 - 6, ":String");
      } else {
        VAR_8->text = FUNC_0 (VAR_6);
      }
    }



    VAR_8->next = VAR_7;
    VAR_7 = VAR_8;
  }
  FUNC_7 (VAR_5, VAR_4);
  return FUNC_1 (VAR_7);
}
