
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_hw_sgl {int dummy; } ;
struct sec_dev_info {int * queues; int hw_sgl_pool; int dev_lock; struct device* dev; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct device*,char*,...) ;
 struct sec_dev_info* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct device*,int ) ;
 int FUNC_4 (char*,struct device*,int,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct platform_device*,struct sec_dev_info*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct sec_dev_info*) ;
 int FUNC_10 (struct sec_dev_info*,struct platform_device*) ;
 int FUNC_11 (struct sec_dev_info*) ;
 int FUNC_12 (struct sec_dev_info*,int *,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct sec_dev_info*,int *) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_4)
{
 struct sec_dev_info *VAR_5;
 struct device *VAR_6 = &VAR_4->dev;
 int VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_6, FUNC_0(64));
 if (VAR_9) {
  FUNC_1(VAR_6, "Failed to set 64 bit dma mask %d", VAR_9);
  return -VAR_0;
 }

 VAR_5 = FUNC_2(VAR_6, (sizeof(*VAR_5)), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_5->dev = VAR_6;
 FUNC_5(&VAR_5->dev_lock);

 VAR_5->hw_sgl_pool = FUNC_4("sgl", VAR_6,
          sizeof(struct sec_hw_sgl), 64, 0);
 if (!VAR_5->hw_sgl_pool) {
  FUNC_1(VAR_6, "Failed to create sec sgl dma pool\n");
  return -VAR_1;
 }

 VAR_9 = FUNC_10(VAR_5, VAR_4);
 if (VAR_9) {
  FUNC_1(VAR_6, "Base initialization fail! %d\n", VAR_9);
  return VAR_9;
 }

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_9 = FUNC_12(VAR_5, &VAR_5->queues[VAR_7], VAR_7);
  if (VAR_9)
   goto queues_unconfig;

  VAR_9 = FUNC_13(&VAR_5->queues[VAR_7]);
  if (VAR_9) {
   FUNC_15(VAR_5, &VAR_5->queues[VAR_7]);
   goto queues_unconfig;
  }
 }

 VAR_9 = FUNC_7();
 if (VAR_9) {
  FUNC_1(VAR_6, "Failed to register algorithms with crypto %d\n",
   VAR_9);
  goto queues_unconfig;
 }

 FUNC_6(VAR_4, VAR_5);

 VAR_9 = FUNC_11(VAR_5);
 if (VAR_9)
  goto algs_unregister;

 return 0;

algs_unregister:
 FUNC_8();
queues_unconfig:
 for (VAR_8 = VAR_7 - 1; VAR_8 >= 0; VAR_8--) {
  FUNC_14(&VAR_5->queues[VAR_8]);
  FUNC_15(VAR_5, &VAR_5->queues[VAR_8]);
 }
 FUNC_9(VAR_5);

 return VAR_9;
}
