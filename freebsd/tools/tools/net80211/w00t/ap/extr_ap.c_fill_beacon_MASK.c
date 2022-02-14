
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {int chan; int ssid; } ;
struct ieee80211_frame {int dummy; } ;


 char VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct params *VAR_1, struct ieee80211_frame *VAR_2)
{
 int VAR_3;
 char *VAR_4;

 VAR_4 = (char*) (VAR_2+1);
 VAR_4 += 8;
 VAR_4 += 2;
 *VAR_4 |= VAR_0;
 VAR_4 += 2;


 VAR_3 = FUNC_1(VAR_1->ssid);
 *VAR_4++ = 0;
 *VAR_4++ = VAR_3;
 FUNC_0(VAR_4, VAR_1->ssid, VAR_3);
 VAR_4 += VAR_3;


        *VAR_4++ = 1;
        *VAR_4++ = 4;
        *VAR_4++ = 2 | 0x80;
        *VAR_4++ = 4 | 0x80;
        *VAR_4++ = 11;
        *VAR_4++ = 22;


 *VAR_4++ = 3;
 *VAR_4++ = 1;
 *VAR_4++ = VAR_1->chan;

 return VAR_4 - ((char*) VAR_2);
}
