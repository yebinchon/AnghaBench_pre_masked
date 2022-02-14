
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int device; } ;
struct pci_dev {int dev; } ;
struct hfi1_pportdata {int * link_wq; int * hfi1_wq; } ;
struct hfi1_devdata {int num_pports; struct hfi1_pportdata* pport; int verbs_dev; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct hfi1_devdata*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct hfi1_devdata*) ;
 scalar_t__ FUNC_3 (scalar_t__,int,int) ;
 int FUNC_4 (struct hfi1_devdata*) ;
 int FUNC_5 (struct hfi1_devdata*,char*,...) ;
 int FUNC_6 (struct hfi1_devdata*,char*,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 struct hfi1_devdata* FUNC_11 (struct pci_dev*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct hfi1_devdata*) ;
 int FUNC_14 (struct hfi1_devdata*) ;
 int VAR_9 ;
 int FUNC_15 (struct hfi1_devdata*,int ) ;
 int FUNC_16 (struct hfi1_devdata*) ;
 int FUNC_17 (struct pci_dev*) ;
 int FUNC_18 (struct hfi1_devdata*) ;
 int FUNC_19 (struct hfi1_pportdata*) ;
 scalar_t__ VAR_10 ;
 int FUNC_20 (struct hfi1_devdata*) ;
 int FUNC_21 (struct hfi1_devdata*) ;
 int FUNC_22 (struct hfi1_devdata*) ;
 int FUNC_23 (struct hfi1_devdata*) ;
 int VAR_11 ;
 int FUNC_24 (struct hfi1_devdata*,int ) ;
 int FUNC_25 (scalar_t__) ;
 int FUNC_26 (struct hfi1_devdata*) ;
 int FUNC_27 (struct hfi1_devdata*) ;
 int VAR_12 ;
 scalar_t__ FUNC_28 (scalar_t__) ;
 int FUNC_29 (struct hfi1_devdata*) ;
 int FUNC_30 (struct hfi1_devdata*) ;

__attribute__((used)) static int FUNC_31(struct pci_dev *VAR_13, const struct pci_device_id *VAR_14)
{
 int VAR_15 = 0, VAR_16, VAR_17, VAR_18;
 struct hfi1_devdata *VAR_19;
 struct hfi1_pportdata *VAR_20;


 FUNC_0();


 if (!(VAR_14->device == VAR_6 ||
       VAR_14->device == VAR_7)) {
  FUNC_8(&VAR_13->dev, "Failing on unknown Intel deviceid 0x%x\n",
   VAR_14->device);
  VAR_15 = -VAR_1;
  goto bail;
 }


 VAR_19 = FUNC_11(VAR_13, VAR_5 *
    sizeof(struct hfi1_pportdata));
 if (FUNC_1(VAR_19)) {
  VAR_15 = FUNC_2(VAR_19);
  goto bail;
 }


 VAR_15 = FUNC_24(VAR_19, VAR_12);
 if (VAR_15)
  goto bail;


 if (!FUNC_9(VAR_9)) {
  FUNC_5(VAR_19, "Invalid HdrQ Entry size %u\n",
      VAR_9);
  VAR_15 = -VAR_0;
  goto bail;
 }
 if (VAR_8) {
  if (!FUNC_25(VAR_8))
   VAR_8 =
    FUNC_28(VAR_8);
  VAR_8 =
   FUNC_3(VAR_8,
      VAR_4 * 8,
      VAR_3);
  FUNC_6(VAR_19, "Eager buffer size %u\n",
       VAR_8);
 } else {
  FUNC_5(VAR_19, "Invalid Eager buffer size of 0\n");
  VAR_15 = -VAR_0;
  goto bail;
 }


 VAR_10 = FUNC_3(VAR_10, 0, 100);

 VAR_15 = FUNC_18(VAR_19);
 if (VAR_15)
  goto bail;





 VAR_15 = FUNC_16(VAR_19);
 if (VAR_15)
  goto clean_bail;

 VAR_15 = FUNC_4(VAR_19);
 if (VAR_15)
  goto clean_bail;


 VAR_18 = FUNC_15(VAR_19, 0);


 FUNC_23(VAR_19);

 VAR_15 = FUNC_20(VAR_19);







 if (!VAR_18 && !VAR_15) {
  VAR_19->flags |= VAR_2;

  FUNC_12(&VAR_19->verbs_dev);
 }

 VAR_16 = FUNC_13(VAR_19);
 if (VAR_16)
  FUNC_5(VAR_19, "Failed to create /dev devices: %d\n", -VAR_16);

 if (VAR_18 || VAR_15) {
  FUNC_26(VAR_19);
  FUNC_30(VAR_19);
  FUNC_10(VAR_11);
  for (VAR_17 = 0; VAR_17 < VAR_19->num_pports; ++VAR_17) {
   FUNC_19(VAR_19->pport + VAR_17);
   VAR_20 = VAR_19->pport + VAR_17;
   if (VAR_20->hfi1_wq) {
    FUNC_7(VAR_20->hfi1_wq);
    VAR_20->hfi1_wq = ((void*)0);
   }
   if (VAR_20->link_wq) {
    FUNC_7(VAR_20->link_wq);
    VAR_20->link_wq = ((void*)0);
   }
  }
  if (!VAR_16)
   FUNC_14(VAR_19);
  if (!VAR_15)
   FUNC_21(VAR_19);
  FUNC_22(VAR_19);
  FUNC_27(VAR_19);
  if (VAR_18)
   VAR_15 = VAR_18;
  goto bail;
 }

 FUNC_29(VAR_19);

 return 0;

clean_bail:
 FUNC_17(VAR_13);
bail:
 return VAR_15;
}
