
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree_ext_small_t ;
struct tree_payload {int flags; int global_id; int value; } ;
struct heap_entry {int node; } ;


 int FUNC_0 (int *) ;
 struct tree_payload* FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct heap_entry* FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3 (tree_ext_small_t *VAR_3) {
  struct tree_payload *VAR_4 = FUNC_1 (VAR_3);
  if (((VAR_4->flags ^ VAR_2) & VAR_0) != 0) {
    return 0;
  }
  struct heap_entry *VAR_5 = FUNC_2 (VAR_4->value, VAR_4->global_id);
  if (VAR_5) {
    VAR_5->node = FUNC_0(VAR_3);
  }
  VAR_1++;
  return 1;
}
