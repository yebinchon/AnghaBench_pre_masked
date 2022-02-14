
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct ecc_settings {int dummy; } ;
struct TYPE_4__ {int x86; } ;
struct TYPE_3__ {struct pci_dev* misc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (char*) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct pci_dev*,unsigned int) ;
 struct ecc_settings** VAR_4 ;
 int FUNC_3 (struct ecc_settings*,unsigned int,struct pci_dev*) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (struct ecc_settings*) ;
 struct ecc_settings* FUNC_6 (int,int ) ;
 TYPE_1__* FUNC_7 (unsigned int) ;
 int FUNC_8 (struct ecc_settings*,unsigned int,struct pci_dev*) ;

__attribute__((used)) static int FUNC_9(unsigned int VAR_5)
{
 struct pci_dev *VAR_6 = FUNC_7(VAR_5)->misc;
 struct ecc_settings *VAR_7;
 int VAR_8;

 VAR_8 = -VAR_0;
 VAR_7 = FUNC_6(sizeof(struct ecc_settings), VAR_1);
 if (!VAR_7)
  goto err_out;

 VAR_4[VAR_5] = VAR_7;

 if (!FUNC_2(VAR_6, VAR_5)) {
  VAR_8 = 0;

  if (!VAR_3)
   goto err_enable;

  if (VAR_2.x86 >= 0x17) {
   FUNC_1("Forcing ECC on is not recommended on newer systems. Please enable ECC in BIOS.");
   goto err_enable;
  } else
   FUNC_1("Forcing ECC on!\n");

  if (!FUNC_3(VAR_7, VAR_5, VAR_6))
   goto err_enable;
 }

 VAR_8 = FUNC_4(VAR_5);
 if (VAR_8 < 0) {
  FUNC_0("Error probing instance: %d\n", VAR_5);

  if (VAR_2.x86 < 0x17)
   FUNC_8(VAR_7, VAR_5, VAR_6);

  goto err_enable;
 }

 return VAR_8;

err_enable:
 FUNC_5(VAR_7);
 VAR_4[VAR_5] = ((void*)0);

err_out:
 return VAR_8;
}
