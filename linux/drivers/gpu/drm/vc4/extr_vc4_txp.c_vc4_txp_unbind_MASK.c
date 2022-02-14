
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int base; } ;
struct vc4_txp {TYPE_1__ connector; } ;
struct vc4_dev {int * txp; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 void* FUNC_0 (struct device*) ;
 struct vc4_dev* FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0, struct device *VAR_1,
      void *VAR_2)
{
 struct drm_device *VAR_3 = FUNC_0(VAR_1);
 struct vc4_dev *VAR_4 = FUNC_1(VAR_3);
 struct vc4_txp *VAR_5 = FUNC_0(VAR_0);

 FUNC_2(&VAR_5->connector.base);

 VAR_4->txp = ((void*)0);
}
