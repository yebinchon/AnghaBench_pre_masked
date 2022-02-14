
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ has_guest_code; scalar_t__ new_partition_table; int config_area; scalar_t__ has_display_cfg; int cmd_done; } ;
struct f34_data {TYPE_2__ v7; TYPE_1__* fn; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct f34_data*) ;
 int FUNC_3 (struct f34_data*) ;
 int FUNC_4 (struct f34_data*,int ) ;
 int FUNC_5 (struct f34_data*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct f34_data *VAR_4)
{
 int VAR_5;

 FUNC_0(&VAR_4->fn->dev, "Erasing firmware...\n");

 FUNC_1(&VAR_4->v7.cmd_done);

 VAR_5 = FUNC_5(VAR_4, VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_4(VAR_4, VAR_0);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4->v7.config_area = VAR_3;
 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_4->v7.has_display_cfg) {
  VAR_4->v7.config_area = VAR_2;
  VAR_5 = FUNC_2(VAR_4);
  if (VAR_5 < 0)
   return VAR_5;
 }

 if (VAR_4->v7.new_partition_table && VAR_4->v7.has_guest_code) {
  VAR_5 = FUNC_3(VAR_4);
  if (VAR_5 < 0)
   return VAR_5;
 }

 return 0;
}
