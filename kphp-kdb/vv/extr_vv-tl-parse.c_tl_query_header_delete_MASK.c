
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_query_header {scalar_t__ ref_cnt; int string_forward_keys_num; scalar_t__* string_forward_keys; scalar_t__ string_forward; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct tl_query_header*,int) ;

void FUNC_3 (struct tl_query_header *VAR_0) {
  VAR_0->ref_cnt --;
  FUNC_0 (VAR_0->ref_cnt >= 0);
  if (VAR_0->ref_cnt) { return; }
  if (VAR_0->string_forward) {
    FUNC_1 (VAR_0->string_forward);
  }
  int VAR_1;
  for (VAR_1 = 0; VAR_1 < VAR_0->string_forward_keys_num; VAR_1++) if (VAR_0->string_forward_keys[VAR_1]) {
    FUNC_1 (VAR_0->string_forward_keys[VAR_1]);
  }
  FUNC_2 (VAR_0, sizeof (*VAR_0));
}
