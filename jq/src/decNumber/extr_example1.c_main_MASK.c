
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int decNumber ;
struct TYPE_5__ {int digits; scalar_t__ traps; } ;
typedef TYPE_1__ decContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int *,TYPE_1__*) ;
 int FUNC_3 (int *,char*,TYPE_1__*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (char*,...) ;

int FUNC_6(int VAR_2, char *VAR_3[]) {
  decNumber VAR_4, VAR_5;
  decContext VAR_6;
  char VAR_7[VAR_0+14];

  FUNC_1(0);

  if (VAR_2<3) {
    FUNC_5("Please supply two numbers to add.\n");
    return 1;
    }
  FUNC_0(&VAR_6, VAR_1);
  VAR_6.traps=0;
  VAR_6.digits=VAR_0;

  FUNC_3(&VAR_4, VAR_3[1], &VAR_6);
  FUNC_3(&VAR_5, VAR_3[2], &VAR_6);

  FUNC_2(&VAR_4, &VAR_4, &VAR_5, &VAR_6);
  FUNC_4(&VAR_4, VAR_7);

  FUNC_5("%s + %s => %s\n", VAR_3[1], VAR_3[2], VAR_7);
  return 0;
  }
