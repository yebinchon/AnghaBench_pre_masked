
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u64 ;
struct scmi_clk {int id; TYPE_2__* handle; } ;
struct clk_hw {int dummy; } ;
struct TYPE_4__ {TYPE_1__* clk_ops; } ;
struct TYPE_3__ {int (* rate_get ) (TYPE_2__*,int ,unsigned long*) ;} ;


 int FUNC_0 (TYPE_2__*,int ,unsigned long*) ;
 struct scmi_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_0,
       unsigned long VAR_1)
{
 int VAR_2;
 u64 VAR_3;
 struct scmi_clk *VAR_4 = FUNC_1(VAR_0);

 VAR_2 = VAR_4->handle->clk_ops->rate_get(VAR_4->handle, VAR_4->id, &VAR_3);
 if (VAR_2)
  return 0;
 return VAR_3;
}
