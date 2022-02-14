
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

int FUNC_6(const char* VAR_5) {
  char* VAR_6;

  VAR_6 = FUNC_2(VAR_5);
  if (VAR_6 == ((void*)0))
    return VAR_0;

  FUNC_5(&VAR_4, VAR_1);
  FUNC_3(&VAR_3);

  FUNC_1(VAR_2);
  VAR_2 = VAR_6;
  FUNC_0("%s", VAR_5);

  FUNC_4(&VAR_3);

  return 0;
}
