
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {size_t si_type; size_t addr_space; int (* io_setup ) (TYPE_1__*) ;int (* io_cleanup ) (TYPE_1__*) ;TYPE_6__* dev; int slave_addr; scalar_t__ irq; scalar_t__ addr_source; int io_size; int addr_data; } ;
struct smi_info {int run_to_completion; int interrupt_disabled; int has_event_buffer; int dev_group_added; TYPE_1__ io; int req_events; int need_watch; int * stats; int * curr_msg; int * waiting_msg; int si_sm; TYPE_4__* handlers; int si_num; } ;
struct TYPE_14__ {int * init_name; } ;
struct TYPE_13__ {scalar_t__ (* detect ) (int ) ;int (* init_data ) (int ,TYPE_1__*) ;int (* size ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;

 int FUNC_0 (int ) ;
 int * VAR_5 ;
 int FUNC_1 (int *,int) ;
 TYPE_4__ VAR_6 ;
 int FUNC_2 (struct smi_info*) ;
 int FUNC_3 (TYPE_6__*,char*,...) ;
 int FUNC_4 (TYPE_6__*,char*,int ) ;
 int FUNC_5 (TYPE_6__*,struct smi_info*) ;
 int FUNC_6 (TYPE_6__*,int *) ;
 int VAR_7 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,struct smi_info*,TYPE_6__*,int ) ;
 int VAR_8 ;
 TYPE_4__ VAR_9 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int ,int ,int ,int ,int ,scalar_t__) ;
 int FUNC_12 (struct smi_info*) ;
 int FUNC_13 (struct smi_info*) ;
 int * VAR_10 ;
 int VAR_11 ;
 TYPE_4__ VAR_12 ;
 int FUNC_14 (struct smi_info*) ;
 int FUNC_15 () ;
 int FUNC_16 (int ,TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (struct smi_info*) ;
 int FUNC_21 (struct smi_info*) ;

__attribute__((used)) static int FUNC_22(struct smi_info *VAR_13)
{
 int VAR_14 = 0;
 int VAR_15;

 FUNC_11("Trying %s-specified %s state machine at %s address 0x%lx, slave address 0x%x, irq %d\n",
  FUNC_7(VAR_13->io.addr_source),
  VAR_10[VAR_13->io.si_type],
  VAR_5[VAR_13->io.addr_space],
  VAR_13->io.addr_data,
  VAR_13->io.slave_addr, VAR_13->io.irq);

 switch (VAR_13->io.si_type) {
 case 129:
  VAR_13->handlers = &VAR_9;
  break;

 case 128:
  VAR_13->handlers = &VAR_12;
  break;

 case 130:
  VAR_13->handlers = &VAR_6;
  break;

 default:

  VAR_14 = -VAR_0;
  goto out_err;
 }

 VAR_13->si_num = VAR_11;


 if (!VAR_13->io.dev) {
  FUNC_10("IPMI interface added with no device\n");
  VAR_14 = VAR_0;
  goto out_err;
 }


 VAR_13->si_sm = FUNC_9(VAR_13->handlers->size(), VAR_3);
 if (!VAR_13->si_sm) {
  VAR_14 = -VAR_2;
  goto out_err;
 }
 VAR_13->io.io_size = VAR_13->handlers->init_data(VAR_13->si_sm,
          &VAR_13->io);


 VAR_14 = VAR_13->io.io_setup(&VAR_13->io);
 if (VAR_14) {
  FUNC_3(VAR_13->io.dev, "Could not set up I/O space\n");
  goto out_err;
 }


 if (VAR_13->handlers->detect(VAR_13->si_sm)) {
  if (VAR_13->io.addr_source)
   FUNC_3(VAR_13->io.dev,
    "Interface detection failed\n");
  VAR_14 = -VAR_1;
  goto out_err;
 }





 VAR_14 = FUNC_21(VAR_13);
 if (VAR_14) {
  if (VAR_13->io.addr_source)
   FUNC_3(VAR_13->io.dev,
          "There appears to be no BMC at this location\n");
  goto out_err;
 }

 FUNC_12(VAR_13);
 FUNC_13(VAR_13);
 FUNC_2(VAR_13);

 VAR_13->waiting_msg = ((void*)0);
 VAR_13->curr_msg = ((void*)0);
 FUNC_1(&VAR_13->req_events, 0);
 VAR_13->run_to_completion = 0;
 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++)
  FUNC_1(&VAR_13->stats[VAR_15], 0);

 VAR_13->interrupt_disabled = 1;
 FUNC_1(&VAR_13->need_watch, 0);

 VAR_14 = FUNC_20(VAR_13);
 if (VAR_14 == 0)
  VAR_13->has_event_buffer = 1;





 FUNC_14(VAR_13);





 if (VAR_13->io.irq) {
  VAR_13->interrupt_disabled = 0;
  FUNC_1(&VAR_13->req_events, 1);
 }

 FUNC_5(VAR_13->io.dev, VAR_13);
 VAR_14 = FUNC_6(VAR_13->io.dev, &VAR_8);
 if (VAR_14) {
  FUNC_3(VAR_13->io.dev,
   "Unable to add device attributes: error %d\n",
   VAR_14);
  goto out_err;
 }
 VAR_13->dev_group_added = 1;

 VAR_14 = FUNC_8(&VAR_7,
          VAR_13,
          VAR_13->io.dev,
          VAR_13->io.slave_addr);
 if (VAR_14) {
  FUNC_3(VAR_13->io.dev,
   "Unable to register device: error %d\n",
   VAR_14);
  goto out_err;
 }


 VAR_11++;

 FUNC_4(VAR_13->io.dev, "IPMI %s interface initialized\n",
   VAR_10[VAR_13->io.si_type]);

 FUNC_0(VAR_13->io.dev->init_name != ((void*)0));

 out_err:
 if (VAR_14 && VAR_13->io.io_cleanup) {
  VAR_13->io.io_cleanup(&VAR_13->io);
  VAR_13->io.io_cleanup = ((void*)0);
 }

 return VAR_14;
}
