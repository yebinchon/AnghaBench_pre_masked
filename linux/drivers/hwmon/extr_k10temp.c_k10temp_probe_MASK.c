
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tctl_offset {int model; int offset; int id; } ;
struct pci_device_id {int dummy; } ;
struct device {int dummy; } ;
struct pci_dev {struct device dev; } ;
struct k10temp_data {int temp_adjust_mask; int show_tdie; int temp_offset; int read_tempreg; int read_htcreg; struct pci_dev* pdev; } ;
struct TYPE_2__ {int x86; int x86_model; int x86_model_id; } ;


 int FUNC_0 (struct tctl_offset*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 struct device* FUNC_4 (struct device*,char*,struct k10temp_data*,int ) ;
 struct k10temp_data* FUNC_5 (struct device*,int,int ) ;
 int VAR_4 ;
 int FUNC_6 (struct pci_dev*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_7 (int ,int ) ;
 struct tctl_offset* VAR_11 ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_12,
       const struct pci_device_id *VAR_13)
{
 int VAR_14 = FUNC_6(VAR_12);
 struct device *VAR_15 = &VAR_12->dev;
 struct k10temp_data *VAR_16;
 struct device *VAR_17;
 int VAR_18;

 if (VAR_14) {
  if (!VAR_4) {
   FUNC_2(VAR_15,
    "unreliable CPU thermal sensor; monitoring disabled\n");
   return -VAR_0;
  }
  FUNC_3(VAR_15,
    "unreliable CPU thermal sensor; check erratum 319\n");
 }

 VAR_16 = FUNC_5(VAR_15, sizeof(*VAR_16), VAR_2);
 if (!VAR_16)
  return -VAR_1;

 VAR_16->pdev = VAR_12;

 if (VAR_3.x86 == 0x15 &&
     ((VAR_3.x86_model & 0xf0) == 0x60 ||
      (VAR_3.x86_model & 0xf0) == 0x70)) {
  VAR_16->read_htcreg = VAR_6;
  VAR_16->read_tempreg = VAR_8;
 } else if (VAR_3.x86 == 0x17 || VAR_3.x86 == 0x18) {
  VAR_16->temp_adjust_mask = 0x80000;
  VAR_16->read_tempreg = VAR_9;
  VAR_16->show_tdie = 1;
 } else {
  VAR_16->read_htcreg = VAR_7;
  VAR_16->read_tempreg = VAR_10;
 }

 for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_11); VAR_18++) {
  const struct tctl_offset *VAR_19 = &VAR_11[VAR_18];

  if (VAR_3.x86 == VAR_19->model &&
      FUNC_7(VAR_3.x86_model_id, VAR_19->id)) {
   VAR_16->temp_offset = VAR_19->offset;
   break;
  }
 }

 VAR_17 = FUNC_4(VAR_15, "k10temp", VAR_16,
          VAR_5);
 return FUNC_1(VAR_17);
}
