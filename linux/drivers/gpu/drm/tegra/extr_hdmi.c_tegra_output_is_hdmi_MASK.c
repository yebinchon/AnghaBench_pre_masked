
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* edid_blob_ptr; } ;
struct tegra_output {TYPE_2__ connector; } ;
struct edid {int dummy; } ;
struct TYPE_3__ {scalar_t__ data; } ;


 int FUNC_0 (struct edid*) ;

__attribute__((used)) static bool FUNC_1(struct tegra_output *VAR_0)
{
 struct edid *VAR_1;

 if (!VAR_0->connector.edid_blob_ptr)
  return 0;

 VAR_1 = (struct edid *)VAR_0->connector.edid_blob_ptr->data;

 return FUNC_0(VAR_1);
}
