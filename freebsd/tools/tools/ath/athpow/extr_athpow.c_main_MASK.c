
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
typedef int u_int ;
struct ath_diag {char* ad_name; int ad_out_size; void* ad_out_data; int ad_id; } ;
typedef int revs ;
typedef int ratesArray ;
typedef int pcdacTable ;
typedef void* caddr_t ;
typedef int HAL_REVS ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int,char*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int,char**,char*) ;
 scalar_t__ FUNC_6 (int,int ,struct ath_diag*) ;
 char* VAR_9 ;
 int FUNC_7 (int ,int *,int) ;
 int FUNC_8 (int ,int *,int) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ,int ,int ) ;
 int VAR_10 ;
 int FUNC_12 (char*,char const*,int) ;
 int FUNC_13 (char*) ;

int
FUNC_14(int VAR_11, char *VAR_12[])
{
 int VAR_13, VAR_14, VAR_15 = 0, VAR_16;
 struct ath_diag VAR_17;
 const char *VAR_18;
 HAL_REVS VAR_19;
 u_int16_t VAR_20[FUNC_2(VAR_5,VAR_6)];
 u_int16_t VAR_21[37];
 u_int VAR_22, VAR_23;

 VAR_13 = FUNC_11(VAR_0, VAR_8, 0);
 if (VAR_13 < 0)
  FUNC_3(1, "socket");
 VAR_18 = FUNC_4("ATH");
 if (!VAR_18)
  VAR_18 = VAR_1;
 while ((VAR_16 = FUNC_5(VAR_11, VAR_12, "i:v")) != -1)
  switch (VAR_16) {
  case 'i':
   VAR_18 = VAR_9;
   break;
  case 'v':
   VAR_15++;
   break;
  default:
   FUNC_13(VAR_12[0]);
  }
 FUNC_12(VAR_17.ad_name, VAR_18, sizeof (VAR_17.ad_name));

 VAR_17.ad_id = VAR_3;
 VAR_17.ad_out_data = (caddr_t) &VAR_19;
 VAR_17.ad_out_size = sizeof(VAR_19);
 if (FUNC_6(VAR_13, VAR_7, &VAR_17) < 0)
  FUNC_3(1, VAR_17.ad_name);

 if (VAR_15)
  FUNC_9(VAR_10, &VAR_19);

 VAR_17.ad_id = VAR_4;
 VAR_17.ad_out_data = (caddr_t) VAR_21;
 VAR_17.ad_out_size = sizeof(VAR_21);
 if (FUNC_6(VAR_13, VAR_7, &VAR_17) < 0)
  FUNC_3(1, VAR_17.ad_name);
 VAR_22 = sizeof(VAR_21) / sizeof(u_int16_t);

 VAR_17.ad_id = VAR_2;
 VAR_17.ad_out_data = (caddr_t) VAR_20;
 VAR_17.ad_out_size = sizeof(VAR_20);
 if (FUNC_6(VAR_13, VAR_7, &VAR_17) < 0)
  FUNC_3(1, VAR_17.ad_name);
 if (FUNC_0(&VAR_19) || FUNC_1(&VAR_19))
  VAR_23 = VAR_6;
 else
  VAR_23 = VAR_5;

 FUNC_10("PCDAC table:\n");
 FUNC_7(VAR_10, VAR_20, VAR_23);

 FUNC_10("Power per rate table:\n");
 FUNC_8(VAR_10, VAR_21, VAR_22);

 return 0;
}
