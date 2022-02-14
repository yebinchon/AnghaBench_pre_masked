
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* c; } ;
typedef TYPE_1__ md5_t ;


 int FUNC_0 (char*,char*,char*) ;

__attribute__((used)) static void FUNC_1 (char *VAR_0, md5_t *VAR_1, int VAR_2) {
  static char VAR_3[33], VAR_4[16] = "0123456789abcdef";
  int VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
    VAR_3[2*VAR_5] = VAR_4[(VAR_1->c[VAR_5] >> 4)];
    VAR_3[2*VAR_5+1] = VAR_4[VAR_1->c[VAR_5] & 15];
  }
  VAR_3[2*VAR_2] = 0;
  FUNC_0 ("%s%s\n", VAR_0, VAR_3);
}
