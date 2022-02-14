
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* data; } ;
struct TYPE_3__ {long long drive_l; long long drive_r; long long drive_old_mx; } ;


 TYPE_2__ VAR_0 ;

long long FUNC_0 (int VAR_1) {
  long long VAR_2 = VAR_0.data[VAR_1].drive_l;
  long long VAR_3 = VAR_0.data[VAR_1].drive_r;
  if (VAR_2 <= VAR_3) {
    return VAR_3 - VAR_2;
  } else {
    return VAR_3 + VAR_0.data[VAR_1].drive_old_mx - VAR_2;
  }
}
