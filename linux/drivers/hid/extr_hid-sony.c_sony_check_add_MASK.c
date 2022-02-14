
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sony_sc {int quirks; TYPE_1__* hdev; int * mac_address; } ;
struct TYPE_4__ {int uniq; } ;


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
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,int,int *,int,int ,int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int ,int,char*,int *) ;
 int FUNC_7 (struct sony_sc*) ;
 scalar_t__ FUNC_8 (struct sony_sc*) ;

__attribute__((used)) static int FUNC_9(struct sony_sc *VAR_15)
{
 u8 *VAR_16 = ((void*)0);
 int VAR_17, VAR_18;

 if ((VAR_15->quirks & VAR_1) ||
     (VAR_15->quirks & VAR_9) ||
     (VAR_15->quirks & VAR_10) ||
     (VAR_15->quirks & VAR_12)) {






  if (FUNC_8(VAR_15) < 0) {
   FUNC_2(VAR_15->hdev, "UNIQ does not contain a MAC address; duplicate check skipped\n");
   return 0;
  }
 } else if (VAR_15->quirks & (VAR_2 | VAR_3)) {
  VAR_16 = FUNC_4(VAR_0, VAR_6);
  if (!VAR_16)
   return -VAR_5;






  VAR_18 = FUNC_1(VAR_15->hdev, 0x81, VAR_16,
    VAR_0, VAR_7,
    VAR_8);

  if (VAR_18 != VAR_0) {
   FUNC_0(VAR_15->hdev, "failed to retrieve feature report 0x81 with the DualShock 4 MAC address\n");
   VAR_18 = VAR_18 < 0 ? VAR_18 : -VAR_4;
   goto out_free;
  }

  FUNC_5(VAR_15->mac_address, &VAR_16[1], sizeof(VAR_15->mac_address));

  FUNC_6(VAR_15->hdev->uniq, sizeof(VAR_15->hdev->uniq),
    "%pMR", VAR_15->mac_address);
 } else if ((VAR_15->quirks & VAR_13) ||
   (VAR_15->quirks & VAR_11)) {
  VAR_16 = FUNC_4(VAR_14, VAR_6);
  if (!VAR_16)
   return -VAR_5;






  VAR_18 = FUNC_1(VAR_15->hdev, 0xf2, VAR_16,
    VAR_14, VAR_7,
    VAR_8);

  if (VAR_18 != VAR_14) {
   FUNC_0(VAR_15->hdev, "failed to retrieve feature report 0xf2 with the Sixaxis MAC address\n");
   VAR_18 = VAR_18 < 0 ? VAR_18 : -VAR_4;
   goto out_free;
  }





  for (VAR_17 = 0; VAR_17 < 6; VAR_17++)
   VAR_15->mac_address[5-VAR_17] = VAR_16[4+VAR_17];

  FUNC_6(VAR_15->hdev->uniq, sizeof(VAR_15->hdev->uniq),
    "%pMR", VAR_15->mac_address);
 } else {
  return 0;
 }

 VAR_18 = FUNC_7(VAR_15);

out_free:

 FUNC_3(VAR_16);

 return VAR_18;
}
