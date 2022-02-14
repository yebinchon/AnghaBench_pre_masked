
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* dev; } ;
struct msm_gem_object {TYPE_3__* sgt; TYPE_2__ base; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int nents; int sgl; } ;
struct TYPE_4__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*,int ,int ,int ) ;
 int FUNC_2 (struct device*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4(struct msm_gem_object *VAR_2)
{
 struct device *VAR_3 = VAR_2->base.dev->dev;

 if (FUNC_3(VAR_3) && FUNC_0(VAR_0)) {
  FUNC_1(VAR_3, VAR_2->sgt->sgl,
   VAR_2->sgt->nents, VAR_1);
 } else {
  FUNC_2(VAR_3, VAR_2->sgt->sgl,
   VAR_2->sgt->nents, VAR_1);
 }
}
