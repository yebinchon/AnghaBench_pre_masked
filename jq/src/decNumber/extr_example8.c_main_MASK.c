
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int decQuad ;
typedef int decNumber ;
typedef int decContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int *,int *,int *,int *) ;
 int FUNC_3 (int *,int *,int *,int *) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *,char*,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (char*,...) ;

int FUNC_9(int VAR_2, char *VAR_3[]) {
  decQuad VAR_4;
  decNumber VAR_5, VAR_6;
  decContext VAR_7;
  char VAR_8[VAR_0];

  if (VAR_2<3) {
    FUNC_8("Please supply two numbers for power(2*a, b).\n");
    return 1;
    }
  FUNC_0(&VAR_7, VAR_1);

  FUNC_5(&VAR_4, VAR_3[1], &VAR_7);
  FUNC_3(&VAR_4, &VAR_4, &VAR_4, &VAR_7);
  FUNC_6(&VAR_4, &VAR_5);
  FUNC_1(&VAR_6, VAR_3[2], &VAR_7);
  FUNC_2(&VAR_5, &VAR_5, &VAR_6, &VAR_7);
  FUNC_4(&VAR_4, &VAR_5, &VAR_7);
  FUNC_7(&VAR_4, VAR_8);

  FUNC_8("power(2*%s, %s) => %s\n", VAR_3[1], VAR_3[2], VAR_8);
  return 0;
  }
