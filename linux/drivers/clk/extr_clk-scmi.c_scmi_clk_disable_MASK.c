
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scmi_clk {int id; TYPE_2__* handle; } ;
struct clk_hw {int dummy; } ;
struct TYPE_4__ {TYPE_1__* clk_ops; } ;
struct TYPE_3__ {int (* disable ) (TYPE_2__*,int ) ;} ;


 int FUNC_0 (TYPE_2__*,int ) ;
 struct scmi_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_2(struct clk_hw *VAR_0)
{
 struct scmi_clk *VAR_1 = FUNC_1(VAR_0);

 VAR_1->handle->clk_ops->disable(VAR_1->handle, VAR_1->id);
}
