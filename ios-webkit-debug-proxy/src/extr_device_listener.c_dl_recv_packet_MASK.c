
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef size_t uint32_t ;
typedef int * plist_t ;
typedef int ht_t ;
typedef TYPE_1__* dl_t ;
typedef int dl_status ;
typedef TYPE_2__* dl_private_t ;
struct TYPE_7__ {int device_num_to_device_id; } ;
struct TYPE_6__ {int (* on_detach ) (TYPE_1__*,char*,int) ;int (* on_attach ) (TYPE_1__*,char*,int) ;TYPE_2__* private_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,char*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (char*,char*,int) ;
 int * FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char const*,size_t,int **) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,char**) ;
 int FUNC_12 (int *,scalar_t__*) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (TYPE_1__*,char*,int) ;
 int FUNC_16 (TYPE_1__*,char*,int) ;

dl_status FUNC_17(dl_t VAR_4, const char *VAR_5, size_t VAR_6) {
  dl_private_t VAR_7 = VAR_4->private_state;

  const char *VAR_8 = VAR_5;
  uint32_t VAR_9 = FUNC_1(VAR_8);
  VAR_8 += 4;
  if (VAR_9 != VAR_6 || VAR_9 < 16) {
    return VAR_0;
  }
  uint32_t VAR_10 = FUNC_1(VAR_8);
  VAR_8 += 4;
  uint32_t VAR_11 = FUNC_1(VAR_8);
  VAR_8 += 4;
  (void)FUNC_1(VAR_8);
  VAR_8 += 4;
  const char *VAR_12 = VAR_8;
  size_t VAR_13 = VAR_6 - 16;

  if (VAR_10 != 1 || VAR_11 != VAR_3) {
    return VAR_1;
  }

  plist_t VAR_14 = ((void*)0);
  FUNC_9(VAR_12, VAR_13, &VAR_14);
  char *VAR_15 = ((void*)0);
  if (VAR_14) {
    plist_t VAR_16 = FUNC_7(VAR_14, "MessageType");
    if (FUNC_10(VAR_16) == VAR_2) {
      FUNC_11(VAR_16, &VAR_15);
    }
  }

  dl_status VAR_17 = VAR_0;
  if (!VAR_15) {
    VAR_17 = VAR_0;
  } else if (!FUNC_13(VAR_15, "Result")) {
    plist_t VAR_18 = FUNC_7(VAR_14, "Number");
    if (VAR_18) {
      uint64_t VAR_19 = 0;
      FUNC_12(VAR_18, &VAR_19);

      VAR_17 = (VAR_19 ? VAR_0 : VAR_1);
    }
  } else if (!FUNC_13(VAR_15, "Attached")) {
    plist_t VAR_20 = FUNC_7(VAR_14, "Properties");
    if (VAR_20) {
      uint64_t VAR_21 = 0;
      plist_t VAR_22 = FUNC_7(VAR_20, "DeviceID");
      FUNC_12(VAR_22, &VAR_21);

      uint64_t VAR_23 = 0;
      VAR_22 = FUNC_7(VAR_20, "ProductID");
      FUNC_12(VAR_22, &VAR_23);

      char *VAR_24 = ((void*)0);
      VAR_22 = FUNC_7(VAR_20, "SerialNumber");
      if (VAR_22) {
        FUNC_11(VAR_22, &VAR_24);

        if (VAR_24 && FUNC_14(VAR_24) == 24) {
          char *VAR_25 = FUNC_5(sizeof(char) * 26);

          FUNC_6(VAR_25, VAR_24, 8);
          FUNC_6(VAR_25 + 9, VAR_24 + 8, 17);
          VAR_25[8] = '-';

          FUNC_2(VAR_24);
          VAR_24 = VAR_25;
        }
      }

      uint64_t VAR_26 = 0;
      VAR_22 = FUNC_7(VAR_20, "LocationID");
      FUNC_12(VAR_22, &VAR_26);

      ht_t VAR_27 = VAR_7->device_num_to_device_id;
      FUNC_3(VAR_27, FUNC_0(VAR_21), VAR_24);
      VAR_17 = VAR_4->on_attach(VAR_4, VAR_24, (int)VAR_21);
    }
  } else if (FUNC_13(VAR_15, "Detached") == 0) {
    plist_t VAR_28 = FUNC_7(VAR_14, "DeviceID");
    if (VAR_28) {
      uint64_t VAR_29 = 0;
      FUNC_12(VAR_28, &VAR_29);

      ht_t VAR_30 = VAR_7->device_num_to_device_id;
      char *VAR_31 = (char *)FUNC_4(VAR_30, FUNC_0(VAR_29));
      if (VAR_31) {
        VAR_17 = VAR_4->on_detach(VAR_4, VAR_31, (int)VAR_29);
        FUNC_2(VAR_31);
      }
    }
  }
  FUNC_2(VAR_15);
  FUNC_8(VAR_14);
  return VAR_17;
}
