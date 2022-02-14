
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int local_id; } ;
typedef TYPE_1__ message_t ;



__attribute__((used)) static inline int FUNC_0 (message_t *VAR_0, message_t *VAR_1) {
  int VAR_2 = VAR_0->local_id - VAR_1->local_id;
  if (VAR_2) {
    return VAR_2;
  }
  return (VAR_0 < VAR_1 ? -1 : (VAR_0 > VAR_1 ? 1 : 0));
}
