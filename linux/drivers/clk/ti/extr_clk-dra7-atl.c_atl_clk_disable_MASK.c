
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dra7_atl_desc {int enabled; TYPE_1__* cinfo; int id; int probed; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (int ) ;
 struct dra7_atl_desc* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_4(struct clk_hw *VAR_0)
{
 struct dra7_atl_desc *VAR_1 = FUNC_3(VAR_0);

 if (!VAR_1->probed)
  goto out;

 FUNC_1(VAR_1->cinfo, FUNC_0(VAR_1->id), 0);
 FUNC_2(VAR_1->cinfo->dev);

out:
 VAR_1->enabled = 0;
}
