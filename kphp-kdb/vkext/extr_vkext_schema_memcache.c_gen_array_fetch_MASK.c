
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_tree_array {int args_num; int * args; } ;


 int FUNC_0 (int ,void**,int,int*,int,int) ;
 void* VAR_0 ;

int FUNC_1 (struct tl_tree_array *VAR_1, void **VAR_2, int VAR_3, int *VAR_4) {
  if (VAR_3 <= 10) { return -1; }
  int VAR_5 = 0;
  if (VAR_1->args_num > 1) {
    int VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_1->args_num; VAR_6++) {
      int VAR_7 = FUNC_0 (VAR_1->args[VAR_6], VAR_2 + VAR_5, VAR_3 - VAR_5, VAR_4, VAR_6, 0);
      if (VAR_7 < 0) { return -1; }
      VAR_5 += VAR_7;
    }
  } else {
    int VAR_8 = FUNC_0 (VAR_1->args[0], VAR_2 + VAR_5, VAR_3 - VAR_5, VAR_4, 0, 1);
    if (VAR_8 < 0) { return -1; }
    VAR_5 += VAR_8;
  }
  if (VAR_3 - VAR_5 <= 10) { return -1; }
  VAR_2[VAR_5 ++] = VAR_0;

  return VAR_5;
}
