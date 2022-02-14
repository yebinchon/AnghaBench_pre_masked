
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dfl_feature_platform_data {TYPE_1__* dev; } ;
struct dfl_afu_dma_region {long length; int pages; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int mm; } ;
struct TYPE_3__ {struct device dev; } ;


 long VAR_0 ;
 int FUNC_0 (int ,long,int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (struct device*,char*,long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,long) ;

__attribute__((used)) static void FUNC_4(struct dfl_feature_platform_data *VAR_2,
    struct dfl_afu_dma_region *VAR_3)
{
 long VAR_4 = VAR_3->length >> VAR_0;
 struct device *VAR_5 = &VAR_2->dev->dev;

 FUNC_3(VAR_3->pages, VAR_4);
 FUNC_2(VAR_3->pages);
 FUNC_0(VAR_1->mm, VAR_4, 0);

 FUNC_1(VAR_5, "%ld pages unpinned\n", VAR_4);
}
