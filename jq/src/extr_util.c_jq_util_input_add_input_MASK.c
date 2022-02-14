
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nfiles; int * files; } ;
typedef TYPE_1__ jq_util_input_state ;


 int * FUNC_0 (int *,int) ;
 int FUNC_1 (char const*) ;

void FUNC_2(jq_util_input_state *VAR_0, const char *VAR_1) {
  VAR_0->files = FUNC_0(VAR_0->files, (VAR_0->nfiles + 1) * sizeof(VAR_0->files[0]));
  VAR_0->files[VAR_0->nfiles++] = FUNC_1(VAR_1);
}
