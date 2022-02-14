
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
struct tl_tree {int dummy; } ;
struct tl_combinator {char* id; int IP; int var_num; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,void**,int **,struct tl_tree**) ;
 int FUNC_1 (int ,char*,char*) ;
 int ** FUNC_2 (int *,char*,int ) ;
 struct tl_tree** FUNC_3 (struct tl_tree**,int ) ;
 char* FUNC_4 (int **,int*) ;
 int VAR_1 ;
 struct tl_combinator* FUNC_5 (char*) ;

void *FUNC_6 (void **VAR_2, void **VAR_3, zval **VAR_4, struct tl_tree **VAR_5) {
  zval **VAR_6 = FUNC_2 (*VAR_4, "_", 0);
  if (!VAR_6) { return 0;}
  int VAR_7;
  char *VAR_8 = FUNC_4 (VAR_6, &VAR_7);
  struct tl_combinator *VAR_9 = FUNC_5 (VAR_8);



  if (!VAR_9) { return 0; }
  struct tl_tree **VAR_10 = FUNC_3 (VAR_5, VAR_9->var_num);
  if (!VAR_10) {
    return 0;
  }
  void *VAR_11 = FUNC_0 (VAR_9->IP, VAR_3, VAR_4, VAR_10);
  if (!VAR_11) { return 0; }
  *(VAR_3 ++) = VAR_11;
  VAR_0;
}
