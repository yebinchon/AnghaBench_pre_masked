
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device_node {int dummy; } ;
typedef enum mtk_ddp_comp_type { ____Placeholder_mtk_ddp_comp_type } mtk_ddp_comp_type ;
struct TYPE_3__ {int type; int alias_id; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int * VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct device_node*,int ) ;

int FUNC_2(struct device_node *VAR_3,
   enum mtk_ddp_comp_type VAR_4)
{
 int VAR_5 = FUNC_1(VAR_3, VAR_1[VAR_4]);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
  if (VAR_4 == VAR_2[VAR_6].type &&
      (VAR_5 < 0 || VAR_5 == VAR_2[VAR_6].alias_id))
   return VAR_6;
 }

 return -VAR_0;
}
