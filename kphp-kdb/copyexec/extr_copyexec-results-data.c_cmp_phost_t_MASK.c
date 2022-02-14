
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ first_data_time; scalar_t__ last_data_time; } ;
typedef TYPE_1__ host_t ;


 int FUNC_0 (TYPE_1__ const*,TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_1 (const void *VAR_0, const void *VAR_1) {
  const host_t *VAR_2 = *(const host_t **) VAR_0, *VAR_3 = *(const host_t **) VAR_1;
  int VAR_4 = FUNC_0 (VAR_2, VAR_3);
  if (VAR_4) {
    return VAR_4;
  }
  if (VAR_2->first_data_time < VAR_3->first_data_time) {
    return -1;
  }
  if (VAR_2->first_data_time > VAR_3->first_data_time) {
    return 1;
  }
  if (VAR_2->last_data_time < VAR_3->last_data_time) {
    return -1;
  }
  if (VAR_2->last_data_time > VAR_3->last_data_time) {
    return 1;
  }
  return 0;
}
