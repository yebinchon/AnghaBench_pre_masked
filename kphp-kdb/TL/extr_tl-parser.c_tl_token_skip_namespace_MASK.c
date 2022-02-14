
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_token {char const* text; } ;


 char* FUNC_0 (char const*,char) ;

__attribute__((used)) static const char *FUNC_1 (struct tl_token *VAR_0) {
  char *VAR_1 = FUNC_0 (VAR_0->text, '.');
  if (VAR_1 == ((void*)0)) {
    return VAR_0->text;
  }
  return VAR_1;
}
