
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int list_id_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0 (list_id_t VAR_4) {
  if (VAR_4 < 0 && VAR_1) {
    VAR_4 = -VAR_4;
  }
  if (VAR_4 <= 0 || VAR_4 >= VAR_2 * VAR_0) {
    return -1;
  }
  return VAR_4 % VAR_2 == VAR_3 ? VAR_4 / VAR_2 : -1;
}
