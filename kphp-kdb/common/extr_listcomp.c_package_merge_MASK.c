
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_list_entry {scalar_t__ freq; int leaf_value; struct ccp_list_entry* next; struct ccp_list_entry* right; struct ccp_list_entry* left; } ;


 struct ccp_list_entry* FUNC_0 (scalar_t__) ;

__attribute__((used)) static struct ccp_list_entry *FUNC_1 (struct ccp_list_entry *VAR_0, struct ccp_list_entry *VAR_1) {
  struct ccp_list_entry *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);
  while (VAR_0 != ((void*)0)) {
    if (VAR_0->next == ((void*)0)) {
      break;
    }
    struct ccp_list_entry *VAR_4 = VAR_0->next, *VAR_5 = FUNC_0 (VAR_0->freq + VAR_4->freq);
    VAR_5->leaf_value = -1;
    VAR_5->left = VAR_0;
    VAR_5->right = VAR_4;
    VAR_0 = VAR_4->next;

    if (VAR_2 == ((void*)0)) {
      VAR_2 = VAR_3 = VAR_5;
    } else {
      VAR_3 = VAR_3->next = VAR_5;
    }
  }
  VAR_0 = VAR_2;
  VAR_2 = VAR_3 = ((void*)0);
  while (VAR_0 != ((void*)0) && VAR_1 != ((void*)0)) {
    if (VAR_0->freq <= VAR_1->freq) {
      if (VAR_2 == ((void*)0)) {
        VAR_2 = VAR_3 = VAR_0;
      } else {
        VAR_3 = VAR_3->next = VAR_0;
      }
      VAR_0 = VAR_0->next;
    } else {
      if (VAR_2 == ((void*)0)) {
        VAR_2 = VAR_3 = VAR_1;
      } else {
        VAR_3 = VAR_3->next = VAR_1;
      }
      VAR_1 = VAR_1->next;
    }
  }
  if (VAR_1 != ((void*)0)) {
    VAR_0 = VAR_1;
  }
  if (VAR_2 == ((void*)0)) {
    return VAR_0;
  }
  VAR_3->next = VAR_0;
  return VAR_2;
}
