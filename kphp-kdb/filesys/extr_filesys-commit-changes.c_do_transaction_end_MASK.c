
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int* FUNC_1 (int ,int) ;
 int VAR_2 ;
 int FUNC_2 (int,char*,int ) ;

__attribute__((used)) static void FUNC_3 () {
  if (!VAR_1) {
    FUNC_0 ("Transaction didn't contain any event. Nothing output to the binlog.\n");
    return;
  }
  int *VAR_3 = FUNC_1 (VAR_0, 8);
  VAR_3[1] = VAR_2;
  FUNC_2 (1, "Transaction contains %lld events.\n", VAR_1);
}
