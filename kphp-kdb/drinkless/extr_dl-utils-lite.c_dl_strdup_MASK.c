
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (char*,char const*,size_t) ;
 size_t FUNC_3 (char const*) ;

char* FUNC_4 (const char *VAR_0) {
  size_t VAR_1 = FUNC_3 (VAR_0);

  char *VAR_2 = (char *)FUNC_1 (VAR_1 + 1);
  FUNC_0 (VAR_2 != ((void*)0));
  FUNC_2 (VAR_2, VAR_0, VAR_1 + 1);

  return VAR_2;
}
