
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xucred {int dummy; } ;
struct TYPE_2__ {int gt_net; } ;
struct grouplist {scalar_t__ gr_type; TYPE_1__ gr_ptr; } ;
struct exportlist {int ex_indexfile; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (char*,int *,int) ;
 int FUNC_2 (char**,char**) ;
 int VAR_15 ;
 int FUNC_3 (char*,struct xucred*) ;
 scalar_t__ FUNC_4 (char*,struct exportlist*) ;
 int VAR_16 ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_9(char **VAR_17, char **VAR_18, struct exportlist *VAR_19, struct grouplist *VAR_20,
 int *VAR_21, int *VAR_22, struct xucred *VAR_23)
{
 char *VAR_24, *VAR_25;
 char *VAR_26, *VAR_27, *VAR_28, VAR_29, VAR_30;
 int VAR_31, VAR_32;

 VAR_30 = '\0';
 VAR_28 = *VAR_17;
 VAR_28++;
 VAR_26 = *VAR_18;
 VAR_29 = *VAR_26;
 *VAR_26 = '\0';
 while (VAR_28 && *VAR_28) {
  VAR_31 = 1;
  VAR_32 = -2;
  if ((VAR_25 = FUNC_5(VAR_28, ','))) {
   *VAR_25++ = '\0';
   if ((VAR_24 = FUNC_5(VAR_28, '=')))
    *VAR_24++ = '\0';
  } else {
   if ((VAR_24 = FUNC_5(VAR_28, '=')))
    *VAR_24++ = '\0';
   else {
    *VAR_26 = VAR_29;
    FUNC_2(&VAR_26, &VAR_27);
    **VAR_18 = '\0';
    if (VAR_27 > VAR_26 && *VAR_26 != '-') {
     VAR_24 = VAR_26;
     VAR_30 = *VAR_27;
     *VAR_27 = '\0';
     VAR_32 = 0;
    }
   }
  }
  if (!FUNC_6(VAR_28, "ro") || !FUNC_6(VAR_28, "o")) {
   *VAR_22 |= VAR_5;
  } else if (VAR_24 && (!FUNC_6(VAR_28, "maproot") ||
      !(VAR_31 = FUNC_6(VAR_28, "mapall")) ||
      !FUNC_6(VAR_28, "root") || !FUNC_6(VAR_28, "r"))) {
   VAR_32++;
   FUNC_3(VAR_24, VAR_23);
   if (VAR_31 == 0) {
    *VAR_22 |= VAR_3;
    VAR_15 |= VAR_7;
   } else
    VAR_15 |= VAR_8;
  } else if (VAR_24 && (!FUNC_6(VAR_28, "mask") ||
      !FUNC_6(VAR_28, "m"))) {
   if (FUNC_1(VAR_24, &VAR_20->gr_ptr.gt_net, 1)) {
    FUNC_8(VAR_2, "bad mask: %s", VAR_24);
    return (1);
   }
   VAR_32++;
   VAR_15 |= VAR_9;
  } else if (VAR_24 && (!FUNC_6(VAR_28, "network") ||
   !FUNC_6(VAR_28, "n"))) {
   if (FUNC_5(VAR_24, '/') != ((void*)0)) {
    if (VAR_14)
     FUNC_0(VAR_16, "setting OP_MASKLEN\n");
    VAR_15 |= VAR_10;
   }
   if (VAR_20->gr_type != VAR_1) {
    FUNC_8(VAR_2, "network/host conflict");
    return (1);
   } else if (FUNC_1(VAR_24, &VAR_20->gr_ptr.gt_net, 0)) {
    FUNC_8(VAR_2, "bad net: %s", VAR_24);
    return (1);
   }
   VAR_20->gr_type = VAR_0;
   *VAR_21 = 1;
   VAR_32++;
   VAR_15 |= VAR_11;
  } else if (!FUNC_6(VAR_28, "alldirs")) {
   VAR_15 |= VAR_6;
  } else if (!FUNC_6(VAR_28, "public")) {
   *VAR_22 |= VAR_4;
  } else if (!FUNC_6(VAR_28, "webnfs")) {
   *VAR_22 |= (VAR_4|VAR_5|VAR_3);
   VAR_15 |= VAR_7;
  } else if (VAR_24 && !FUNC_6(VAR_28, "index")) {
   VAR_19->ex_indexfile = FUNC_7(VAR_24);
  } else if (!FUNC_6(VAR_28, "quiet")) {
   VAR_15 |= VAR_12;
  } else if (VAR_24 && !FUNC_6(VAR_28, "sec")) {
   if (FUNC_4(VAR_24, VAR_19))
    return (1);
   VAR_15 |= VAR_13;
   VAR_32++;
  } else {
   FUNC_8(VAR_2, "bad opt %s", VAR_28);
   return (1);
  }
  if (VAR_32 >= 0) {
   *VAR_27 = VAR_30;
   **VAR_18 = VAR_29;
   if (VAR_32 > 0) {
    *VAR_17 = VAR_26;
    *VAR_18 = VAR_27;
   }
   return (0);
  }
  VAR_28 = VAR_25;
 }
 **VAR_18 = VAR_29;
 return (0);
}
