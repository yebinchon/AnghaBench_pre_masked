
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
typedef size_t uint16_t ;
struct ieee80211_rate_table {size_t* rateCodeToIndex; size_t rateCount; TYPE_1__* info; } ;
struct ieee80211_frame {int dummy; } ;
struct TYPE_2__ {size_t dot11Rate; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 float FUNC_0 (char*) ;
 int FUNC_1 (struct ieee80211_rate_table const*,size_t,int,int) ;
 int FUNC_2 (int,char*,char const*,...) ;
 int FUNC_3 (int,char**,char*) ;
 size_t FUNC_4 (struct ieee80211_rate_table const*,int,size_t,int) ;
 int FUNC_5 () ;
 struct ieee80211_rate_table* FUNC_6 (char const*) ;
 char* VAR_3 ;
 int FUNC_7 (char*,size_t,int,char*,char*) ;
 char* FUNC_8 (size_t) ;
 int FUNC_9 (char*,int *,int ) ;
 int FUNC_10 (char*) ;

int
FUNC_11(int VAR_4, char *VAR_5[])
{
 const struct ieee80211_rate_table *VAR_6;
 const char *VAR_7;
 uint32_t VAR_8;
 uint16_t VAR_9;
 uint16_t VAR_10;
 uint8_t VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;
 float VAR_16;

 FUNC_5();

 VAR_7 = "11g";
 VAR_14 = 0;
 VAR_8 = 1500
   + sizeof(struct ieee80211_frame)
   + VAR_2
   + VAR_0
   ;
 VAR_9 = 2*54;
 VAR_13 = 0;
 while ((VAR_12 = FUNC_3(VAR_4, VAR_5, "al:m:r:s")) != -1) {
  switch (VAR_12) {
  case 'a':
   VAR_13 = 1;
   break;
  case 'l':
   VAR_8 = FUNC_9(VAR_3, ((void*)0), 0);
   break;
  case 'm':
   VAR_7 = VAR_3;
   break;
  case 'r':
   VAR_16 = FUNC_0(VAR_3);
   VAR_9 = (int) 2*VAR_16;
   break;
  case 's':
   VAR_14 = 1;
   break;
  default:
   FUNC_10(VAR_5[0]);
   break;
  }
 }
 VAR_6 = FUNC_6(VAR_7);
 if (VAR_6 == ((void*)0))
  FUNC_2(-1, "unknown mode %s", VAR_7);
 if (!VAR_13) {
  VAR_11 = VAR_6->rateCodeToIndex[VAR_9];
  if (VAR_11 == (uint8_t) -1)
   FUNC_2(-1, "rate %s not valid for mode %s", FUNC_8(VAR_9), VAR_7);
  VAR_15 = FUNC_1(VAR_6, VAR_11, VAR_14, 1);

  VAR_10 = FUNC_4(VAR_6, VAR_8, VAR_9, VAR_15);
  FUNC_7("%u usec to send %u bytes @ %s Mb/s, %s preamble\n",
      VAR_10, VAR_8, FUNC_8(VAR_9),
      VAR_15 ? "short" : "long");
 } else {
  for (VAR_11 = 0; VAR_11 < VAR_6->rateCount; VAR_11++) {
   VAR_9 = VAR_6->info[VAR_11].dot11Rate &~ VAR_1;
   VAR_15 = FUNC_1(VAR_6, VAR_11, VAR_14, 0);
   VAR_10 = FUNC_4(VAR_6, VAR_8, VAR_9,
       VAR_15);
   FUNC_7("%u usec to send %u bytes @ %s Mb/s, %s preamble\n",
       VAR_10, VAR_8, FUNC_8(VAR_9),
       VAR_15 ? "short" : "long");
  }
 }
 return 0;
}
