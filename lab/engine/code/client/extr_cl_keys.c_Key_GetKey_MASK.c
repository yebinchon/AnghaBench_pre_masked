
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ binding; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,scalar_t__) ;
 TYPE_1__* VAR_1 ;

int FUNC_1(const char *VAR_2) {
  int VAR_3;

  if (VAR_2) {
   for (VAR_3=0 ; VAR_3 < VAR_0 ; VAR_3++) {
      if (VAR_1[VAR_3].binding && FUNC_0(VAR_2, VAR_1[VAR_3].binding) == 0) {
        return VAR_3;
      }
    }
  }
  return -1;
}
