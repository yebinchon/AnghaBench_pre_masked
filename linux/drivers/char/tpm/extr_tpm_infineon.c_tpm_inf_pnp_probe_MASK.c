
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tpm_chip {int dummy; } ;
struct pnp_device_id {int id; } ;
struct pnp_dev {int dev; int name; } ;
struct TYPE_2__ {scalar_t__ iotype; int config_port; int config_size; int data_regs; int data_size; int map_base; int index_off; int map_size; int * mem_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (struct tpm_chip*) ;
 int FUNC_1 (struct tpm_chip*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,int,int,...) ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct pnp_dev*,int ) ;
 int FUNC_7 (struct pnp_dev*,int ) ;
 int FUNC_8 (struct pnp_dev*,int ) ;
 scalar_t__ FUNC_9 (struct pnp_dev*,int ) ;
 int FUNC_10 (struct pnp_dev*,int ) ;
 void* FUNC_11 (struct pnp_dev*,int) ;
 void* FUNC_12 (struct pnp_dev*,int) ;
 scalar_t__ FUNC_13 (struct pnp_dev*,int) ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (int,int) ;
 int * FUNC_16 (int,int ,char*) ;
 int * FUNC_17 (int,int,char*) ;
 int FUNC_18 (struct tpm_chip*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int,int ) ;
 int FUNC_21 (int ,int ) ;
 TYPE_1__ VAR_23 ;
 int VAR_24 ;
 struct tpm_chip* FUNC_22 (int *,int *) ;

