
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int disable; } ;
struct TYPE_7__ {int irq; TYPE_1__ f30_data; } ;
struct TYPE_6__ {char* proto_name; int * ops; TYPE_3__ pdata; int dev; } ;
struct rmi_data {int device_flags; size_t input_report_size; size_t output_report_size; TYPE_2__ xport; int rmi_irq; int page_mutex; int wait; void* writeReport; void* readReport; struct hid_device* hdev; int reset_work; } ;
struct hid_report {int dummy; } ;
struct hid_device_id {int driver_data; } ;
struct TYPE_8__ {int parent; } ;
struct hid_device {TYPE_4__ dev; int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_1 (TYPE_4__*,size_t,int ) ;
 int FUNC_2 (struct hid_device*,char*) ;
 int FUNC_3 (struct hid_device*,char*) ;
 int FUNC_4 (struct hid_device*,int ) ;
 int FUNC_5 (struct hid_device*) ;
 void* FUNC_6 (struct hid_report*) ;
 int VAR_13 ;
 int FUNC_7 (struct hid_device*,struct rmi_data*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct hid_device*,int ,int ,struct hid_report**) ;
 TYPE_3__ VAR_14 ;
 int VAR_15 ;
 int FUNC_11 (struct hid_device*) ;

__attribute__((used)) static int FUNC_12(struct hid_device *VAR_16, const struct hid_device_id *VAR_17)
{
 struct rmi_data *VAR_18 = ((void*)0);
 int VAR_19;
 size_t VAR_20;
 struct hid_report *VAR_21;
 struct hid_report *VAR_22;
 struct hid_report *VAR_23;

 VAR_18 = FUNC_1(&VAR_16->dev, sizeof(struct rmi_data), VAR_1);
 if (!VAR_18)
  return -VAR_0;

 FUNC_0(&VAR_18->reset_work, VAR_15);
 VAR_18->hdev = VAR_16;

 FUNC_7(VAR_16, VAR_18);

 VAR_16->quirks |= VAR_6;
 VAR_16->quirks |= VAR_7;

 VAR_19 = FUNC_5(VAR_16);
 if (VAR_19) {
  FUNC_3(VAR_16, "parse failed\n");
  return VAR_19;
 }

 if (VAR_17->driver_data)
  VAR_18->device_flags = VAR_17->driver_data;





 if (!FUNC_10(VAR_16, VAR_3,
     VAR_11, &VAR_23)) {
  FUNC_2(VAR_16, "device does not have set mode feature report\n");
  goto start;
 }

 if (!FUNC_10(VAR_16, VAR_4,
     VAR_8, &VAR_21)) {
  FUNC_2(VAR_16, "device does not have attention input report\n");
  goto start;
 }

 VAR_18->input_report_size = FUNC_6(VAR_21);

 if (!FUNC_10(VAR_16, VAR_5,
     VAR_12, &VAR_22)) {
  FUNC_2(VAR_16,
   "device does not have rmi write output report\n");
  goto start;
 }

 VAR_18->output_report_size = FUNC_6(VAR_22);

 VAR_18->device_flags |= VAR_9;
 VAR_20 = VAR_18->output_report_size + VAR_18->input_report_size;

 VAR_18->writeReport = FUNC_1(&VAR_16->dev, VAR_20, VAR_1);
 if (!VAR_18->writeReport) {
  FUNC_3(VAR_16, "failed to allocate buffer for HID reports\n");
  return -VAR_0;
 }

 VAR_18->readReport = VAR_18->writeReport + VAR_18->output_report_size;

 FUNC_8(&VAR_18->wait);

 FUNC_9(&VAR_18->page_mutex);

 VAR_19 = FUNC_11(VAR_16);
 if (VAR_19) {
  FUNC_3(VAR_16, "failed to allocate IRQ domain\n");
  return VAR_19;
 }

 if (VAR_18->device_flags & VAR_10)
  VAR_14.f30_data.disable = 1;

 VAR_18->xport.dev = VAR_16->dev.parent;
 VAR_18->xport.pdata = VAR_14;
 VAR_18->xport.pdata.irq = VAR_18->rmi_irq;
 VAR_18->xport.proto_name = "hid";
 VAR_18->xport.ops = &VAR_13;

start:
 VAR_19 = FUNC_4(VAR_16, VAR_2);
 if (VAR_19) {
  FUNC_3(VAR_16, "hw start failed\n");
  return VAR_19;
 }

 return 0;
}
