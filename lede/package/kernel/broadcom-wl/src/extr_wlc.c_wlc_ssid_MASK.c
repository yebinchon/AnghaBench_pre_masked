
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t SSID_len; int SSID; } ;
typedef TYPE_1__ wlc_ssid_t ;
typedef int wlc_param ;
typedef int ssid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ,size_t) ;
 size_t FUNC_1 (void*) ;
 int FUNC_2 (int ,void*,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ,char*,scalar_t__,TYPE_1__*,int) ;
 int FUNC_4 (int ,char*,scalar_t__,TYPE_1__*,int) ;
 int FUNC_5 (int ,int ,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_6(wlc_param VAR_7, void *VAR_8, void *VAR_9)
{
 int VAR_10 = -1, VAR_11 = -1;
 char *VAR_12 = (char *) VAR_9;
 wlc_ssid_t VAR_13;

 if ((VAR_7 & VAR_1) == VAR_0) {
  VAR_10 = FUNC_3(VAR_5, "ssid", VAR_6, &VAR_13, sizeof(VAR_13));

  if (VAR_10)

   VAR_10 = FUNC_5(VAR_5, VAR_3, &VAR_13, sizeof(VAR_13));

  if (!VAR_10) {
   FUNC_0(VAR_12, VAR_13.SSID, VAR_13.SSID_len);
   VAR_12[VAR_13.SSID_len] = 0;
  }
 } else if ((VAR_7 & VAR_1) == VAR_2) {
  FUNC_2(VAR_13.SSID, VAR_9, 32);
  VAR_13.SSID_len = FUNC_1(VAR_9);

  if (VAR_13.SSID_len > 32)
   VAR_13.SSID_len = 32;

  if (VAR_6 == 0) {

   VAR_11 = FUNC_5(VAR_5, VAR_4, &VAR_13, sizeof(VAR_13));
  }

  VAR_10 = FUNC_4(VAR_5, "ssid", VAR_6, &VAR_13, sizeof(VAR_13));
  VAR_10 = (!VAR_11 ? 0 : VAR_10);
 }

 return VAR_10;
}
