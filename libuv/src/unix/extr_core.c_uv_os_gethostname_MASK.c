
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char*,size_t) ;
 size_t FUNC_3 (char*) ;

int FUNC_4(char* VAR_4, size_t* VAR_5) {






  char VAR_6[VAR_2];
  size_t VAR_7;

  if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || *VAR_5 == 0)
    return VAR_0;

  if (FUNC_1(VAR_6, sizeof(VAR_6)) != 0)
    return FUNC_0(VAR_3);

  VAR_6[sizeof(VAR_6) - 1] = '\0';
  VAR_7 = FUNC_3(VAR_6);

  if (VAR_7 >= *VAR_5) {
    *VAR_5 = VAR_7 + 1;
    return VAR_1;
  }

  FUNC_2(VAR_4, VAR_6, VAR_7 + 1);
  *VAR_5 = VAR_7;
  return 0;
}
