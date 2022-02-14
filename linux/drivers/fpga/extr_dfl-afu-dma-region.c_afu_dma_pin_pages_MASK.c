
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct dfl_feature_platform_data {TYPE_1__* dev; } ;
struct dfl_afu_dma_region {int length; int pages; int user_addr; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int mm; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int) ;
 TYPE_2__* VAR_5 ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 (int,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct dfl_feature_platform_data *VAR_6,
        struct dfl_afu_dma_region *VAR_7)
{
 int VAR_8 = VAR_7->length >> VAR_4;
 struct device *VAR_9 = &VAR_6->dev->dev;
 int VAR_10, VAR_11;

 VAR_10 = FUNC_0(VAR_5->mm, VAR_8, 1);
 if (VAR_10)
  return VAR_10;

 VAR_7->pages = FUNC_3(VAR_8, sizeof(struct page *), VAR_3);
 if (!VAR_7->pages) {
  VAR_10 = -VAR_1;
  goto unlock_vm;
 }

 VAR_11 = FUNC_2(VAR_7->user_addr, VAR_8, VAR_2,
         VAR_7->pages);
 if (VAR_11 < 0) {
  VAR_10 = VAR_11;
  goto put_pages;
 } else if (VAR_11 != VAR_8) {
  VAR_10 = -VAR_0;
  goto free_pages;
 }

 FUNC_1(VAR_9, "%d pages pinned\n", VAR_11);

 return 0;

put_pages:
 FUNC_5(VAR_7->pages, VAR_11);
free_pages:
 FUNC_4(VAR_7->pages);
unlock_vm:
 FUNC_0(VAR_5->mm, VAR_8, 0);
 return VAR_10;
}
