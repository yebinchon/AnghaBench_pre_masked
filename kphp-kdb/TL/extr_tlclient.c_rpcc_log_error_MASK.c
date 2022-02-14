
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int,char*) ;
 int FUNC_2 (int*,int,char**,int*,int ) ;

int FUNC_3 (int VAR_1) {
  FUNC_0 (!(VAR_1 % 4));
  int VAR_2 = VAR_0[5], VAR_3 = (VAR_1 / 4) - 7;
  int VAR_4;
  char *VAR_5;
  FUNC_0 (VAR_3 > 0);
  int VAR_6 = FUNC_2 (&VAR_0[6], VAR_3, &VAR_5, &VAR_4, 0);
  FUNC_0 (VAR_6 == VAR_3);
  FUNC_1 ("Receive RPC_REQ_ERROR (code: %d, text: \"%.*s\")\n", VAR_2, VAR_4, VAR_5);
  return 0;
}
