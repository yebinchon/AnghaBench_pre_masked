
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int ssid_len; int ssid; } ;
struct hostapd_neighbor_entry {int nr; TYPE_1__ ssid; int bssid; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,int ,int ) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (char*,int,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct hostapd_neighbor_entry *VAR_2)
{
 const u8 *VAR_3;
 char *VAR_4;
 int VAR_5;

 FUNC_3(&VAR_1, "", VAR_0, FUNC_0(VAR_2->bssid));

 VAR_4 = FUNC_2(&VAR_1, "", VAR_2->ssid.ssid_len + 1);
 FUNC_4(VAR_4, VAR_2->ssid.ssid, VAR_2->ssid.ssid_len);
 VAR_4[VAR_2->ssid.ssid_len] = 0;
 FUNC_1(&VAR_1);

 VAR_5 = FUNC_7(VAR_2->nr);
 VAR_4 = FUNC_2(&VAR_1, "", 2 * VAR_5 + 1);
 FUNC_5(VAR_4, 2 * VAR_5 + 1, FUNC_6(VAR_2->nr), VAR_5);
 FUNC_1(&VAR_1);
}
