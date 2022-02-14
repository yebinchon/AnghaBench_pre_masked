
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mfi_ld_props {int default_cache_policy; int disk_cache_policy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 scalar_t__ FUNC_0 (int,struct mfi_ld_props*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(int VAR_7, struct mfi_ld_props *VAR_8, struct mfi_ld_props *VAR_9)
{
 int VAR_10;
 uint8_t VAR_11, VAR_12;

 if (VAR_8->default_cache_policy == VAR_9->default_cache_policy &&
     VAR_8->disk_cache_policy == VAR_9->disk_cache_policy)
  return (0);
 VAR_12 = VAR_9->default_cache_policy;
 VAR_11 = VAR_12 ^ VAR_8->default_cache_policy;
 if (VAR_11 & VAR_1)
  FUNC_1("%s caching of I/O writes\n",
      VAR_12 & VAR_1 ? "Enabling" :
      "Disabling");
 if (VAR_11 & VAR_0)
  FUNC_1("%s caching of I/O reads\n",
      VAR_12 & VAR_0 ? "Enabling" :
      "Disabling");
 if (VAR_11 & VAR_4)
  FUNC_1("Setting write cache policy to %s\n",
      VAR_12 & VAR_4 ? "write-back" :
      "write-through");
 if (VAR_11 & (VAR_3 | VAR_2))
  FUNC_1("Setting read ahead policy to %s\n",
      VAR_12 & VAR_3 ?
      (VAR_12 & VAR_2 ?
      "adaptive" : "always") : "none");
 if (VAR_11 & VAR_5)
  FUNC_1("%s write caching with bad BBU\n",
      VAR_12 & VAR_5 ? "Enabling" :
      "Disabling");
 if (VAR_8->disk_cache_policy != VAR_9->disk_cache_policy) {
  switch (VAR_9->disk_cache_policy) {
  case 129:
   FUNC_1("Enabling write-cache on physical drives\n");
   break;
  case 130:
   FUNC_1("Disabling write-cache on physical drives\n");
   break;
  case 128:
   FUNC_1("Using default write-cache setting on physical drives\n");
   break;
  }
 }

 if (FUNC_0(VAR_7, VAR_9) < 0) {
  VAR_10 = VAR_6;
  FUNC_2("Failed to set volume properties");
  return (VAR_10);
 }
 return (0);
}
