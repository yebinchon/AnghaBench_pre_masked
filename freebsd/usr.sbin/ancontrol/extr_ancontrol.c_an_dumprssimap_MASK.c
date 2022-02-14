
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct an_req {int an_len; int an_type; } ;
struct an_ltv_rssi_map {TYPE_1__* an_entries; } ;
typedef int areq ;
struct TYPE_2__ {int an_rss_pct; int an_rss_dbm; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,struct an_req*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_1)
{
 struct an_ltv_rssi_map *VAR_2;
 struct an_req VAR_3;
 int VAR_4;

 VAR_3.an_len = sizeof(VAR_3);
 VAR_3.an_type = VAR_0;

 FUNC_0(VAR_1, &VAR_3);

 VAR_2 = (struct an_ltv_rssi_map *)&VAR_3;

 FUNC_1("idx\tpct\t dBm\n");

 for (VAR_4 = 0; VAR_4 < 0xFF; VAR_4++) {




  FUNC_1("%3d\t%3d\t%4d\n", VAR_4,
   VAR_2->an_entries[VAR_4].an_rss_pct,
   - VAR_2->an_entries[VAR_4].an_rss_dbm);
 }
}
