
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {scalar_t__ device; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct pci_dev*,int ,unsigned int*) ;
 unsigned int FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,unsigned int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (unsigned int,int ,char*) ;
 unsigned int VAR_7 ;
 scalar_t__ FUNC_6 (unsigned int) ;
 unsigned int VAR_8 ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_9, const struct pci_device_id *VAR_10)
{
 unsigned VAR_11;

 if (VAR_9->device == VAR_3 ||
     VAR_9->device == VAR_2) {
  VAR_11 = FUNC_1(VAR_9, 0);
  FUNC_3("GPIO base 0x%x\n", VAR_11);

  if (!FUNC_5(VAR_11, VAR_6,
        "NatSemi SCx200 GPIO")) {
   FUNC_2("can't allocate I/O for GPIOs\n");
   return -VAR_0;
  }

  VAR_8 = VAR_11;
  FUNC_7();

 } else {

  if (FUNC_6(VAR_5)) {
   VAR_7 = VAR_5;
  } else {
   FUNC_0(VAR_9, VAR_4, &VAR_11);
   if (FUNC_6(VAR_11)) {
    VAR_7 = VAR_11;
   } else {
    FUNC_4("Configuration Block not found\n");
    return -VAR_1;
   }
  }
  FUNC_3("Configuration Block base 0x%x\n", VAR_7);
 }

 return 0;
}
