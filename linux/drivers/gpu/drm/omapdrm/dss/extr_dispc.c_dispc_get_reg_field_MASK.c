
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct dispc_device {TYPE_2__* feat; } ;
typedef enum dispc_feat_reg_field { ____Placeholder_dispc_feat_reg_field } dispc_feat_reg_field ;
struct TYPE_4__ {int num_reg_fields; TYPE_1__* reg_fields; } ;
struct TYPE_3__ {int end; int start; } ;


 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct dispc_device *VAR_0,
    enum dispc_feat_reg_field VAR_1,
    u8 *VAR_2, u8 *VAR_3)
{
 if (VAR_1 >= VAR_0->feat->num_reg_fields)
  FUNC_0();

 *VAR_2 = VAR_0->feat->reg_fields[VAR_1].start;
 *VAR_3 = VAR_0->feat->reg_fields[VAR_1].end;
}
