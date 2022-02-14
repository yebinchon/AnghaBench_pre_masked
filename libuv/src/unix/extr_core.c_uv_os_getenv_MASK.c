
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char*,char*,size_t) ;
 size_t FUNC_2 (char*) ;

int FUNC_3(const char* VAR_3, char* VAR_4, size_t* VAR_5) {
  char* VAR_6;
  size_t VAR_7;

  if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || *VAR_5 == 0)
    return VAR_0;

  VAR_6 = FUNC_0(VAR_3);

  if (VAR_6 == ((void*)0))
    return VAR_2;

  VAR_7 = FUNC_2(VAR_6);

  if (VAR_7 >= *VAR_5) {
    *VAR_5 = VAR_7 + 1;
    return VAR_1;
  }

  FUNC_1(VAR_4, VAR_6, VAR_7 + 1);
  *VAR_5 = VAR_7;

  return 0;
}
