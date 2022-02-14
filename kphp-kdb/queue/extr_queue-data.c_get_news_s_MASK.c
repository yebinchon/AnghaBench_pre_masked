
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ll ;


 int FUNC_0 (char*,char*,int ) ;

char *FUNC_1 (ll VAR_0) {
  static char VAR_1[100];
  FUNC_0 (VAR_1, "n_%lld", VAR_0);
  if (VAR_1[2] == '-') {
    VAR_1[2] = '_';
  }
  return VAR_1;
}
