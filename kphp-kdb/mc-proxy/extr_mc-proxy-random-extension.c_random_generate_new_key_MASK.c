
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct random_gather_extra {int bytes; } ;


 int FUNC_0 (char*,char*,int) ;

int FUNC_1 (char *VAR_0, char *VAR_1, int VAR_2, void *VAR_3) {
  struct random_gather_extra *VAR_4 = VAR_3;
  return FUNC_0 (VAR_0, "random%d", VAR_4->bytes + 64);
}
