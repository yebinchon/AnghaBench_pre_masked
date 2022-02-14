
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pool; } ;
struct dmabounce_device_info {int (* needs_bounce ) (struct device*,VAR_0,size_t) ;TYPE_2__ small; int attr_res; scalar_t__ bounce_count; scalar_t__ map_op_count; scalar_t__ total_allocs; int lock; int safe_buffers; struct device* dev; TYPE_2__ large; } ;
struct TYPE_3__ {struct dmabounce_device_info* dmabounce; } ;
struct device {TYPE_1__ archdata; } ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,struct device*,char*,unsigned long) ;
 int VAR_4 ;
 int FUNC_6 (struct dmabounce_device_info*) ;
 struct dmabounce_device_info* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct device*,int *) ;

int FUNC_10(struct device *VAR_5, unsigned long VAR_6,
  unsigned long VAR_7,
  int (*VAR_8)(struct device *, VAR_9, size_t))
{
 struct dmabounce_device_info *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_7(sizeof(struct dmabounce_device_info), VAR_2);
 if (!VAR_10) {
  FUNC_1(VAR_5,
   "Could not allocated dmabounce_device_info\n");
  return -VAR_1;
 }

 VAR_11 = FUNC_5(&VAR_10->small, VAR_5,
      "small_dmabounce_pool", VAR_6);
 if (VAR_11) {
  FUNC_1(VAR_5,
   "dmabounce: could not allocate DMA pool for %ld byte objects\n",
   VAR_6);
  goto err_free;
 }

 if (VAR_7) {
  VAR_11 = FUNC_5(&VAR_10->large, VAR_5,
       "large_dmabounce_pool",
       VAR_7);
  if (VAR_11) {
   FUNC_1(VAR_5,
    "dmabounce: could not allocate DMA pool for %ld byte objects\n",
    VAR_7);
   goto err_destroy;
  }
 }

 VAR_10->dev = VAR_5;
 FUNC_0(&VAR_10->safe_buffers);
 FUNC_8(&VAR_10->lock);
 VAR_10->needs_bounce = VAR_8;
 VAR_5->archdata.dmabounce = VAR_10;
 FUNC_9(VAR_5, &VAR_4);

 FUNC_2(VAR_5, "dmabounce: registered device\n");

 return 0;

 err_destroy:
 FUNC_4(VAR_10->small.pool);
 err_free:
 FUNC_6(VAR_10);
 return VAR_11;
}
