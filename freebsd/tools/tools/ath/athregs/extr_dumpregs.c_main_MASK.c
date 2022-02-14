
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_int ;
struct ath_driver_req {int dummy; } ;
struct ath_diag {int ad_id; int ad_out_size; int ad_in_size; int * ad_out_data; int ad_name; scalar_t__ ad_in_data; } ;
typedef void* caddr_t ;
struct TYPE_3__ {int ah_phyRev; int ah_macRev; int ah_macVersion; int ah_devid; } ;
struct TYPE_4__ {int show_addrs; int show_names; int * regdata; TYPE_1__ revs; } ;
typedef int HAL_REGRANGE ;


 char* VAR_0 ;
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
 int FUNC_0 (struct ath_driver_req*) ;
 scalar_t__ FUNC_1 (struct ath_driver_req*,int ,struct ath_diag*) ;
 int FUNC_2 (struct ath_driver_req*) ;
 scalar_t__ FUNC_3 (struct ath_driver_req*,char const*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int *,int) ;
 scalar_t__ FUNC_12 (struct ath_diag*,int) ;
 int FUNC_13 (int,char*,int ) ;
 int FUNC_14 (int,char*,int ,int ,int ,int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int ,char*,...) ;
 char* FUNC_17 (char*) ;
 int FUNC_18 (int,char**,char*) ;
 scalar_t__ FUNC_19 (int) ;
 char* VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_20 (char) ;
 TYPE_2__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_21 (int ,char const*,int) ;
 int FUNC_22 () ;

int
FUNC_23(int VAR_19, char *VAR_20[])
{
 struct ath_diag VAR_21;
 const char *VAR_22;
 u_int32_t *VAR_23;
 u_int32_t *VAR_24, *VAR_25;
 int VAR_26, VAR_27, VAR_28;
 struct ath_driver_req VAR_29;

 FUNC_2(&VAR_29);

 VAR_22 = FUNC_17("ATH");
 if (!VAR_22)
  VAR_22 = VAR_0;

 VAR_26 = 0;
 VAR_16.show_addrs = 0;
 VAR_16.show_names = 1;
 while ((VAR_27 = FUNC_18(VAR_19, VAR_20, "i:aAbdkmNqxz")) != -1)
  switch (VAR_27) {
  case 'a':
   VAR_26 |= VAR_3;
   break;
  case 'A':
   VAR_16.show_addrs = 1;
   break;
  case 'b':
   VAR_26 |= VAR_4;
   break;
  case 'd':
   VAR_26 |= VAR_6;
   break;
  case 'k':
   VAR_26 |= VAR_8;
   break;
  case 'i':
   VAR_22 = VAR_14;
   break;
  case 'm':
   VAR_26 |= VAR_5;
   break;
  case 'N':
   VAR_16.show_names = 0;
   break;
  case 'q':
   VAR_26 |= VAR_9;
   break;
  case 'x':
   VAR_26 |= VAR_10;
   break;
  case 'z':
   VAR_26 |= VAR_7;
   break;
  default:
   FUNC_22();

  }


 if (FUNC_3(&VAR_29, VAR_22) < 0) {
  FUNC_15(127);
 }





 FUNC_21(VAR_21.ad_name, VAR_22, sizeof (VAR_21.ad_name));

 VAR_19 -= VAR_15;
 VAR_20 += VAR_15;
 if (VAR_26 == 0)
  VAR_26 = VAR_5;

 VAR_21.ad_id = VAR_12;
 VAR_21.ad_out_data = (caddr_t) &VAR_16.revs;
 VAR_21.ad_out_size = sizeof(VAR_16.revs);

 if (FUNC_1(&VAR_29, VAR_13, &VAR_21) < 0)
  FUNC_13(1, "%s", VAR_21.ad_name);

 if (FUNC_12(&VAR_21, VAR_26) == 0)
  FUNC_14(-1, "no registers are known for this part "
      "(devid 0x%x mac %d.%d phy %d)", VAR_16.revs.ah_devid,
      VAR_16.revs.ah_macVersion, VAR_16.revs.ah_macRev,
      VAR_16.revs.ah_phyRev);

 VAR_21.ad_out_size = FUNC_11((HAL_REGRANGE *) VAR_21.ad_in_data,
  VAR_21.ad_in_size / sizeof(HAL_REGRANGE));
 VAR_21.ad_out_data = (caddr_t) FUNC_19(VAR_21.ad_out_size);
 if (VAR_21.ad_out_data == ((void*)0)) {
  FUNC_16(VAR_17, "Cannot malloc output buffer, size %u\n",
   VAR_21.ad_out_size);
  FUNC_15(-1);
 }
 VAR_21.ad_id = VAR_11 | VAR_2 | VAR_1;

 if (FUNC_1(&VAR_29, VAR_13, &VAR_21) < 0)
  FUNC_13(1, "%s", VAR_21.ad_name);





 VAR_24 = (u_int32_t *)VAR_21.ad_out_data;
 VAR_25 = (u_int32_t *)(VAR_21.ad_out_data + VAR_21.ad_out_size);
 while (VAR_24 < VAR_25) {
  u_int VAR_30 = VAR_24[0];
  u_int VAR_31 = VAR_24[1];
  VAR_24++;
  VAR_24++;

  VAR_30 >>= 2; VAR_31 >>= 2;
  do {
   if (VAR_24 >= VAR_25) {
    FUNC_16(VAR_17, "Warning, botched return data;"
     "register at offset 0x%x not present\n",
     VAR_30 << 2);
    break;
   }
   VAR_16.regdata[VAR_30++] = *VAR_24++;
  } while (VAR_30 <= VAR_31);
 }

 if (VAR_26 & VAR_5)
  FUNC_10(VAR_18, VAR_5);
 if ((VAR_26 & VAR_7) && FUNC_4(VAR_7)) {
  if (VAR_26 & VAR_5)
   FUNC_20('\n');
  if (VAR_16.show_addrs)
   FUNC_10(VAR_18, VAR_7);
  else
   FUNC_7(VAR_18, VAR_26);
 }
 if ((VAR_26 & VAR_9) && FUNC_4(VAR_9)) {
  if (VAR_26 & (VAR_5|VAR_7))
   FUNC_20('\n');
  if (VAR_16.show_addrs)
   FUNC_10(VAR_18, VAR_9);
  else
   FUNC_9(VAR_18, VAR_26);
 }
 if ((VAR_26 & VAR_6) && FUNC_4(VAR_6)) {
  if (VAR_26 & (VAR_5|VAR_7|VAR_9))
   FUNC_20('\n');
  if (VAR_16.show_addrs)
   FUNC_10(VAR_18, VAR_6);
  else
   FUNC_6(VAR_18, VAR_26);
 }
 if (VAR_26 & VAR_8) {
  if (VAR_16.show_addrs) {
   if (VAR_26 & (VAR_5|VAR_7|VAR_9|VAR_6))
    FUNC_20('\n');
   FUNC_10(VAR_18, VAR_8);
  } else
   FUNC_8(VAR_18, 128);
 }
 if (VAR_26 & VAR_4) {
  if (VAR_26 &~ VAR_4)
   FUNC_16(VAR_18, "\n");
  FUNC_5(VAR_18, VAR_26);
 }
 FUNC_0(&VAR_29);
 return 0;
}
