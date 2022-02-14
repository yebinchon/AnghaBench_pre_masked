
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long value_t ;
typedef int object_id_t ;
typedef int list_id_t ;


 scalar_t__ FUNC_0 (int ,int ,int,int,long long,int const*) ;
 long long FUNC_1 (int ,int ,long long,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int ,int) ;

long long FUNC_4 (list_id_t VAR_1, object_id_t VAR_2, int VAR_3, value_t VAR_4, const int *VAR_5) {
  if (VAR_0 && FUNC_3 (VAR_1, 1) < 0) {
    return -1LL << 63;
  }
  if (FUNC_2 (VAR_1, VAR_2)) {
    return FUNC_1 (VAR_1, VAR_2, VAR_4, 1);
  } else {
    if (FUNC_0 (VAR_1, VAR_2, 2, VAR_3, VAR_4, VAR_5) <= 0) {
      return -1LL << 63;
    } else {
      return VAR_4;
    }
  }
}
