
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct dpu_mdss_cfg {int intf_count; TYPE_1__* intf; } ;
typedef enum dpu_intf_type { ____Placeholder_dpu_intf_type } dpu_intf_type ;
typedef enum dpu_intf { ____Placeholder_dpu_intf } dpu_intf ;
struct TYPE_2__ {int type; scalar_t__ controller_id; int id; } ;


 int VAR_0 ;

__attribute__((used)) static enum dpu_intf FUNC_0(struct dpu_mdss_cfg *VAR_1,
  enum dpu_intf_type VAR_2, u32 VAR_3)
{
 int VAR_4 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_1->intf_count; VAR_4++) {
  if (VAR_1->intf[VAR_4].type == VAR_2
      && VAR_1->intf[VAR_4].controller_id == VAR_3) {
   return VAR_1->intf[VAR_4].id;
  }
 }

 return VAR_0;
}
