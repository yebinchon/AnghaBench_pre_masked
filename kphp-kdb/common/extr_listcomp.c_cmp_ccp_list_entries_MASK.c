
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_list_entry {scalar_t__ freq; scalar_t__ leaf_value; } ;



__attribute__((used)) static int FUNC_0 (const void *VAR_0, const void *VAR_1) {
  const struct ccp_list_entry *VAR_2 = (const struct ccp_list_entry *) VAR_0;
  const struct ccp_list_entry *VAR_3 = (const struct ccp_list_entry *) VAR_1;
  if (VAR_2->freq < VAR_3->freq) { return -1; }
  if (VAR_2->freq > VAR_3->freq) { return 1; }
  if (VAR_2->leaf_value < VAR_3->leaf_value) { return -1; }
  if (VAR_2->leaf_value > VAR_3->leaf_value) { return 1; }
  return 0;
}
