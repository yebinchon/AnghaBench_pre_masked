
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiimote_data {TYPE_1__* hdev; } ;
typedef size_t __u8 ;
typedef scalar_t__ __u16 ;
struct TYPE_2__ {scalar_t__ vendor; scalar_t__ product; char* name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (TYPE_1__*,char*,char const*,...) ;
 int FUNC_1 (char const*,char*) ;
 int * VAR_10 ;
 int FUNC_2 (struct wiimote_data*,size_t) ;

__attribute__((used)) static void FUNC_3(struct wiimote_data *VAR_11,
      __u8 VAR_12)
{
 __u8 VAR_13 = VAR_6;
 __u16 VAR_14, VAR_15;
 const char *VAR_16;

 VAR_14 = VAR_11->hdev->vendor;
 VAR_15 = VAR_11->hdev->product;
 VAR_16 = VAR_11->hdev->name;

 if (VAR_12 == VAR_8) {
  VAR_13 = VAR_3;
  goto done;
 } else if (VAR_12 == VAR_9) {
  VAR_13 = VAR_7;
  goto done;
 }

 if (!FUNC_1(VAR_16, "Nintendo RVL-CNT-01")) {
  VAR_13 = VAR_4;
  goto done;
 } else if (!FUNC_1(VAR_16, "Nintendo RVL-CNT-01-TR")) {
  VAR_13 = VAR_5;
  goto done;
 } else if (!FUNC_1(VAR_16, "Nintendo RVL-WBC-01")) {
  VAR_13 = VAR_3;
  goto done;
 } else if (!FUNC_1(VAR_16, "Nintendo RVL-CNT-01-UC")) {
  VAR_13 = VAR_7;
  goto done;
 }

 if (VAR_14 == VAR_2) {
  if (VAR_15 == VAR_0) {
   VAR_13 = VAR_4;
   goto done;
  } else if (VAR_15 == VAR_1) {
   VAR_13 = VAR_5;
   goto done;
  }
 }

done:
 if (VAR_13 == VAR_6)
  FUNC_0(VAR_11->hdev, "cannot detect device; NAME: %s VID: %04x PID: %04x EXT: %04x\n",
   VAR_16, VAR_14, VAR_15, VAR_12);
 else
  FUNC_0(VAR_11->hdev, "detected device: %s\n",
    VAR_10[VAR_13]);

 FUNC_2(VAR_11, VAR_13);
}
