
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scmi_clk {int id; TYPE_2__* handle; } ;
struct clk_hw {int dummy; } ;
struct TYPE_4__ {TYPE_1__* clk_ops; } ;
struct TYPE_3__ {int (* rate_set ) (TYPE_2__*,int ,unsigned long) ;} ;


 int FUNC_0 (TYPE_2__*,int ,unsigned long) ;
 struct scmi_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0, unsigned long VAR_1,
        unsigned long VAR_2)
{
 struct scmi_clk *VAR_3 = FUNC_1(VAR_0);

 return VAR_3->handle->clk_ops->rate_set(VAR_3->handle, VAR_3->id, VAR_1);
}
