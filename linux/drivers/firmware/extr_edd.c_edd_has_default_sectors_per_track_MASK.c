
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sectors_per_track; } ;
struct edd_info {TYPE_1__ params; } ;
struct edd_device {int dummy; } ;


 struct edd_info* FUNC_0 (struct edd_device*) ;

__attribute__((used)) static int
FUNC_1(struct edd_device *VAR_0)
{
 struct edd_info *VAR_1;
 if (!VAR_0)
  return 0;
 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  return 0;
 return VAR_1->params.sectors_per_track > 0;
}
