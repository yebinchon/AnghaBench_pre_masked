
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {scalar_t__ vendor; scalar_t__ device; int revision; int bus; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,int ,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int,int ,int,int,char*,int *) ;
 int FUNC_3 (struct pci_dev*,int,int) ;
 int VAR_7 ;
 char* VAR_8 ;
 int * VAR_9 ;
 int FUNC_4 (struct pci_dev*,struct pci_device_id const*) ;
 int FUNC_5 (struct pci_dev*,struct pci_device_id const*,int) ;
 int FUNC_6 (struct pci_dev*,struct pci_device_id const*,int) ;

__attribute__((used)) static int FUNC_7(struct pci_dev *VAR_10, const struct pci_device_id *VAR_11)
{
 int VAR_12;
 bool VAR_13 = 0;

 if ((VAR_10->vendor == VAR_5 &&
      VAR_10->device == VAR_3 &&
      VAR_10->revision >= 0x40) ||
     VAR_10->vendor == VAR_4 ||
     VAR_10->vendor == VAR_6) {
  bool VAR_14 = 0;
  VAR_13 = 1;

  if ((VAR_10->vendor == VAR_4 ||
       VAR_10->vendor == VAR_6) &&
      VAR_10->device == VAR_2) {
   u8 VAR_15;





   FUNC_1(VAR_10->bus, FUNC_0(0x14, 3),
       0x40, &VAR_15);
   if (VAR_15 & 0x80)
    VAR_14 = 1;
  }


  VAR_12 = FUNC_6(VAR_10, VAR_11, 0);
  if (VAR_12 < 0)
   return VAR_12;





  VAR_12 = FUNC_3(VAR_10, VAR_12, VAR_14);
  if (VAR_12 < 0)
   return VAR_12;
 } else {
  VAR_12 = FUNC_4(VAR_10, VAR_11);
  if (VAR_12 < 0)
   return VAR_12;


  VAR_12 = FUNC_2(VAR_10, VAR_12, 0, 0, 0, 0,
        "", &VAR_9[0]);
  if (VAR_12 < 0)
   return VAR_12;
 }


 VAR_12 = -VAR_0;

 if (VAR_10->vendor == VAR_5 &&
     VAR_10->device == VAR_3) {
  if (VAR_10->revision < 0x40) {
   VAR_12 = FUNC_5(VAR_10, VAR_11, 0x58);
  } else {

   VAR_12 = FUNC_6(VAR_10, VAR_11, 1);
  }
 }

 if (VAR_10->vendor == VAR_4 &&
     VAR_10->device == VAR_1) {
  VAR_12 = FUNC_6(VAR_10, VAR_11, 1);
 }

 if (VAR_12 > 0) {


  FUNC_2(VAR_10, VAR_12, 0, 0, 0, 1,
      VAR_13 ? VAR_8 : "",
      &VAR_7);
 }

 return 0;
}
