
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * fops; int name; int minor; } ;
struct kcs_bmc {TYPE_1__ miscdev; void* kbuffer; void* data_out; void* data_in; int queue; int mutex; int channel; int lock; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,int ,char*,int ,int ) ;
 void* FUNC_1 (struct device*,int ,int ) ;
 struct kcs_bmc* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct kcs_bmc *FUNC_6(struct device *VAR_5, int VAR_6, u32 VAR_7)
{
 struct kcs_bmc *VAR_8;

 VAR_8 = FUNC_2(VAR_5, sizeof(*VAR_8) + VAR_6, VAR_1);
 if (!VAR_8)
  return ((void*)0);

 FUNC_5(&VAR_8->lock);
 VAR_8->channel = VAR_7;

 FUNC_4(&VAR_8->mutex);
 FUNC_3(&VAR_8->queue);

 VAR_8->data_in = FUNC_1(VAR_5, VAR_2, VAR_1);
 VAR_8->data_out = FUNC_1(VAR_5, VAR_2, VAR_1);
 VAR_8->kbuffer = FUNC_1(VAR_5, VAR_2, VAR_1);

 VAR_8->miscdev.minor = VAR_3;
 VAR_8->miscdev.name = FUNC_0(VAR_5, VAR_1, "%s%u",
            VAR_0, VAR_7);
 if (!VAR_8->data_in || !VAR_8->data_out || !VAR_8->kbuffer ||
     !VAR_8->miscdev.name)
  return ((void*)0);
 VAR_8->miscdev.fops = &VAR_4;

 return VAR_8;
}
