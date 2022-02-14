
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* bytes; } ;
typedef TYPE_1__ decimal64 ;
typedef int decNumber ;
typedef int decContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_1__*,char*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,char*,int) ;

int FUNC_6(int VAR_2, char *VAR_3[]) {
  decimal64 VAR_4;
  decNumber VAR_5;
  decContext VAR_6;
  char VAR_7[VAR_0];
  char VAR_8[25];
  int VAR_9;

  if (VAR_2<2) {
    FUNC_4("Please supply a number.\n");
    return 1;
    }
  FUNC_0(&VAR_6, VAR_1);

  FUNC_2(&VAR_4, VAR_3[1], &VAR_6);

  for (VAR_9=0; VAR_9<8; VAR_9++) {
    FUNC_5(&VAR_8[VAR_9*3], "%02x ", VAR_4.bytes[VAR_9]);
    }
  FUNC_3(&VAR_4, &VAR_5);
  FUNC_1(&VAR_5, VAR_7);
  FUNC_4("%s => %s=> %s\n", VAR_3[1], VAR_8, VAR_7);
  return 0;
  }
