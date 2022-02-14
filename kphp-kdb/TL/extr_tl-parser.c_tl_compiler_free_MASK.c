
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_compiler {int hm_composite_typename; int * hm_combinator; int * hm_magic; int tmp_error_buff; int * error_msg; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tl_compiler*,int) ;
 int FUNC_3 (int *) ;

void FUNC_4 (struct tl_compiler *VAR_1) {
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
    FUNC_0 (&VAR_1->error_msg[VAR_2]);
  }
  FUNC_3 (&VAR_1->tmp_error_buff);
  for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
    FUNC_2 (VAR_1, VAR_2);
    FUNC_1 (&VAR_1->hm_magic[VAR_2]);
    FUNC_1 (&VAR_1->hm_combinator[VAR_2]);
  }
  FUNC_1 (&VAR_1->hm_composite_typename);
}
