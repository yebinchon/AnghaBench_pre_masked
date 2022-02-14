
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int decNumber ;
struct TYPE_6__ {int digits; int status; } ;
typedef TYPE_1__ decContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 char* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *,int *,TYPE_1__*) ;
 int FUNC_3 (int *,char*,TYPE_1__*) ;
 int FUNC_4 (int *,char*) ;
 int VAR_4 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_5 ;

int FUNC_8(int VAR_6, char *VAR_7[]) {
  decNumber VAR_8, VAR_9;
  decContext VAR_10;
  char VAR_11[VAR_0+14];
  int VAR_12;

  if (VAR_6<3) {
    FUNC_5("Please supply two numbers to add.\n");
    return 1;
    }
  FUNC_0(&VAR_10, VAR_2);


  FUNC_7(VAR_3, VAR_5);
  VAR_12=FUNC_6(VAR_4);
  if (VAR_12) {
    VAR_10.status &= VAR_1;
    FUNC_5("Signal trapped [%s].\n", FUNC_1(&VAR_10));
    return 1;
    }




  VAR_10.digits=VAR_0;

  FUNC_3(&VAR_8, VAR_7[1], &VAR_10);
  FUNC_3(&VAR_9, VAR_7[2], &VAR_10);

  FUNC_2(&VAR_8, &VAR_8, &VAR_9, &VAR_10);
  FUNC_4(&VAR_8, VAR_11);

  FUNC_5("%s + %s => %s\n", VAR_7[1], VAR_7[2], VAR_11);
  return 0;
  }
