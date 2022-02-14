
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_frame {int dummy; } ;


 int FUNC_0 (struct ieee80211_frame*,int) ;

char *FUNC_1(struct ieee80211_frame *VAR_0, int *VAR_1)
{
 static char *VAR_2 = "\xAA\xAA\x03\x00\x00\x00\x08\x06";
 static char *VAR_3 = "\xAA\xAA\x03\x00\x00\x00\x08\x00";
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, *VAR_1);
 *VAR_1 = 8;
 if (VAR_4)
  return VAR_2;
 else
  return VAR_3;
}
