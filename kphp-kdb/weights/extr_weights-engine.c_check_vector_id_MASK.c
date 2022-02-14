
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static int FUNC_1 (int VAR_3) {
  if (VAR_3 <= 0) {
    FUNC_0 (VAR_0, "vector_id isn't positive");
    return -1;
  }
  if (VAR_3 % VAR_2 != VAR_1) {
    FUNC_0 (VAR_0, "wrong split: vector_id = %d, log_split_min = %d, log_split_mod = %d", VAR_3, VAR_1, VAR_2);
    return -1;
  }
  return 0;
}
