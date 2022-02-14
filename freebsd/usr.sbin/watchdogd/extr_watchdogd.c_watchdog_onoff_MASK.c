
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int *) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(int VAR_16)
{
 int VAR_17;


 if (VAR_7)
  return 0;

 if (VAR_16) {





  VAR_17 = FUNC_0(VAR_6, VAR_2, &VAR_14);
  if (VAR_17) {
   FUNC_1("setting WDIOC_SETSOFT %d", VAR_14);
   return (VAR_17);
  }
  VAR_17 = FUNC_2((VAR_15|VAR_4));
  if (VAR_17) {
   FUNC_1("watchdog_patpat failed");
   goto failsafe;
  }
  if (VAR_13) {
   VAR_17 = FUNC_0(VAR_6, VAR_3,
       &VAR_12);
   if (VAR_17) {
    FUNC_1("setting WDIOC_SETSOFTTIMEOUTACT %d",
        VAR_12);
    goto failsafe;
   }
  }
  if (VAR_11) {
   VAR_17 = FUNC_0(VAR_6, VAR_0, &VAR_8);
   if (VAR_17) {
    FUNC_1("setting WDIOC_SETPRETIMEOUT %d",
        VAR_8);
    goto failsafe;
   }
  }
  if (VAR_10) {
   VAR_17 = FUNC_0(VAR_6, VAR_1,
       &VAR_9);
   if (VAR_17) {
    FUNC_1("setting WDIOC_SETPRETIMEOUTACT %d",
        VAR_9);
    goto failsafe;
   }
  }

  return FUNC_2((VAR_15|VAR_4));
  } else {
  return FUNC_2(VAR_5);
  }
failsafe:
 FUNC_2(VAR_5);
 return (VAR_17);
}
