
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct urlmatch_config {char* section; int vars; int url; int * cb; int cascade_fn; int collect_fn; int * key; int member_0; } ;
struct strbuf {int buf; } ;
struct remote {int http_proxy_authmethod; scalar_t__ http_proxy; } ;
struct TYPE_3__ {scalar_t__ name; } ;
typedef TYPE_1__ curl_ssl_backend ;


 scalar_t__ VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char const*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int,scalar_t__,TYPE_1__ const***) ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_5 () ;
 scalar_t__ VAR_10 ;
 void* FUNC_6 (int ,char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;
 char* FUNC_10 (char*) ;
 int FUNC_11 (int ,struct urlmatch_config*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_12 () ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 int FUNC_13 (int *,char*) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ FUNC_14 (char const*,char*) ;
 int FUNC_15 (struct strbuf*,char*,scalar_t__) ;
 int FUNC_16 (int *,int) ;
 void* FUNC_17 (char*,int *,int) ;
 char* FUNC_18 (char const*,int *) ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (scalar_t__) ;

void FUNC_21(struct remote *VAR_30, const char *VAR_31, int VAR_32)
{
 char *VAR_33;
 char *VAR_34;
 char *VAR_35;
 struct urlmatch_config VAR_36 = { VAR_4 };

 VAR_36.section = "http";
 VAR_36.key = ((void*)0);
 VAR_36.collect_fn = VAR_16;
 VAR_36.cascade_fn = VAR_13;
 VAR_36.cb = ((void*)0);

 VAR_15 = 0;
 VAR_35 = FUNC_18(VAR_31, &VAR_36.url);

 FUNC_11(VAR_28, &VAR_36);
 FUNC_8(VAR_35);
 FUNC_16(&VAR_36.vars, 1);
 if (FUNC_3(VAR_1) != VAR_0)
  FUNC_7("curl_global_init failed");

 VAR_17 = VAR_32;

 if (VAR_30 && VAR_30->http_proxy)
  VAR_7 = FUNC_20(VAR_30->http_proxy);

 if (VAR_30)
  FUNC_19(&VAR_18, VAR_30->http_proxy_authmethod);

 VAR_22 = FUNC_6(FUNC_12(),
  "Pragma: no-cache");
 VAR_21 = FUNC_6(FUNC_12(),
  "Pragma:");
 if (FUNC_10("GIT_SSL_NO_VERIFY"))
  VAR_11 = 0;

 FUNC_13(&VAR_25, "GIT_SSL_CERT");






 FUNC_13(&VAR_23, "GIT_SSL_CAINFO");

 FUNC_13(&VAR_29, "GIT_HTTP_USER_AGENT");

 VAR_33 = FUNC_10("GIT_HTTP_LOW_SPEED_LIMIT");
 if (VAR_33 != ((void*)0))
  VAR_8 = FUNC_17(VAR_33, ((void*)0), 10);
 VAR_34 = FUNC_10("GIT_HTTP_LOW_SPEED_TIME");
 if (VAR_34 != ((void*)0))
  VAR_9 = FUNC_17(VAR_34, ((void*)0), 10);

 if (VAR_11 == -1)
  VAR_11 = 1;

 VAR_10 = 0;





 if (FUNC_10("GIT_CURL_FTP_NO_EPSV"))
  VAR_6 = 1;

 if (VAR_31) {
  FUNC_2(&VAR_14, VAR_31);
  if (!VAR_26 &&
      FUNC_10("GIT_SSL_CERT_PASSWORD_PROTECTED") &&
      FUNC_14(VAR_31, "https://"))
   VAR_26 = 1;
 }


 VAR_5 = FUNC_9();

}
