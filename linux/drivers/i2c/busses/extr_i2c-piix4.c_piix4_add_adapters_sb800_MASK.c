
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {scalar_t__ device; int revision; int dev; } ;
struct i2c_piix4_adapdata {scalar_t__ smba; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_piix4_adapdata*) ;
 struct i2c_piix4_adapdata* FUNC_2 (struct i2c_piix4_adapdata*) ;
 int FUNC_3 (struct i2c_piix4_adapdata*) ;
 int VAR_4 ;
 int FUNC_4 (struct pci_dev*,unsigned short,int,int,int,int,int ,struct i2c_piix4_adapdata**) ;
 struct i2c_piix4_adapdata** VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_7, unsigned short VAR_8,
        bool VAR_9)
{
 struct i2c_piix4_adapdata *VAR_10;
 int VAR_11;
 int VAR_12;

 if (VAR_7->device == VAR_2 ||
     (VAR_7->device == VAR_1 &&
      VAR_7->revision >= 0x1F)) {
  VAR_4 = VAR_0;
 } else {
  VAR_4 = VAR_3;
 }

 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
  u8 VAR_13 = VAR_11 == 0 ? 0 : VAR_11 + 1;

  VAR_12 = FUNC_4(VAR_7, VAR_8, 1, VAR_11, VAR_9,
        VAR_13,
        VAR_6[VAR_11],
        &VAR_5[VAR_11]);
  if (VAR_12 < 0)
   goto error;
 }

 return VAR_12;

error:
 FUNC_0(&VAR_7->dev,
  "Error setting up SB800 adapters. Unregistering!\n");
 while (--VAR_11 >= 0) {
  VAR_10 = FUNC_2(VAR_5[VAR_11]);
  if (VAR_10->smba) {
   FUNC_1(VAR_5[VAR_11]);
   FUNC_3(VAR_10);
   FUNC_3(VAR_5[VAR_11]);
   VAR_5[VAR_11] = ((void*)0);
  }
 }

 return VAR_12;
}
