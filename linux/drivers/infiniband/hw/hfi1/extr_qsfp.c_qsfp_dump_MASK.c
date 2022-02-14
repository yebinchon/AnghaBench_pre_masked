
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int* cache; scalar_t__ cache_valid; } ;
struct hfi1_pportdata {TYPE_1__ qsfp_info; } ;
typedef int lenstr ;


 int FUNC_0 (int*) ;
 size_t VAR_0 ;
 int FUNC_1 (int*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_3 (int*) ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t FUNC_4 (int) ;
 int * VAR_19 ;
 int FUNC_5 (int*,int*,int) ;
 int * VAR_20 ;
 scalar_t__ FUNC_6 (char*,int,char*,...) ;
 int FUNC_7 (char*,int,char*,int) ;

int FUNC_8(struct hfi1_pportdata *VAR_21, char *VAR_22, int VAR_23)
{
 u8 *VAR_24 = &VAR_21->qsfp_info.cache[0];
 u8 VAR_25[VAR_4];
 char VAR_26[6];
 int VAR_27;
 int VAR_28 = 0;
 u8 *VAR_29 = &VAR_24[VAR_0];
 u8 *VAR_30 = &VAR_24[VAR_18];
 u8 VAR_31 = 0;

 VAR_27 = 0;
 VAR_26[0] = ' ';
 VAR_26[1] = '\0';

 if (VAR_21->qsfp_info.cache_valid) {
  if (FUNC_2(VAR_24[VAR_9]))
   FUNC_7(VAR_26, sizeof(VAR_26), "%dM ",
     VAR_24[VAR_7]);

  VAR_31 = VAR_24[VAR_8];
  VAR_27 += FUNC_6(VAR_22 + VAR_27, VAR_23 - VAR_27, "PWR:%.3sW\n",
    VAR_20[FUNC_4(VAR_31)]);

  VAR_27 += FUNC_6(VAR_22 + VAR_27, VAR_23 - VAR_27, "TECH:%s%s\n",
    VAR_26,
   VAR_19[(VAR_24[VAR_9]) >> 4]);

  VAR_27 += FUNC_6(VAR_22 + VAR_27, VAR_23 - VAR_27, "Vendor:%.*s\n",
       VAR_16, &VAR_24[VAR_17]);

  VAR_27 += FUNC_6(VAR_22 + VAR_27, VAR_23 - VAR_27, "OUI:%06X\n",
       FUNC_3(VAR_30));

  VAR_27 += FUNC_6(VAR_22 + VAR_27, VAR_23 - VAR_27, "Part#:%.*s\n",
       VAR_10, &VAR_24[VAR_11]);

  VAR_27 += FUNC_6(VAR_22 + VAR_27, VAR_23 - VAR_27, "Rev:%.*s\n",
       VAR_12, &VAR_24[VAR_13]);

  if (FUNC_2(VAR_24[VAR_9]))
   VAR_27 += FUNC_6(VAR_22 + VAR_27, VAR_23 - VAR_27,
    "Atten:%d, %d\n",
    FUNC_1(VAR_29),
    FUNC_0(VAR_29));

  VAR_27 += FUNC_6(VAR_22 + VAR_27, VAR_23 - VAR_27, "Serial:%.*s\n",
       VAR_14, &VAR_24[VAR_15]);

  VAR_27 += FUNC_6(VAR_22 + VAR_27, VAR_23 - VAR_27, "Date:%.*s\n",
       VAR_1, &VAR_24[VAR_2]);

  VAR_27 += FUNC_6(VAR_22 + VAR_27, VAR_23 - VAR_27, "Lot:%.*s\n",
       VAR_5, &VAR_24[VAR_6]);

  while (VAR_28 < VAR_3) {
   int VAR_32;

   FUNC_5(VAR_25, &VAR_24[VAR_28], VAR_4);
   for (VAR_32 = 0; VAR_32 < VAR_4; ++VAR_32) {
    VAR_27 += FUNC_6(VAR_22 + VAR_27, VAR_23 - VAR_27,
     " %02X", VAR_25[VAR_32]);
   }
   VAR_27 += FUNC_6(VAR_22 + VAR_27, VAR_23 - VAR_27, "\n");
   VAR_28 += VAR_4;
  }
 }
 return VAR_27;
}
