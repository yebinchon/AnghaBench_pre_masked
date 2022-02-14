
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spectralhandler {int dummy; } ;


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
 int FUNC_0 (char const*) ;
 int FUNC_1 (struct spectralhandler*,int ,int) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static int
FUNC_3(struct spectralhandler *VAR_20, const char *VAR_21,
    const char *VAR_22)
{
 int VAR_23;

 VAR_23 = FUNC_0(VAR_22);

 if (FUNC_2(VAR_21, "ss_short_report") == 0) {
  FUNC_1(VAR_20, VAR_18, VAR_23);
 } else if (FUNC_2(VAR_21, "ss_fft_period") == 0) {
  FUNC_1(VAR_20, VAR_15, VAR_23);
 } else if (FUNC_2(VAR_21, "ss_period") == 0) {
  FUNC_1(VAR_20, VAR_17, VAR_23);
 } else if (FUNC_2(VAR_21, "ss_count") == 0) {
  FUNC_1(VAR_20, VAR_16, VAR_23);
 } else if (FUNC_2(VAR_21, "ss_spectral_pri") == 0) {
  FUNC_1(VAR_20, VAR_19, VAR_23);
 } else {
  return (0);
 }
 return 1;
}
