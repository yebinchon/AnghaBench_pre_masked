
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ data; scalar_t__ aio; } ;
struct TYPE_3__ {int offset; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (scalar_t__,int) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_3 (int VAR_4) {
  if (VAR_0[VAR_4].aio) {
    return 0;
  }
  if (!VAR_0[VAR_4].data) {
    FUNC_0 (0);
    return 0;
  }
  FUNC_1 (VAR_4);
  FUNC_2 (VAR_0[VAR_4].data, sizeof (long long) * (VAR_1[VAR_4 + 1].offset - VAR_1[VAR_4].offset));
  VAR_0[VAR_4].data = 0;
  VAR_2--;
  VAR_3++;
  return 1;
}
