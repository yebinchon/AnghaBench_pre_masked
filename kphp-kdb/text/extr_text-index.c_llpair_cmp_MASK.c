
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct llpair {scalar_t__ key; int local_id; } ;



__attribute__((used)) static inline int FUNC_0 (struct llpair *VAR_0, struct llpair *VAR_1) {
  if (VAR_0->key < VAR_1->key) {
    return -1;
  } else if (VAR_0->key > VAR_1->key) {
    return 1;
  }
  return VAR_0->local_id - VAR_1->local_id;
}
