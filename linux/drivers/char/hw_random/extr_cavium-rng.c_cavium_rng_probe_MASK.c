
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct cavium_rng_pf {int control_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 struct cavium_rng_pf* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct pci_dev*,int) ;
 int FUNC_3 (struct pci_dev*,struct cavium_rng_pf*) ;
 int FUNC_4 (struct pci_dev*,int ,int ) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_4,
   const struct pci_device_id *VAR_5)
{
 struct cavium_rng_pf *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(&VAR_4->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;


 VAR_6->control_status = FUNC_4(VAR_4, 0, 0);
 if (!VAR_6->control_status) {
  FUNC_0(&VAR_4->dev,
   "Error iomap failed retrieving control_status.\n");
  return -VAR_0;
 }


 FUNC_5(VAR_3 | VAR_2,
  VAR_6->control_status);

 FUNC_3(VAR_4, VAR_6);


 VAR_7 = FUNC_2(VAR_4, 1);
 if (VAR_7 != 0) {

  FUNC_5(0, VAR_6->control_status);
  FUNC_0(&VAR_4->dev,
   "Error initializing RNG virtual function,(%i).\n",
   VAR_7);
  return VAR_7;
 }

 return 0;
}
