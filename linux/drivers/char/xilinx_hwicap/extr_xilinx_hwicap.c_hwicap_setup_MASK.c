
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {scalar_t__ start; int end; } ;
struct TYPE_3__ {int owner; } ;
struct hwicap_drvdata {scalar_t__ mem_size; int base_address; TYPE_1__ cdev; scalar_t__ mem_start; scalar_t__ is_open; int sem; struct config_registers const* config_regs; struct hwicap_driver_config const* config; struct device* dev; int devt; int mem_end; } ;
struct hwicap_driver_config {int dummy; } ;
struct device {int dummy; } ;
struct config_registers {int dummy; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*,void*) ;
 int FUNC_6 (int ,struct device*,int ,int *,char*,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct hwicap_drvdata*) ;
 struct hwicap_drvdata* FUNC_10 (int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int* VAR_13 ;
 int FUNC_14 (scalar_t__,scalar_t__) ;
 int FUNC_15 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_16 (struct resource const*) ;

__attribute__((used)) static int FUNC_17(struct device *VAR_14, int VAR_15,
  const struct resource *VAR_16,
  const struct hwicap_driver_config *VAR_17,
  const struct config_registers *VAR_18)
{
 dev_t VAR_19;
 struct hwicap_drvdata *VAR_20 = ((void*)0);
 int VAR_21 = 0;

 FUNC_4(VAR_14, "Xilinx icap port driver\n");

 FUNC_12(&VAR_12);

 if (VAR_15 < 0) {
  for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15++)
   if (!VAR_13[VAR_15])
    break;
 }
 if (VAR_15 < 0 || VAR_15 >= VAR_6) {
  FUNC_13(&VAR_12);
  FUNC_3(VAR_14, "%s%i too large\n", VAR_0, VAR_15);
  return -VAR_3;
 }
 if (VAR_13[VAR_15]) {
  FUNC_13(&VAR_12);
  FUNC_3(VAR_14, "cannot assign to %s%i; it is already in use\n",
   VAR_0, VAR_15);
  return -VAR_1;
 }

 VAR_13[VAR_15] = 1;
 FUNC_13(&VAR_12);

 VAR_19 = FUNC_0(VAR_8, VAR_9 + VAR_15);

 VAR_20 = FUNC_10(sizeof(struct hwicap_drvdata), VAR_5);
 if (!VAR_20) {
  VAR_21 = -VAR_4;
  goto failed0;
 }
 FUNC_5(VAR_14, (void *)VAR_20);

 if (!VAR_16) {
  FUNC_3(VAR_14, "Couldn't get registers resource\n");
  VAR_21 = -VAR_2;
  goto failed1;
 }

 VAR_20->mem_start = VAR_16->start;
 VAR_20->mem_end = VAR_16->end;
 VAR_20->mem_size = FUNC_16(VAR_16);

 if (!FUNC_15(VAR_20->mem_start,
     VAR_20->mem_size, VAR_0)) {
  FUNC_3(VAR_14, "Couldn't lock memory region at %Lx\n",
   (unsigned long long) VAR_16->start);
  VAR_21 = -VAR_1;
  goto failed1;
 }

 VAR_20->devt = VAR_19;
 VAR_20->dev = VAR_14;
 VAR_20->base_address = FUNC_7(VAR_20->mem_start, VAR_20->mem_size);
 if (!VAR_20->base_address) {
  FUNC_3(VAR_14, "ioremap() failed\n");
  VAR_21 = -VAR_4;
  goto failed2;
 }

 VAR_20->config = VAR_17;
 VAR_20->config_regs = VAR_18;

 FUNC_11(&VAR_20->sem);
 VAR_20->is_open = 0;

 FUNC_4(VAR_14, "ioremap %llx to %p with size %llx\n",
   (unsigned long long) VAR_20->mem_start,
   VAR_20->base_address,
   (unsigned long long) VAR_20->mem_size);

 FUNC_2(&VAR_20->cdev, &VAR_10);
 VAR_20->cdev.owner = VAR_7;
 VAR_21 = FUNC_1(&VAR_20->cdev, VAR_19, 1);
 if (VAR_21) {
  FUNC_3(VAR_14, "cdev_add() failed\n");
  goto failed3;
 }

 FUNC_6(VAR_11, VAR_14, VAR_19, ((void*)0), "%s%d", VAR_0, VAR_15);
 return 0;

 failed3:
 FUNC_8(VAR_20->base_address);

 failed2:
 FUNC_14(VAR_16->start, VAR_20->mem_size);

 failed1:
 FUNC_9(VAR_20);

 failed0:
 FUNC_12(&VAR_12);
 VAR_13[VAR_15] = 0;
 FUNC_13(&VAR_12);

 return VAR_21;
}
