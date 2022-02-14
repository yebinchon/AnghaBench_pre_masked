
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char*,size_t) ;
 size_t FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

int FUNC_6(char* VAR_3, size_t* VAR_4) {
  char VAR_5[VAR_2];
  size_t VAR_6;

  if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || *VAR_4 == 0)
    return VAR_0;

  FUNC_4();

  if (FUNC_1(VAR_5, sizeof(VAR_5)) != 0)
    return FUNC_5(FUNC_0());

  VAR_5[sizeof(VAR_5) - 1] = '\0';
  VAR_6 = FUNC_3(VAR_5);

  if (VAR_6 >= *VAR_4) {
    *VAR_4 = VAR_6 + 1;
    return VAR_1;
  }

  FUNC_2(VAR_3, VAR_5, VAR_6 + 1);
  *VAR_4 = VAR_6;
  return 0;
}
