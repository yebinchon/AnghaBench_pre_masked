
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 long VAR_10 ;
 long VAR_11 ;
 int VAR_12 ;
 int * FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int * VAR_15 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char const*,char const*) ;
 void* FUNC_6 (char const*,char const*) ;
 int FUNC_7 (int *,char const*,char const*) ;
 scalar_t__ FUNC_8 (char const*,char const*) ;
 int FUNC_9 (int *,char const*,char const*) ;
 int FUNC_10 (char const*,char const*,void*) ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 void* VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_11 (char const*,char const*) ;
 int VAR_32 ;
 int FUNC_12 (int ,...) ;
 int FUNC_13 (char const*) ;

__attribute__((used)) static int FUNC_14(const char *VAR_33, const char *VAR_34, void *VAR_35)
{
 if (!FUNC_11("http.version", VAR_33)) {
  return FUNC_9(&VAR_9, VAR_33, VAR_34);
 }
 if (!FUNC_11("http.sslverify", VAR_33)) {
  VAR_14 = FUNC_5(VAR_33, VAR_34);
  return 0;
 }
 if (!FUNC_11("http.sslcipherlist", VAR_33))
  return FUNC_9(&VAR_28, VAR_33, VAR_34);
 if (!FUNC_11("http.sslversion", VAR_33))
  return FUNC_9(&VAR_31, VAR_33, VAR_34);
 if (!FUNC_11("http.sslcert", VAR_33))
  return FUNC_7(&VAR_26, VAR_33, VAR_34);
 if (!FUNC_11("http.sslcainfo", VAR_33))
  return FUNC_7(&VAR_24, VAR_33, VAR_34);
 if (!FUNC_11("http.sslcertpasswordprotected", VAR_33)) {
  VAR_27 = FUNC_5(VAR_33, VAR_34);
  return 0;
 }
 if (!FUNC_11("http.ssltry", VAR_33)) {
  VAR_13 = FUNC_5(VAR_33, VAR_34);
  return 0;
 }
 if (!FUNC_11("http.sslbackend", VAR_33)) {
  FUNC_4(VAR_21);
  VAR_21 = FUNC_13(VAR_34);
  return 0;
 }

 if (!FUNC_11("http.schannelcheckrevoke", VAR_33)) {
  VAR_19 = FUNC_5(VAR_33, VAR_34);
  return 0;
 }

 if (!FUNC_11("http.schannelusesslcainfo", VAR_33)) {
  VAR_20 = FUNC_5(VAR_33, VAR_34);
  return 0;
 }

 if (!FUNC_11("http.minsessions", VAR_33)) {
  VAR_23 = FUNC_6(VAR_33, VAR_34);

  if (VAR_23 > 1)
   VAR_23 = 1;

  return 0;
 }






 if (!FUNC_11("http.lowspeedlimit", VAR_33)) {
  VAR_10 = (long)FUNC_6(VAR_33, VAR_34);
  return 0;
 }
 if (!FUNC_11("http.lowspeedtime", VAR_33)) {
  VAR_11 = (long)FUNC_6(VAR_33, VAR_34);
  return 0;
 }

 if (!FUNC_11("http.noepsv", VAR_33)) {
  VAR_7 = FUNC_5(VAR_33, VAR_34);
  return 0;
 }
 if (!FUNC_11("http.proxy", VAR_33))
  return FUNC_9(&VAR_8, VAR_33, VAR_34);

 if (!FUNC_11("http.proxyauthmethod", VAR_33))
  return FUNC_9(&VAR_18, VAR_33, VAR_34);

 if (!FUNC_11("http.cookiefile", VAR_33))
  return FUNC_7(&VAR_4, VAR_33, VAR_34);
 if (!FUNC_11("http.savecookies", VAR_33)) {
  VAR_12 = FUNC_5(VAR_33, VAR_34);
  return 0;
 }

 if (!FUNC_11("http.postbuffer", VAR_33)) {
  VAR_17 = FUNC_8(VAR_33, VAR_34);
  if (VAR_17 < 0)
   FUNC_12(FUNC_0("negative value for http.postbuffer; defaulting to %d"), VAR_3);
  if (VAR_17 < VAR_3)
   VAR_17 = VAR_3;
  return 0;
 }

 if (!FUNC_11("http.useragent", VAR_33))
  return FUNC_9(&VAR_32, VAR_33, VAR_34);

 if (!FUNC_11("http.emptyauth", VAR_33)) {
  if (VAR_34 && !FUNC_11("auto", VAR_34))
   VAR_6 = -1;
  else
   VAR_6 = FUNC_5(VAR_33, VAR_34);
  return 0;
 }

 if (!FUNC_11("http.delegation", VAR_33)) {



  FUNC_12(FUNC_0("Delegation control is not supported with cURL < 7.22.0"));
  return 0;

 }

 if (!FUNC_11("http.pinnedpubkey", VAR_33)) {



  FUNC_12(FUNC_0("Public key pinning not supported with cURL < 7.44.0"));
  return 0;

 }

 if (!FUNC_11("http.extraheader", VAR_33)) {
  if (!VAR_34) {
   return FUNC_1(VAR_33);
  } else if (!*VAR_34) {
   FUNC_3(VAR_15);
   VAR_15 = ((void*)0);
  } else {
   VAR_15 =
    FUNC_2(VAR_15, VAR_34);
  }
  return 0;
 }

 if (!FUNC_11("http.followredirects", VAR_33)) {
  if (VAR_34 && !FUNC_11(VAR_34, "initial"))
   VAR_16 = VAR_1;
  else if (FUNC_5(VAR_33, VAR_34))
   VAR_16 = VAR_0;
  else
   VAR_16 = VAR_2;
  return 0;
 }


 return FUNC_10(VAR_33, VAR_34, VAR_35);
}
