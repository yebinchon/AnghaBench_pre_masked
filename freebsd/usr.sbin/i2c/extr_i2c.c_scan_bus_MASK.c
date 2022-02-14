
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct skip_range {int start; int end; int member_1; int member_0; } ;
struct iiccmd {int slave; int last; int nmsgs; struct iic_msg* msgs; scalar_t__ count; } ;
struct iic_rdwr_data {int slave; int last; int nmsgs; struct iic_msg* msgs; scalar_t__ count; } ;
struct iic_msg {int len; int slave; int flags; int * buf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int,int ,...) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,...) ;
 struct skip_range FUNC_7 (char*) ;
 int FUNC_8 (char*,int*,int) ;
 int VAR_11 ;
 char* FUNC_9 (scalar_t__) ;
 int FUNC_10 (char*) ;
 int * FUNC_11 (char*,char*) ;

__attribute__((used)) static int
FUNC_12(struct iiccmd VAR_12, char *VAR_13, int VAR_14, char *VAR_15)
{
 struct iic_msg VAR_16;
 struct iic_rdwr_data VAR_17;
 struct skip_range VAR_18 = { 0, 0 };
 int *VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 int VAR_25 = 0, VAR_26 = 0, VAR_27 = 1, VAR_28 = 0, VAR_29 = 0;
 uint8_t VAR_30;

 VAR_20 = FUNC_5(VAR_13, VAR_9);
 if (VAR_20 == -1) {
  FUNC_1(VAR_11, "Error opening I2C controller (%s) for "
      "scanning: %s\n", VAR_13, FUNC_9(VAR_10));
  return (VAR_2);
 }

 if (VAR_14) {
  VAR_25 = FUNC_10(VAR_15);
  if (FUNC_11(VAR_15, "..") != ((void*)0)) {
   VAR_18 = FUNC_7(VAR_15);
   VAR_27 = 0;
  } else {
   VAR_19 = (int *)FUNC_4((VAR_25 / 2 + 1) * sizeof(int));
   if (VAR_19 == ((void*)0)) {
    FUNC_1(VAR_11, "Error allocating tokens "
        "buffer\n");
    VAR_21 = -1;
    goto out;
   }
   VAR_23 = FUNC_8(VAR_15, VAR_19,
       VAR_25 / 2 + 1);
  }

  if (!VAR_27 && (VAR_18.start > VAR_18.end)) {
   FUNC_1(VAR_11, "Skip address out of range\n");
   VAR_21 = -1;
   goto out;
  }
 }

 FUNC_6("Scanning I2C devices on %s: ", VAR_13);

start_over:
 if (VAR_29) {
  FUNC_1(VAR_11,
      "Hardware may not support START/STOP scanning; "
      "trying less-reliable read method.\n");
 }

 for (VAR_22 = 1; VAR_22 < 127; VAR_22++) {

  if (VAR_14 && ( VAR_18.start < VAR_18.end)) {
   if (VAR_22 >= VAR_18.start && VAR_22 <= VAR_18.end)
    continue;

  } else if (VAR_14 && VAR_27)
   for (VAR_24 = 0; VAR_24 < VAR_23; VAR_24++) {
    if (VAR_19[VAR_24] == VAR_22) {
     VAR_26 = 1;
     break;
    }
   }

  if (VAR_26) {
   VAR_26 = 0;
   continue;
  }

  VAR_12.slave = VAR_22 << 1;
  VAR_12.last = 1;
  VAR_12.count = 0;
  VAR_21 = FUNC_3(VAR_20, VAR_5, &VAR_12);
  if (VAR_21) {
   FUNC_1(VAR_11, "Controller reset failed\n");
   goto out;
  }
  if (VAR_29) {
   VAR_16.buf = &VAR_30;
   VAR_16.len = 1;
   VAR_16.flags = VAR_8;
   VAR_16.slave = VAR_22 << 1;
   VAR_17.msgs = &VAR_16;
   VAR_17.nmsgs = 1;
   VAR_21 = FUNC_3(VAR_20, VAR_4, &VAR_17);
  } else {
   VAR_12.slave = VAR_22 << 1;
   VAR_12.last = 1;
   VAR_21 = FUNC_3(VAR_20, VAR_6, &VAR_12);
   if (VAR_10 == VAR_0 || VAR_10 == VAR_1) {

    VAR_29 = 1;
    goto start_over;
   }
   FUNC_3(VAR_20, VAR_7);
  }
  if (VAR_21 == 0) {
   ++VAR_28;
   FUNC_6("%02x ", VAR_22);
  }
 }





 if (VAR_28 == 0) {
  if (!VAR_29) {
   VAR_29 = 1;
   goto start_over;
  }
  FUNC_6("<none found>");
 }
 FUNC_6("\n");

 VAR_21 = FUNC_3(VAR_20, VAR_5, &VAR_12);
out:
 FUNC_0(VAR_20);
 if (VAR_14 && VAR_27)
  FUNC_2(VAR_19);

 if (VAR_21) {
  FUNC_1(VAR_11, "Error scanning I2C controller (%s): %s\n",
      VAR_13, FUNC_9(VAR_10));
  return (VAR_2);
 } else
  return (VAR_3);
}
