
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* dev; } ;
struct mtk_hsdma_device {TYPE_1__ ddev; } ;
struct device {int dummy; } ;



__attribute__((used)) static struct device *FUNC_0(struct mtk_hsdma_device *VAR_0)
{
 return VAR_0->ddev.dev;
}
