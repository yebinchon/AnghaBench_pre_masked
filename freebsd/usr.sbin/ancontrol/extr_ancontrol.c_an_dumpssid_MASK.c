
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct an_req {int an_len; int an_type; } ;
struct an_ltv_ssidlist_new {TYPE_1__* an_entry; } ;
struct an_ltv_ssid_entry {int dummy; } ;
typedef int areq ;
struct TYPE_2__ {char* an_len; int an_ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,struct an_req*) ;
 int FUNC_1 (char*,int,...) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_2)
{
 struct an_ltv_ssidlist_new *VAR_3;
 struct an_req VAR_4;
 int VAR_5, VAR_6;

 VAR_4.an_len = sizeof(VAR_4);
 VAR_4.an_type = VAR_0;

 FUNC_0(VAR_2, &VAR_4);

 VAR_6 = (VAR_4.an_len - 4) / sizeof(struct an_ltv_ssid_entry);
 if ( VAR_6 > VAR_1 ) {
  FUNC_1("Too many SSIDs only printing %d of %d\n",
      VAR_1, VAR_6);
  VAR_6 = VAR_1;
 }
 VAR_3 = (struct an_ltv_ssidlist_new *)&VAR_4;
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
  FUNC_1("SSID %2d:\t\t\t[ %.*s ]\n", VAR_5 + 1,
      VAR_3->an_entry[VAR_5].an_len,
      VAR_3->an_entry[VAR_5].an_ssid);

 return;
}
