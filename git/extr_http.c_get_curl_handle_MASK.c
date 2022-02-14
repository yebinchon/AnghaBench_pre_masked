
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct strbuf {char* buf; } ;
struct TYPE_11__ {char* password; } ;
struct TYPE_10__ {char* protocol; } ;
struct TYPE_9__ {char* host; } ;
struct TYPE_8__ {char* name; char* curl_deleg_param; char* ssl_version; } ;
typedef int CURL ;


 int FUNC_0 (TYPE_1__*) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 char* VAR_31 ;
 char* VAR_32 ;
 char* VAR_33 ;
 char* VAR_34 ;
 char* VAR_35 ;
 char* VAR_36 ;
 char* VAR_37 ;
 char* VAR_38 ;
 char* VAR_39 ;
 struct strbuf VAR_40 ;
 int FUNC_1 (char*) ;
 TYPE_6__ VAR_41 ;
 int VAR_42 ;
 int FUNC_2 (TYPE_2__*,char*) ;
 char* VAR_43 ;
 TYPE_1__* VAR_44 ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int ,...) ;
 scalar_t__ VAR_45 ;
 char* VAR_46 ;
 scalar_t__ VAR_47 ;
 char* VAR_48 ;
 char* VAR_49 ;
 char* VAR_50 ;
 scalar_t__ VAR_51 ;
 int VAR_52 ;
 int FUNC_5 (char*,...) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (scalar_t__,long*) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 TYPE_3__ VAR_53 ;
 scalar_t__ VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 char* VAR_57 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 TYPE_2__ VAR_58 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 char* VAR_59 ;
 char* VAR_60 ;
 char* VAR_61 ;
 char* VAR_62 ;
 char* VAR_63 ;
 char* VAR_64 ;
 char* VAR_65 ;
 TYPE_1__* VAR_66 ;
 scalar_t__ FUNC_15 (char*,char*) ;
 int FUNC_16 (struct strbuf*,char*,char*) ;
 int FUNC_17 (struct strbuf*) ;
 int FUNC_18 (char*,char*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,char*,char,int) ;
 scalar_t__ FUNC_21 (char*,char*) ;
 scalar_t__ VAR_67 ;
 int VAR_68 ;
 int FUNC_22 (char**,char*) ;
 int FUNC_23 (char*,...) ;

__attribute__((used)) static CURL *FUNC_24(void)
{
 CURL *VAR_69 = FUNC_3();

 if (!VAR_69)
  FUNC_5("curl_easy_init failed");

 if (!VAR_52) {
  FUNC_4(VAR_69, VAR_27, 0);
  FUNC_4(VAR_69, VAR_26, 0);
 } else {

  FUNC_4(VAR_69, VAR_27, 1);

  FUNC_4(VAR_69, VAR_26, 2);
 }
 if (VAR_57 && !FUNC_18("schannel", VAR_57) &&
     !VAR_55) {



  FUNC_23(FUNC_1("CURLSSLOPT_NO_REVOKE not supported with cURL < 7.44.0"));

 }

 if (VAR_54)
  FUNC_11(VAR_69);

 if (FUNC_8("GIT_SSL_VERSION"))
  VAR_65 = FUNC_8("GIT_SSL_VERSION");
 if (VAR_65 && *VAR_65) {
  int VAR_70;
  for (VAR_70 = 0; VAR_70 < FUNC_0(VAR_66); VAR_70++) {
   if (!FUNC_18(VAR_65, VAR_66[VAR_70].name)) {
    FUNC_4(VAR_69, VAR_23,
       VAR_66[VAR_70].ssl_version);
    break;
   }
  }
  if (VAR_70 == FUNC_0(VAR_66))
   FUNC_23("unsupported ssl version %s: using default",
    VAR_65);
 }

 if (FUNC_8("GIT_SSL_CIPHER_LIST"))
  VAR_62 = FUNC_8("GIT_SSL_CIPHER_LIST");
 if (VAR_62 != ((void*)0) && *VAR_62)
  FUNC_4(VAR_69, VAR_24,
    VAR_62);

 if (VAR_61 != ((void*)0))
  FUNC_4(VAR_69, VAR_21, VAR_61);
 if (FUNC_10())
  FUNC_4(VAR_69, VAR_7, VAR_41.password);
 if (VAR_57 && !FUNC_18("schannel", VAR_57) &&
     !VAR_56) {
  FUNC_4(VAR_69, VAR_1, ((void*)0));



 } else if (VAR_59 != ((void*)0))
  FUNC_4(VAR_69, VAR_1, VAR_59);

 if (VAR_48 > 0 && VAR_49 > 0) {
  FUNC_4(VAR_69, VAR_8,
     VAR_48);
  FUNC_4(VAR_69, VAR_9,
     VAR_49);
 }

 FUNC_4(VAR_69, VAR_10, 20);
 FUNC_23(FUNC_1("Protocol restrictions not supported with cURL < 7.19.4"));

 if (FUNC_8("GIT_CURL_VERBOSE"))
  FUNC_4(VAR_69, VAR_30, 1L);
 FUNC_14(VAR_69);
 if (FUNC_8("GIT_TRACE_CURL_NO_DATA"))
  VAR_67 = 0;
 if (FUNC_8("GIT_REDACT_COOKIES")) {
  FUNC_20(&VAR_42,
      FUNC_8("GIT_REDACT_COOKIES"), ',', -1);
  FUNC_19(&VAR_42);
 }

 FUNC_4(VAR_69, VAR_28,
  VAR_68 ? VAR_68 : FUNC_9());

 if (VAR_45)
  FUNC_4(VAR_69, VAR_3, 0);
 if (!VAR_46) {
  if (VAR_53.protocol && !FUNC_18(VAR_53.protocol, "https")) {
   FUNC_22(&VAR_46, FUNC_8("HTTPS_PROXY"));
   FUNC_22(&VAR_46, FUNC_8("https_proxy"));
  } else {
   FUNC_22(&VAR_46, FUNC_8("http_proxy"));
  }
  if (!VAR_46) {
   FUNC_22(&VAR_46, FUNC_8("ALL_PROXY"));
   FUNC_22(&VAR_46, FUNC_8("all_proxy"));
  }
 }

 if (VAR_46 && VAR_46[0] == '\0') {





  FUNC_4(VAR_69, VAR_17, "");
 } else if (VAR_46) {
  if (FUNC_21(VAR_46, "://"))
   FUNC_2(&VAR_58, VAR_46);
  else {
   struct strbuf VAR_71 = VAR_40;
   FUNC_16(&VAR_71, "http://%s", VAR_46);
   FUNC_2(&VAR_58, VAR_71.buf);
   FUNC_17(&VAR_71);
  }

  if (!VAR_58.host)
   FUNC_5("Invalid proxy URL '%s'", VAR_46);

  FUNC_4(VAR_69, VAR_17, VAR_58.host);





 }
 FUNC_12(VAR_69);

 FUNC_13(VAR_69);

 return VAR_69;
}
