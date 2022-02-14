
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct an_req {int an_len; int an_type; } ;
struct an_ltv_ssidlist_new {TYPE_1__* an_entry; } ;
struct an_ltv_ssid_entry {int dummy; } ;
typedef int areq ;
struct TYPE_2__ {int an_ssid; int an_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,struct an_req*) ;
 int FUNC_1 (char const*,struct an_req*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,char*,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(const char *VAR_2, int VAR_3, void *VAR_4)
{
 struct an_ltv_ssidlist_new *VAR_5;
 struct an_req VAR_6;
 int VAR_7;

 VAR_6.an_len = sizeof(VAR_6);
 VAR_6.an_type = VAR_0;

 FUNC_0(VAR_2, &VAR_6);
 VAR_5 = (struct an_ltv_ssidlist_new *)&VAR_6;

 VAR_7 = (VAR_6.an_len - 4) / sizeof(struct an_ltv_ssid_entry);
 if ( VAR_7 > VAR_1 ) {
  FUNC_5("Too many SSIDs only printing %d of %d\n",
      VAR_1, VAR_7);
  VAR_7 = VAR_1;
 }

 if ( VAR_3 > VAR_7 ) {
  FUNC_3(1, "bad modifier %d: there "
      "are only %d SSID settings", VAR_3, VAR_7);
  FUNC_4(1);
 }

 FUNC_2(VAR_5->an_entry[VAR_3-1].an_ssid,
     sizeof(VAR_5->an_entry[VAR_3-1].an_ssid));
 FUNC_6(VAR_5->an_entry[VAR_3-1].an_ssid, (char *)VAR_4,
     sizeof(VAR_5->an_entry[VAR_3-1].an_ssid));
 VAR_5->an_entry[VAR_3-1].an_len
     = FUNC_7(VAR_5->an_entry[VAR_3-1].an_ssid);

 FUNC_1(VAR_2, &VAR_6);

 FUNC_4(0);
}
