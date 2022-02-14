
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_branch_dev; } ;
struct dc_link {TYPE_1__ dpcd_caps; } ;



bool FUNC_0(const struct dc_link *VAR_0)
{
 return VAR_0->dpcd_caps.is_branch_dev;
}
