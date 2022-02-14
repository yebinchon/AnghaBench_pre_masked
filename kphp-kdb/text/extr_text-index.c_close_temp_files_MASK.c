
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fd; scalar_t__ filename; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__) ;

int FUNC_4 (int VAR_3) {
  int VAR_4, VAR_5 = 0;
  if (!VAR_1) {
    return -1;
  }
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
    if ((VAR_3 & 1) && VAR_2[VAR_4].fd > 0) {
      FUNC_0 (FUNC_1 (VAR_2[VAR_4].fd) >= 0);
      VAR_2[VAR_4].fd = 0;
      VAR_5++;
    }
    if ((VAR_3 & 2) && VAR_2[VAR_4].filename) {
      FUNC_0 (FUNC_3 (VAR_2[VAR_4].filename) >= 0);
      FUNC_2 (VAR_2[VAR_4].filename);
      VAR_2[VAR_4].filename = 0;
      VAR_5++;
    }
  }
  return VAR_5;
}
