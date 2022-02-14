
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*,char*) ;
 size_t FUNC_5 (char*) ;

int FUNC_6(char *VAR_3) {
  size_t VAR_4 = FUNC_5(VAR_3);
  int VAR_5=5;
  int VAR_6;


  char *VAR_7 = FUNC_0(VAR_4 + 1);
  FUNC_1(VAR_7 != ((void*)0));
  FUNC_4(VAR_7, VAR_3);

  do {

    FUNC_4(VAR_3, VAR_7);
    (void) FUNC_2(VAR_3);
    VAR_6 = FUNC_3(VAR_3, VAR_0 | VAR_1 | VAR_2, 0600);
  } while (VAR_6 == -1 && VAR_5-- > 0);
  return VAR_6;
}
