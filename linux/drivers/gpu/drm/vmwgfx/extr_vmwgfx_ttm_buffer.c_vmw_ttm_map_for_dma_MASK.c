
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int nents; int orig_nents; int sgl; } ;
struct vmw_ttm_tt {TYPE_3__ sgt; TYPE_2__* dev_priv; } ;
struct device {int dummy; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_4__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct vmw_ttm_tt *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev_priv->dev->dev;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_2->sgt.sgl, VAR_2->sgt.orig_nents,
    VAR_0);
 if (FUNC_1(VAR_4 == 0))
  return -VAR_1;

 VAR_2->sgt.nents = VAR_4;

 return 0;
}
