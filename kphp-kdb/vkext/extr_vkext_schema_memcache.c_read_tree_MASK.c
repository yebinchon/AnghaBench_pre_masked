
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_tree {int dummy; } ;







 int FUNC_0 (int ,char*,int) ;
 struct tl_tree* FUNC_1 (int*) ;
 struct tl_tree* FUNC_2 (int*) ;
 struct tl_tree* FUNC_3 (int*) ;
 struct tl_tree* FUNC_4 (int*) ;
 struct tl_tree* FUNC_5 (int*) ;
 int VAR_0 ;
 int FUNC_6 () ;
 int VAR_1 ;

struct tl_tree *FUNC_7 (int *VAR_2) {
  int VAR_3 = FUNC_6 ();
  if (VAR_1 >= 2) {
    FUNC_0 (VAR_0, "read_tree: constructor = 0x%08x\n", VAR_3);
  }
  switch (VAR_3) {
  case 131:
    return FUNC_2 (VAR_2);
  case 130:
    return FUNC_3 (VAR_2);
  case 128:
    return FUNC_5 (VAR_2);
  case 129:
    return FUNC_4 (VAR_2);
  case 132:
    return FUNC_1 (VAR_2);
  default:
    if (VAR_1) {
      FUNC_0 (VAR_0, "x = %d\n", VAR_3);
    }
    return 0;
  }
}
