
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pebs_format; } ;
struct TYPE_4__ {scalar_t__ pebs_prec_dist; TYPE_1__ intel_cap; scalar_t__ lbr_nr; int pebs_broken; scalar_t__ pebs_active; } ;


 TYPE_2__ VAR_0 ;

int FUNC_0(void)
{
 int VAR_1 = 0;


 if (VAR_0.pebs_active && !VAR_0.pebs_broken) {
  VAR_1++;


  if (VAR_0.lbr_nr || VAR_0.intel_cap.pebs_format >= 2)
   VAR_1++;

  if (VAR_0.pebs_prec_dist)
   VAR_1++;
 }
 return VAR_1;
}
