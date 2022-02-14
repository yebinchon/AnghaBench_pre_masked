
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int in_addr_t ;


 int FUNC_0 (char*,char*,int,int,int,int) ;

char *FUNC_1 (in_addr_t VAR_0, char *VAR_1) {
  static char VAR_2[64];
  if (!VAR_1) {
    VAR_1 = VAR_2;
  }
  FUNC_0 (VAR_1, "%d.%d.%d.%d", VAR_0&255, (VAR_0>>8)&255, (VAR_0>>16)&255, VAR_0>>24);
  return VAR_1;
}
