
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int transaction_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (char*,int,char*,char*,char*) ;

__attribute__((used)) static void FUNC_4 (transaction_t *VAR_1, char VAR_2[VAR_0]) {
  char VAR_3[VAR_0], VAR_4[28];
  FUNC_1 (VAR_1, VAR_3);
  FUNC_2 (VAR_1, VAR_4);
  FUNC_0 (FUNC_3 (VAR_2, VAR_0, "%s/.binlog.%s", VAR_3, VAR_4) < VAR_0);
}
