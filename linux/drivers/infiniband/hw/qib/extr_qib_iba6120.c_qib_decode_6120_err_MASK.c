
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct qib_devdata {int dummy; } ;


 int FUNC_0 (int ) ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_1 (char*,char*,size_t) ;

__attribute__((used)) static int FUNC_2(struct qib_devdata *VAR_29, char *VAR_30, size_t VAR_31,
          u64 VAR_32)
{
 int VAR_33 = 1;

 *VAR_30 = '\0';
 if (VAR_32 & VAR_3) {
  if (!(VAR_32 & ~VAR_3))
   VAR_33 = 0;
  if ((VAR_32 & FUNC_0(VAR_14)) &&
      !(VAR_32&(FUNC_0(VAR_20)|FUNC_0(VAR_6))))
   FUNC_1(VAR_30, "CRC ", VAR_31);
  if (!VAR_33)
   goto done;
 }
 if (VAR_32 & FUNC_0(VAR_11))
  FUNC_1(VAR_30, "rhdrlen ", VAR_31);
 if (VAR_32 & FUNC_0(VAR_4))
  FUNC_1(VAR_30, "rbadtid ", VAR_31);
 if (VAR_32 & FUNC_0(VAR_5))
  FUNC_1(VAR_30, "rbadversion ", VAR_31);
 if (VAR_32 & FUNC_0(VAR_9))
  FUNC_1(VAR_30, "rhdr ", VAR_31);
 if (VAR_32 & FUNC_0(VAR_15))
  FUNC_1(VAR_30, "rlongpktlen ", VAR_31);
 if (VAR_32 & FUNC_0(VAR_16))
  FUNC_1(VAR_30, "rmaxpktlen ", VAR_31);
 if (VAR_32 & FUNC_0(VAR_17))
  FUNC_1(VAR_30, "rminpktlen ", VAR_31);
 if (VAR_32 & FUNC_0(VAR_24))
  FUNC_1(VAR_30, "sminpktlen ", VAR_31);
 if (VAR_32 & FUNC_0(VAR_8))
  FUNC_1(VAR_30, "rformaterr ", VAR_31);
 if (VAR_32 & FUNC_0(VAR_19))
  FUNC_1(VAR_30, "runsupvl ", VAR_31);
 if (VAR_32 & FUNC_0(VAR_18))
  FUNC_1(VAR_30, "runexpchar ", VAR_31);
 if (VAR_32 & FUNC_0(VAR_12))
  FUNC_1(VAR_30, "ribflow ", VAR_31);
 if (VAR_32 & FUNC_0(VAR_26))
  FUNC_1(VAR_30, "sunderrun ", VAR_31);
 if (VAR_32 & FUNC_0(VAR_25))
  FUNC_1(VAR_30, "spioarmlaunch ", VAR_31);
 if (VAR_32 & FUNC_0(VAR_27))
  FUNC_1(VAR_30, "sunexperrpktnum ", VAR_31);
 if (VAR_32 & FUNC_0(VAR_22))
  FUNC_1(VAR_30, "sdroppedsmppkt ", VAR_31);
 if (VAR_32 & FUNC_0(VAR_23))
  FUNC_1(VAR_30, "smaxpktlen ", VAR_31);
 if (VAR_32 & FUNC_0(VAR_28))
  FUNC_1(VAR_30, "sunsupVL ", VAR_31);
 if (VAR_32 & FUNC_0(VAR_2))
  FUNC_1(VAR_30, "invalidaddr ", VAR_31);
 if (VAR_32 & FUNC_0(VAR_7))
  FUNC_1(VAR_30, "rcvegrfull ", VAR_31);
 if (VAR_32 & FUNC_0(VAR_10))
  FUNC_1(VAR_30, "rcvhdrfull ", VAR_31);
 if (VAR_32 & FUNC_0(VAR_1))
  FUNC_1(VAR_30, "ibcstatuschg ", VAR_31);
 if (VAR_32 & FUNC_0(VAR_13))
  FUNC_1(VAR_30, "riblostlink ", VAR_31);
 if (VAR_32 & FUNC_0(VAR_0))
  FUNC_1(VAR_30, "hardware ", VAR_31);
 if (VAR_32 & FUNC_0(VAR_21))
  FUNC_1(VAR_30, "reset ", VAR_31);
done:
 return VAR_33;
}
