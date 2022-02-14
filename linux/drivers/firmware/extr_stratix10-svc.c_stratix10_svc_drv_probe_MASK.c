
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svc_invoke_fn ;
struct stratix10_svc_sh_memory {int * invoke_fn; } ;
struct stratix10_svc_data {int dummy; } ;
struct stratix10_svc_controller {int node; int svc_fifo_lock; int svc_fifo; int complete_status; int * invoke_fn; int * task; struct gen_pool* genpool; struct stratix10_svc_chan* chans; scalar_t__ num_active_client; int num_chans; struct device* dev; } ;
struct stratix10_svc_chan {int lock; int name; struct stratix10_svc_controller* ctrl; int * scl; } ;
struct stratix10_svc {int stratix10_svc_rsu; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct gen_pool {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,struct stratix10_svc*) ;
 struct stratix10_svc_chan* FUNC_3 (struct device*,int ,int,int) ;
 void* FUNC_4 (struct device*,int,int) ;
 int * FUNC_5 (struct device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,size_t,int) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct platform_device*,struct stratix10_svc_controller*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int *) ;
 struct gen_pool* FUNC_15 (struct platform_device*,struct stratix10_svc_sh_memory*) ;
 int VAR_9 ;
 int FUNC_16 (struct platform_device*,struct stratix10_svc_sh_memory*) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_10)
{
 struct device *VAR_11 = &VAR_10->dev;
 struct stratix10_svc_controller *VAR_12;
 struct stratix10_svc_chan *VAR_13;
 struct gen_pool *VAR_14;
 struct stratix10_svc_sh_memory *VAR_15;
 struct stratix10_svc *VAR_16;

 svc_invoke_fn *VAR_17;
 size_t VAR_18;
 int VAR_19;


 VAR_17 = FUNC_5(VAR_11);
 if (FUNC_0(VAR_17))
  return -VAR_0;

 VAR_15 = FUNC_4(VAR_11, sizeof(*VAR_15), VAR_2);
 if (!VAR_15)
  return -VAR_1;

 VAR_15->invoke_fn = VAR_17;
 VAR_19 = FUNC_16(VAR_10, VAR_15);
 if (VAR_19)
  return VAR_19;

 VAR_14 = FUNC_15(VAR_10, VAR_15);
 if (!VAR_14)
  return -VAR_1;


 VAR_12 = FUNC_4(VAR_11, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_13 = FUNC_3(VAR_11, VAR_6,
       sizeof(*VAR_13), VAR_2 | VAR_8);
 if (!VAR_13)
  return -VAR_1;

 VAR_12->dev = VAR_11;
 VAR_12->num_chans = VAR_6;
 VAR_12->num_active_client = 0;
 VAR_12->chans = VAR_13;
 VAR_12->genpool = VAR_14;
 VAR_12->task = ((void*)0);
 VAR_12->invoke_fn = VAR_17;
 FUNC_6(&VAR_12->complete_status);

 VAR_18 = sizeof(struct stratix10_svc_data) * VAR_7;
 VAR_19 = FUNC_7(&VAR_12->svc_fifo, VAR_18, VAR_2);
 if (VAR_19) {
  FUNC_1(VAR_11, "failed to allocate FIFO\n");
  return VAR_19;
 }
 FUNC_14(&VAR_12->svc_fifo_lock);

 VAR_13[0].scl = ((void*)0);
 VAR_13[0].ctrl = VAR_12;
 VAR_13[0].name = VAR_4;
 FUNC_14(&VAR_13[0].lock);

 VAR_13[1].scl = ((void*)0);
 VAR_13[1].ctrl = VAR_12;
 VAR_13[1].name = VAR_5;
 FUNC_14(&VAR_13[1].lock);

 FUNC_8(&VAR_12->node, &VAR_9);
 FUNC_12(VAR_10, VAR_12);


 VAR_16 = FUNC_4(VAR_11, sizeof(*VAR_16), VAR_2);
 if (!VAR_16)
  return -VAR_1;

 VAR_16->stratix10_svc_rsu = FUNC_10(VAR_3, 0);
 if (!VAR_16->stratix10_svc_rsu) {
  FUNC_1(VAR_11, "failed to allocate %s device\n", VAR_3);
  return -VAR_1;
 }

 VAR_19 = FUNC_9(VAR_16->stratix10_svc_rsu);
 if (VAR_19) {
  FUNC_11(VAR_16->stratix10_svc_rsu);
  return VAR_19;
 }
 FUNC_2(VAR_11, VAR_16);

 FUNC_13("Intel Service Layer Driver Initialized\n");

 return VAR_19;
}
