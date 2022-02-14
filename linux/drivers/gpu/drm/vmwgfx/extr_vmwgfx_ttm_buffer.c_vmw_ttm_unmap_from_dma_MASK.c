
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int orig_nents; int nents; int sgl; } ;
struct vmw_ttm_tt {TYPE_3__ sgt; TYPE_2__* dev_priv; } ;
struct device {int dummy; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_4__ {struct device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct vmw_ttm_tt *VAR_1)
{
 struct device *VAR_2 = VAR_1->dev_priv->dev->dev;

 FUNC_0(VAR_2, VAR_1->sgt.sgl, VAR_1->sgt.nents,
  VAR_0);
 VAR_1->sgt.nents = VAR_1->sgt.orig_nents;
}
