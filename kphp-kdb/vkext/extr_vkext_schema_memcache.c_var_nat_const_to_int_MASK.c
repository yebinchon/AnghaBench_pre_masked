
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_tree_nat_const {long long value; } ;



long long FUNC_0 (void *VAR_0) {
  if (((long)VAR_0) & 1) {
    return (((long)VAR_0) + 0x80000001l) / 2;
  } else {
    return ((struct tl_tree_nat_const *)VAR_0)->value;
  }
}
