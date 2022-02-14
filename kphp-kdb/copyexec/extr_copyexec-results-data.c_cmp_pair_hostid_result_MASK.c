
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pair_hostid_result {scalar_t__ result; } ;



__attribute__((used)) static int FUNC_0 (const void *VAR_0, const void *VAR_1) {
  const struct pair_hostid_result *VAR_2 = (const struct pair_hostid_result *) VAR_0;
  const struct pair_hostid_result *VAR_3 = (const struct pair_hostid_result *) VAR_1;
  if (VAR_2->result < VAR_3->result) {
    return -1;
  }
  if (VAR_2->result > VAR_3->result) {
    return 1;
  }
  return 0;
}
