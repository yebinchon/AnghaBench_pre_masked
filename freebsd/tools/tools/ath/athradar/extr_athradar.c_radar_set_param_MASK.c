
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radarhandler {int dummy; } ;


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
 int FUNC_0 (char const*) ;
 int FUNC_1 (struct radarhandler*,int ,int) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static int
FUNC_3(struct radarhandler *VAR_15, const char *VAR_16,
    const char *VAR_17)
{
 int VAR_18;

 VAR_18 = FUNC_0(VAR_17);

 if (FUNC_2(VAR_16, "enabled") == 0) {
  FUNC_1(VAR_15, VAR_1, VAR_18);
 } else if (FUNC_2(VAR_16, "firpwr") == 0) {
  FUNC_1(VAR_15, VAR_3, VAR_18);
 } else if (FUNC_2(VAR_16, "rrssi") == 0) {
  FUNC_1(VAR_15, VAR_13, VAR_18);
 } else if (FUNC_2(VAR_16, "height") == 0) {
  FUNC_1(VAR_15, VAR_4, VAR_18);
 } else if (FUNC_2(VAR_16, "prssi") == 0) {
  FUNC_1(VAR_15, VAR_8, VAR_18);
 } else if (FUNC_2(VAR_16, "inband") == 0) {
  FUNC_1(VAR_15, VAR_5, VAR_18);
 } else if (FUNC_2(VAR_16, "relpwr") == 0) {
  FUNC_1(VAR_15, VAR_9, VAR_18);
 } else if (FUNC_2(VAR_16, "relstep") == 0) {
  FUNC_1(VAR_15, VAR_11, VAR_18);
 } else if (FUNC_2(VAR_16, "maxlen") == 0) {
  FUNC_1(VAR_15, VAR_6, VAR_18);
 } else if (FUNC_2(VAR_16, "usefir128") == 0) {
  FUNC_1(VAR_15, VAR_14, VAR_18);
 } else if (FUNC_2(VAR_16, "blockradar") == 0) {
  FUNC_1(VAR_15, VAR_0, VAR_18);
 } else if (FUNC_2(VAR_16, "enmaxrssi") == 0) {
  FUNC_1(VAR_15, VAR_7, VAR_18);
 } else if (FUNC_2(VAR_16, "extchannel") == 0) {
  FUNC_1(VAR_15, VAR_2, VAR_18);
 } else if (FUNC_2(VAR_16, "enrelpwr") == 0) {
  FUNC_1(VAR_15, VAR_10, VAR_18);
 } else if (FUNC_2(VAR_16, "en_relstep_check") == 0) {
  FUNC_1(VAR_15, VAR_12, VAR_18);
 } else {
  return 0;
 }

 return 1;
}
