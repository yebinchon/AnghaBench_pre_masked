
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_list_entry {struct ccp_list_entry* next; int leaf_value; int freq; } ;


 struct ccp_list_entry* FUNC_0 (int ) ;

__attribute__((used)) static struct ccp_list_entry *FUNC_1 (struct ccp_list_entry *VAR_0, int VAR_1) {
  int VAR_2;
  struct ccp_list_entry *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);
  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
    struct ccp_list_entry *VAR_5 = FUNC_0 (VAR_0[VAR_2].freq);
    VAR_5->leaf_value = VAR_0[VAR_2].leaf_value;
    if (VAR_3 == ((void*)0)) {
      VAR_3 = VAR_4 = VAR_5;
    } else {
      VAR_4 = VAR_4->next = VAR_5;
    }
  }
  return VAR_3;
}
