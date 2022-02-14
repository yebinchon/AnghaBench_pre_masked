
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ drive_old_mx; scalar_t__ drive_mx; scalar_t__ drive_r; scalar_t__ drive_l; } ;
typedef TYPE_1__ one_header ;


 int FUNC_0 (int) ;

void FUNC_1 (one_header *VAR_0) {
  if (VAR_0->drive_old_mx < VAR_0->drive_mx) {
    FUNC_0 (VAR_0->drive_r < VAR_0->drive_old_mx && VAR_0->drive_l <= VAR_0->drive_r);
  }
  VAR_0->drive_old_mx = VAR_0->drive_mx;
}
