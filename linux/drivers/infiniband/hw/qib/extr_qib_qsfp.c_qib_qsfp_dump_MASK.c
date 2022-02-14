
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qib_qsfp_cache {int tech; int len; int lot; int date; int serial; int atten; int rev; int partnum; int oui; int vendor; int pwr; } ;
struct qib_pportdata {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int * VAR_9 ;
 int FUNC_5 (struct qib_pportdata*,struct qib_qsfp_cache*) ;
 int FUNC_6 (struct qib_pportdata*,int,int *,int) ;
 scalar_t__ FUNC_7 (char*,int,char*,...) ;
 int FUNC_8 (char*,char*,int) ;

int FUNC_9(struct qib_pportdata *VAR_10, char *VAR_11, int VAR_12)
{
 struct qib_qsfp_cache VAR_13;
 u8 VAR_14[VAR_2];
 char VAR_15[6];
 int VAR_16, VAR_17;
 int VAR_18 = 0;

 VAR_16 = 0;
 VAR_17 = FUNC_5(VAR_10, &VAR_13);
 if (VAR_17 < 0)
  goto bail;

 VAR_15[0] = ' ';
 VAR_15[1] = '\0';
 if (FUNC_2(VAR_13.tech))
  FUNC_8(VAR_15, "%dM ", VAR_13.len);

 VAR_16 += FUNC_7(VAR_11 + VAR_16, VAR_12 - VAR_16, "PWR:%.3sW\n", VAR_8 +
      (FUNC_4(VAR_13.pwr) * 4));

 VAR_16 += FUNC_7(VAR_11 + VAR_16, VAR_12 - VAR_16, "TECH:%s%s\n", VAR_15,
      VAR_9[VAR_13.tech >> 4]);

 VAR_16 += FUNC_7(VAR_11 + VAR_16, VAR_12 - VAR_16, "Vendor:%.*s\n",
      VAR_7, VAR_13.vendor);

 VAR_16 += FUNC_7(VAR_11 + VAR_16, VAR_12 - VAR_16, "OUI:%06X\n",
      FUNC_3(VAR_13.oui));

 VAR_16 += FUNC_7(VAR_11 + VAR_16, VAR_12 - VAR_16, "Part#:%.*s\n",
      VAR_4, VAR_13.partnum);
 VAR_16 += FUNC_7(VAR_11 + VAR_16, VAR_12 - VAR_16, "Rev:%.*s\n",
      VAR_5, VAR_13.rev);
 if (FUNC_2(VAR_13.tech))
  VAR_16 += FUNC_7(VAR_11 + VAR_16, VAR_12 - VAR_16, "Atten:%d, %d\n",
       FUNC_1(VAR_13.atten),
       FUNC_0(VAR_13.atten));
 VAR_16 += FUNC_7(VAR_11 + VAR_16, VAR_12 - VAR_16, "Serial:%.*s\n",
      VAR_6, VAR_13.serial);
 VAR_16 += FUNC_7(VAR_11 + VAR_16, VAR_12 - VAR_16, "Date:%.*s\n",
      VAR_0, VAR_13.date);
 VAR_16 += FUNC_7(VAR_11 + VAR_16, VAR_12 - VAR_16, "Lot:%.*s\n",
      VAR_3, VAR_13.lot);

 while (VAR_18 < VAR_1) {
  int VAR_19;

  VAR_17 = FUNC_6(VAR_10, VAR_18, VAR_14, VAR_2);
  if (VAR_17 < 0)
   goto bail;
  for (VAR_19 = 0; VAR_19 < VAR_17; ++VAR_19) {
   VAR_16 += FUNC_7(VAR_11 + VAR_16, VAR_12-VAR_16, " %02X",
    VAR_14[VAR_19]);
  }
  VAR_16 += FUNC_7(VAR_11 + VAR_16, VAR_12 - VAR_16, "\n");
  VAR_18 += VAR_2;
 }
 VAR_17 = VAR_16;
bail:
 return VAR_17;
}
