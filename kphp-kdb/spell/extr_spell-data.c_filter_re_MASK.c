
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rm_so; int rm_eo; } ;
typedef TYPE_1__ regmatch_t ;
typedef int regex_t ;


 int FUNC_0 (int *,char*,size_t,TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_1 (char *VAR_0, regex_t *VAR_1) {
  regmatch_t VAR_2;
  size_t VAR_3 = 1;
  while (!FUNC_0 (VAR_1, VAR_0, VAR_3, &VAR_2, 0)) {
    int VAR_4;
    for (VAR_4 = VAR_2.rm_so; VAR_4 < VAR_2.rm_eo; VAR_4++) {
      VAR_0[VAR_4] = ' ';
    }
    VAR_0 += VAR_2.rm_eo;
  }
}
