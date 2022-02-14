
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {char* str; int len; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct item* FUNC_1 (long long,int) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*,int) ;
 char* FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5 (const char *VAR_1, int VAR_2, long long VAR_3) {
  struct item *VAR_4 = FUNC_1 (VAR_3, 1);
  if (VAR_4 == ((void*)0)) {
    return 0;
  }
  FUNC_0 (VAR_4->str);
  int VAR_5 = VAR_4->len + VAR_2 + 1;
  char *VAR_6 = FUNC_4 (VAR_5 + 1);
  FUNC_0 (VAR_6);
  FUNC_2 (VAR_6, VAR_1);
  VAR_6[VAR_2] = ' ';
  FUNC_2 (VAR_6 + VAR_2 + 1, VAR_4->str);
  FUNC_3 (VAR_4->str, VAR_4->len+1);
  VAR_0 += VAR_4->len;
  VAR_4->len = VAR_5;
  VAR_4->str = VAR_6;
  return 1;
}
