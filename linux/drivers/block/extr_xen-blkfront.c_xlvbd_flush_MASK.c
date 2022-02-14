
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct blkfront_info {scalar_t__ max_indirect_segments; scalar_t__ feature_persistent; TYPE_1__* gd; scalar_t__ feature_fua; scalar_t__ feature_flush; int rq; } ;
struct TYPE_2__ {int disk_name; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct blkfront_info*) ;
 int FUNC_2 (char*,int ,int ,char*,char*,char*,char*) ;

__attribute__((used)) static void FUNC_3(struct blkfront_info *VAR_0)
{
 FUNC_0(VAR_0->rq, VAR_0->feature_flush ? 1 : 0,
         VAR_0->feature_fua ? 1 : 0);
 FUNC_2("blkfront: %s: %s %s %s %s %s\n",
  VAR_0->gd->disk_name, FUNC_1(VAR_0),
  "persistent grants:", VAR_0->feature_persistent ?
  "enabled;" : "disabled;", "indirect descriptors:",
  VAR_0->max_indirect_segments ? "enabled;" : "disabled;");
}