__attribute__((used)) static int FUNC_23(struct pnp_dev *VAR_25,
           const struct pnp_device_id *VAR_26)
{
 int VAR_27 = 0;
 u8 VAR_28, VAR_29;
 int VAR_30[2];
 int VAR_31[2];
 int VAR_32[2];
 const char *VAR_33;
 struct tpm_chip *VAR_34;


 if (FUNC_13(VAR_25, 0) && FUNC_13(VAR_25, 1) &&
     !(FUNC_10(VAR_25, 0) & VAR_14)) {

  VAR_23.iotype = VAR_22;

  VAR_23.config_port = FUNC_12(VAR_25, 0);
  VAR_23.config_size = FUNC_11(VAR_25, 0);
  VAR_23.data_regs = FUNC_12(VAR_25, 1);
  VAR_23.data_size = FUNC_11(VAR_25, 1);
  if ((VAR_23.data_size < 4) || (VAR_23.config_size < 2)) {
   VAR_27 = -VAR_4;
   goto err_last;
  }
  FUNC_3(&VAR_25->dev, "Found %s with ID %s\n",
    VAR_25->name, VAR_26->id);
  if (!((VAR_23.data_regs >> 8) & 0xff)) {
   VAR_27 = -VAR_4;
   goto err_last;
  }

  if (FUNC_17(VAR_23.data_regs, VAR_23.data_size,
       "tpm_infineon0") == ((void*)0)) {
   VAR_27 = -VAR_4;
   goto err_last;
  }
  if (FUNC_17(VAR_23.config_port, VAR_23.config_size,
       "tpm_infineon0") == ((void*)0)) {
   FUNC_15(VAR_23.data_regs, VAR_23.data_size);
   VAR_27 = -VAR_4;
   goto err_last;
  }
 } else if (FUNC_9(VAR_25, 0) &&
     !(FUNC_6(VAR_25, 0) & VAR_14)) {

  VAR_23.iotype = VAR_21;

  VAR_23.map_base = FUNC_8(VAR_25, 0);
  VAR_23.map_size = FUNC_7(VAR_25, 0);

  FUNC_3(&VAR_25->dev, "Found %s with ID %s\n",
    VAR_25->name, VAR_26->id);


  if (FUNC_16(VAR_23.map_base, VAR_23.map_size,
           "tpm_infineon0") == ((void*)0)) {
   VAR_27 = -VAR_4;
   goto err_last;
  }

  VAR_23.mem_base = FUNC_4(VAR_23.map_base, VAR_23.map_size);
  if (VAR_23.mem_base == ((void*)0)) {
   FUNC_14(VAR_23.map_base, VAR_23.map_size);
   VAR_27 = -VAR_4;
   goto err_last;
  }
  VAR_23.index_off = VAR_16;
  VAR_23.data_regs = 0x0;
 } else {
  VAR_27 = -VAR_4;
  goto err_last;
 }


 FUNC_20(VAR_6, VAR_19);
 FUNC_20(VAR_11, VAR_19);
 VAR_30[1] = FUNC_19(VAR_20);
 FUNC_20(VAR_10, VAR_19);
 VAR_30[0] = FUNC_19(VAR_20);
 FUNC_20(VAR_9, VAR_19);
 VAR_32[1] = FUNC_19(VAR_20);
 FUNC_20(VAR_8, VAR_19);
 VAR_32[0] = FUNC_19(VAR_20);
 FUNC_20(VAR_0, VAR_19);
 VAR_31[1] = FUNC_19(VAR_20);
 FUNC_20(VAR_1, VAR_19);
 VAR_31[0] = FUNC_19(VAR_20);

 switch ((VAR_32[0] << 8) | VAR_32[1]) {
 case 6:
  VAR_33 = " (SLD 9630 TT 1.1)";
  break;
 case 11:
  VAR_33 = " (SLB 9635 TT 1.2)";
  break;
 default:
  VAR_33 = " (unknown chip)";
  break;
 }

 if ((VAR_30[0] << 8 | VAR_30[1]) == (VAR_18)) {


  FUNC_20(VAR_12, VAR_19);
  FUNC_20((VAR_23.data_regs >> 8) & 0xff, VAR_20);
  FUNC_20(VAR_13, VAR_19);
  FUNC_20((VAR_23.data_regs & 0xff), VAR_20);


  FUNC_20(VAR_12, VAR_19);
  VAR_29 = FUNC_19(VAR_20);
  FUNC_20(VAR_13, VAR_19);
  VAR_28 = FUNC_19(VAR_20);

  if ((VAR_29 << 8 | VAR_28) != VAR_23.data_regs) {
   FUNC_2(&VAR_25->dev,
    "Could not set IO-data registers to 0x%x\n",
    VAR_23.data_regs);
   VAR_27 = -VAR_5;
   goto err_release_region;
  }


  FUNC_20(VAR_17, VAR_19);
  FUNC_20(0x01, VAR_20);
  FUNC_20(VAR_3, VAR_19);


  FUNC_21(VAR_15, VAR_2);


  FUNC_3(&VAR_25->dev, "TPM found: "
    "config base 0x%lx, "
    "data base 0x%lx, "
    "chip version 0x%02x%02x, "
    "vendor id 0x%x%x (Infineon), "
    "product id 0x%02x%02x"
    "%s\n",
    VAR_23.iotype == VAR_22 ?
    VAR_23.config_port :
    VAR_23.map_base + VAR_23.index_off,
    VAR_23.iotype == VAR_22 ?
    VAR_23.data_regs :
    VAR_23.map_base + VAR_23.data_regs,
    VAR_31[0], VAR_31[1],
    VAR_30[0], VAR_30[1],
    VAR_32[0], VAR_32[1], VAR_33);

  VAR_34 = FUNC_22(&VAR_25->dev, &VAR_24);
  if (FUNC_0(VAR_34)) {
   VAR_27 = FUNC_1(VAR_34);
   goto err_release_region;
  }

  VAR_27 = FUNC_18(VAR_34);
  if (VAR_27)
   goto err_release_region;

  return 0;
 } else {
  VAR_27 = -VAR_7;
  goto err_release_region;
 }

err_release_region:
 if (VAR_23.iotype == VAR_22) {
  FUNC_15(VAR_23.data_regs, VAR_23.data_size);
  FUNC_15(VAR_23.config_port, VAR_23.config_size);
 } else {
  FUNC_5(VAR_23.mem_base);
  FUNC_14(VAR_23.map_base, VAR_23.map_size);
 }

err_last:
 return VAR_27;
}
