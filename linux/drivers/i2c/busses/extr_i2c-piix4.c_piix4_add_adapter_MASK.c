
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {int * parent; } ;
struct i2c_piix4_adapdata {int class; unsigned short smba; int sb800_main; int port; int notify_imc; int name; TYPE_1__ dev; int * algo; int owner; } ;
struct i2c_adapter {int class; unsigned short smba; int sb800_main; int port; int notify_imc; int name; TYPE_1__ dev; int * algo; int owner; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct i2c_piix4_adapdata*) ;
 int FUNC_4 (struct i2c_piix4_adapdata*,struct i2c_piix4_adapdata*) ;
 int FUNC_5 (struct i2c_piix4_adapdata*) ;
 struct i2c_piix4_adapdata* FUNC_6 (int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (unsigned short,int ) ;
 int VAR_8 ;
 int FUNC_8 (int ,int,char*,char const*,unsigned short) ;

__attribute__((used)) static int FUNC_9(struct pci_dev *VAR_9, unsigned short VAR_10,
        bool VAR_11, u8 VAR_12, bool VAR_13,
        u8 VAR_14, const char *VAR_15,
        struct i2c_adapter **VAR_16)
{
 struct i2c_adapter *VAR_17;
 struct i2c_piix4_adapdata *VAR_18;
 int VAR_19;

 VAR_17 = FUNC_6(sizeof(*VAR_17), VAR_1);
 if (VAR_17 == ((void*)0)) {
  FUNC_7(VAR_10, VAR_4);
  return -VAR_0;
 }

 VAR_17->owner = VAR_5;
 VAR_17->class = VAR_2 | VAR_3;
 VAR_17->algo = VAR_11 ? &VAR_7
    : &VAR_8;

 VAR_18 = FUNC_6(sizeof(*VAR_18), VAR_1);
 if (VAR_18 == ((void*)0)) {
  FUNC_5(VAR_17);
  FUNC_7(VAR_10, VAR_4);
  return -VAR_0;
 }

 VAR_18->smba = VAR_10;
 VAR_18->sb800_main = VAR_11;
 VAR_18->port = VAR_12 << VAR_6;
 VAR_18->notify_imc = VAR_13;


 VAR_17->dev.parent = &VAR_9->dev;

 if (FUNC_2(&VAR_9->dev)) {
  FUNC_1(&VAR_17->dev,
          FUNC_0(&VAR_9->dev),
          VAR_14);
 }

 FUNC_8(VAR_17->name, sizeof(VAR_17->name),
  "SMBus PIIX4 adapter%s at %04x", VAR_15, VAR_10);

 FUNC_4(VAR_17, VAR_18);

 VAR_19 = FUNC_3(VAR_17);
 if (VAR_19) {
  FUNC_5(VAR_18);
  FUNC_5(VAR_17);
  FUNC_7(VAR_10, VAR_4);
  return VAR_19;
 }

 *VAR_16 = VAR_17;
 return 0;
}
