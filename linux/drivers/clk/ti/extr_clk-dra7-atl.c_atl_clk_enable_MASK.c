
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dra7_atl_desc {int enabled; int id; TYPE_1__* cinfo; scalar_t__ divider; int valid; int probed; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ) ;
 struct dra7_atl_desc* FUNC_5 (struct clk_hw*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_1)
{
 struct dra7_atl_desc *VAR_2 = FUNC_5(VAR_1);

 if (!VAR_2->probed)
  goto out;

 if (FUNC_6(!VAR_2->valid))
  FUNC_3(VAR_2->cinfo->dev, "atl%d has not been configured\n",
    VAR_2->id);
 FUNC_4(VAR_2->cinfo->dev);

 FUNC_2(VAR_2->cinfo, FUNC_0(VAR_2->id),
    VAR_2->divider - 1);
 FUNC_2(VAR_2->cinfo, FUNC_1(VAR_2->id), VAR_0);

out:
 VAR_2->enabled = 1;

 return 0;
}
