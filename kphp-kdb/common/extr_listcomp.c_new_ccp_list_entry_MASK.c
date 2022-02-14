
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_list_entry {long long freq; int * next; int right; int left; } ;


 struct ccp_list_entry* FUNC_0 (int) ;

__attribute__((used)) static struct ccp_list_entry *FUNC_1 (long long VAR_0) {
  struct ccp_list_entry *VAR_1 = FUNC_0 (sizeof (struct ccp_list_entry));
  VAR_1->freq = VAR_0;
  VAR_1->left = VAR_1->right = *(VAR_1->next = ((void*)0));
  return VAR_1;
}
