
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
struct ieee80211_rate_table {TYPE_1__* info; } ;
struct TYPE_2__ {scalar_t__ phy; int dot11Rate; int shortPreamble; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int
FUNC_2(const struct ieee80211_rate_table *VAR_2, uint8_t VAR_3,
 int VAR_4, int VAR_5)
{
 if (VAR_4) {
  if (VAR_2->info[VAR_3].phy != VAR_1) {
   if (VAR_5)
    FUNC_1("short preamble not meaningful, ignored");
   VAR_4 = 0;
  } else if (!VAR_2->info[VAR_3].shortPreamble) {
   if (VAR_5)
    FUNC_1("short preamble not meaningful with "
        "rate %s, ignored",
        FUNC_0(VAR_2->info[VAR_3].dot11Rate &~ VAR_0));
   VAR_4 = 0;
  }
 }
 return VAR_4;
}
