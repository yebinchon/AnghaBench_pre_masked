
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcb_table_entry {scalar_t__ p; scalar_t__ i; } ;



__attribute__((used)) static int FUNC_0 (const void *VAR_0, const void *VAR_1) {
  const struct fcb_table_entry *VAR_2 = VAR_0;
  const struct fcb_table_entry *VAR_3 = VAR_1;
  if (VAR_2->p < VAR_3->p) { return -1; }
  if (VAR_2->p > VAR_3->p) { return 1; }
  if (VAR_2->i < VAR_3->i) { return -1; }
  if (VAR_2->i > VAR_3->i) { return 1; }
  return 0;
}
