
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mfi_ld_props {int default_cache_policy; int disk_cache_policy; int current_cache_policy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int,int ,struct mfi_ld_props*) ;
 scalar_t__ FUNC_2 (int,char*,int *) ;
 int FUNC_3 (int,int ) ;
 int VAR_7 ;
 char* FUNC_4 (int,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int,char**,struct mfi_ld_props*) ;
 int FUNC_7 (int,struct mfi_ld_props*,struct mfi_ld_props*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int
FUNC_10(int VAR_8, char **VAR_9)
{
 struct mfi_ld_props VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14;
 uint8_t VAR_15;

 if (VAR_8 < 2) {
  FUNC_9("cache: volume required");
  return (VAR_0);
 }

 VAR_13 = FUNC_3(VAR_7, VAR_5);
 if (VAR_13 < 0) {
  VAR_12 = VAR_6;
  FUNC_8("mfi_open");
  return (VAR_12);
 }

 if (FUNC_2(VAR_13, VAR_9[1], &VAR_15) < 0) {
  VAR_12 = VAR_6;
  FUNC_8("Invalid volume: %s", VAR_9[1]);
  FUNC_0(VAR_13);
  return (VAR_12);
 }

 if (FUNC_1(VAR_13, VAR_15, &VAR_10) < 0) {
  VAR_12 = VAR_6;
  FUNC_8("Failed to fetch volume properties");
  FUNC_0(VAR_13);
  return (VAR_12);
 }

 if (VAR_8 == 2) {
  FUNC_5("mfi%u volume %s cache settings:\n", VAR_7,
      FUNC_4(VAR_13, VAR_15));
  FUNC_5("             I/O caching: ");
  switch (VAR_10.default_cache_policy &
      (131 |
      132)) {
  case 0:
   FUNC_5("disabled\n");
   break;
  case 131:
   FUNC_5("writes\n");
   break;
  case 132:
   FUNC_5("reads\n");
   break;
  case 131 |
      132:
   FUNC_5("writes and reads\n");
   break;
  }
  FUNC_5("           write caching: %s\n",
      VAR_10.default_cache_policy & VAR_3 ?
      "write-back" : "write-through");
  FUNC_5("write cache with bad BBU: %s\n",
      VAR_10.default_cache_policy &
      VAR_4 ? "enabled" : "disabled");
  FUNC_5("              read ahead: %s\n",
      VAR_10.default_cache_policy & VAR_2 ?
      (VAR_10.default_cache_policy & VAR_1 ?
      "adaptive" : "always") : "none");
  FUNC_5("       drive write cache: ");
  switch (VAR_10.disk_cache_policy) {
  case 128:
   FUNC_5("default\n");
   break;
  case 129:
   FUNC_5("enabled\n");
   break;
  case 130:
   FUNC_5("disabled\n");
   break;
  default:
   FUNC_5("??? %d\n", VAR_10.disk_cache_policy);
   break;
  }
  if (VAR_10.default_cache_policy != VAR_10.current_cache_policy)
   FUNC_5(
 "Cache disabled due to dead battery or ongoing battery relearn\n");
  VAR_12 = 0;
 } else {
  VAR_11 = VAR_10;
  VAR_9 += 2;
  VAR_8 -= 2;
  while (VAR_8 > 0) {
   VAR_14 = FUNC_6(VAR_8, VAR_9, &VAR_11);
   if (VAR_14 < 0) {
    FUNC_0(VAR_13);
    return (VAR_0);
   }
   VAR_9 += VAR_14;
   VAR_8 -= VAR_14;
  }
  VAR_12 = FUNC_7(VAR_13, &VAR_10, &VAR_11);
 }
 FUNC_0(VAR_13);

 return (VAR_12);
}
