
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uri ;
struct evkeyvalq {int dummy; } ;
struct evhttp_uri {int dummy; } ;
struct evhttp_request {int dummy; } ;
struct evhttp_connection {int dummy; } ;
struct event_base {int dummy; } ;
struct evbuffer {int dummy; } ;
struct bufferevent {int dummy; } ;
typedef int buf ;
typedef int X509_STORE ;
typedef int WSADATA ;
typedef int WORD ;
typedef int SSL_CTX ;
typedef int SSL ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 () ;
 int FUNC_6 (int,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *,char const*,int *) ;
 int * FUNC_13 (int ) ;
 int FUNC_14 (int *,int ,void*) ;
 int FUNC_15 (int *,int ,int *) ;
 int VAR_5 ;
 int FUNC_16 (int *) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int * FUNC_19 (int *) ;
 int FUNC_20 (int *,char const*) ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 (int ,int *) ;
 int FUNC_24 (int *) ;
 scalar_t__ FUNC_25 (int *,char*) ;
 int FUNC_26 (char*) ;
 int FUNC_27 (struct bufferevent*,int) ;
 struct bufferevent* FUNC_28 (struct event_base*,int,int *,int ,int) ;
 struct bufferevent* FUNC_29 (struct event_base*,int,int) ;
 int VAR_6 ;
 int FUNC_30 (char*) ;
 int FUNC_31 (char*) ;
 int FUNC_32 (struct evbuffer*,char*,size_t) ;
 int FUNC_33 (struct event_base*) ;
 int FUNC_34 (struct event_base*) ;
 struct event_base* FUNC_35 () ;
 int FUNC_36 (struct evkeyvalq*,char*,char const*) ;
 struct evhttp_connection* FUNC_37 (struct event_base*,int *,struct bufferevent*,char const*,int) ;
 int FUNC_38 (struct evhttp_connection*) ;
 int FUNC_39 (struct evhttp_connection*,int) ;
 int FUNC_40 (struct evhttp_connection*,int) ;
 int FUNC_41 (struct evhttp_connection*,struct evhttp_request*,int ,char*) ;
 struct evbuffer* FUNC_42 (struct evhttp_request*) ;
 struct evkeyvalq* FUNC_43 (struct evhttp_request*) ;
 struct evhttp_request* FUNC_44 (int ,struct bufferevent*) ;
 int FUNC_45 (struct evhttp_uri*) ;
 char* FUNC_46 (struct evhttp_uri*) ;
 char* FUNC_47 (struct evhttp_uri*) ;
 int FUNC_48 (struct evhttp_uri*) ;
 char* FUNC_49 (struct evhttp_uri*) ;
 char* FUNC_50 (struct evhttp_uri*) ;
 struct evhttp_uri* FUNC_51 (char const*) ;
 int FUNC_52 (char*,int,char*,unsigned long) ;
 int FUNC_53 (int *) ;
 int * FUNC_54 (char const*,char*) ;
 int FUNC_55 (int ,char*) ;
 size_t FUNC_56 (char*,int,int,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_57 (char*) ;
 int FUNC_58 (char*,int) ;
 int FUNC_59 (int ) ;
 int FUNC_60 (char*,int,char*,char const*,...) ;
 int VAR_9 ;
 scalar_t__ FUNC_61 (char const*,char*) ;
 int FUNC_62 (char*,char*) ;
 scalar_t__ FUNC_63 (char const*) ;
 int FUNC_64 () ;

int
FUNC_65(int VAR_10, char **VAR_11)
{
 int VAR_12;
 struct event_base *VAR_13 = ((void*)0);
 struct evhttp_uri *VAR_14 = ((void*)0);
 const char *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
 const char *VAR_17 = ((void*)0);
 const char *VAR_18, *VAR_19, *VAR_20, *VAR_21;
 char VAR_22[256];
 int VAR_23;
 int VAR_24 = 0;
 int VAR_25 = -1;

 SSL_CTX *VAR_26 = ((void*)0);
 SSL *VAR_27 = ((void*)0);
 struct bufferevent *VAR_28;
 struct evhttp_connection *VAR_29 = ((void*)0);
 struct evhttp_request *VAR_30;
 struct evkeyvalq *VAR_31;
 struct evbuffer *VAR_32;

 int VAR_33;
 int VAR_34 = 0;
 enum { HTTP, HTTPS } VAR_35 = HTTP;

 for (VAR_33 = 1; VAR_33 < VAR_10; VAR_33++) {
  if (!FUNC_62("-url", VAR_11[VAR_33])) {
   if (VAR_33 < VAR_10 - 1) {
    VAR_15 = VAR_11[VAR_33 + 1];
   } else {
    FUNC_64();
    goto error;
   }
  } else if (!FUNC_62("-crt", VAR_11[VAR_33])) {
   if (VAR_33 < VAR_10 - 1) {
    VAR_17 = VAR_11[VAR_33 + 1];
   } else {
    FUNC_64();
    goto error;
   }
  } else if (!FUNC_62("-ignore-cert", VAR_11[VAR_33])) {
   VAR_8 = 1;
  } else if (!FUNC_62("-data", VAR_11[VAR_33])) {
   if (VAR_33 < VAR_10 - 1) {
    VAR_16 = VAR_11[VAR_33 + 1];
   } else {
    FUNC_64();
    goto error;
   }
  } else if (!FUNC_62("-retries", VAR_11[VAR_33])) {
   if (VAR_33 < VAR_10 - 1) {
    VAR_24 = FUNC_26(VAR_11[VAR_33 + 1]);
   } else {
    FUNC_64();
    goto error;
   }
  } else if (!FUNC_62("-timeout", VAR_11[VAR_33])) {
   if (VAR_33 < VAR_10 - 1) {
    VAR_25 = FUNC_26(VAR_11[VAR_33 + 1]);
   } else {
    FUNC_64();
    goto error;
   }
  } else if (!FUNC_62("-help", VAR_11[VAR_33])) {
   FUNC_64();
   goto error;
  }
 }

 if (!VAR_15) {
  FUNC_64();
  goto error;
 }
 VAR_14 = FUNC_51(VAR_15);
 if (VAR_14 == ((void*)0)) {
  FUNC_30("malformed url");
  goto error;
 }

 VAR_18 = FUNC_50(VAR_14);
 if (VAR_18 == ((void*)0) || (FUNC_61(VAR_18, "https") != 0 &&
                        FUNC_61(VAR_18, "http") != 0)) {
  FUNC_30("url must be http or https");
  goto error;
 }

 VAR_19 = FUNC_46(VAR_14);
 if (VAR_19 == ((void*)0)) {
  FUNC_30("url must have a host");
  goto error;
 }

 VAR_23 = FUNC_48(VAR_14);
 if (VAR_23 == -1) {
  VAR_23 = (FUNC_61(VAR_18, "http") == 0) ? 80 : 443;
 }

 VAR_20 = FUNC_47(VAR_14);
 if (FUNC_63(VAR_20) == 0) {
  VAR_20 = "/";
 }

 VAR_21 = FUNC_49(VAR_14);
 if (VAR_21 == ((void*)0)) {
  FUNC_60(VAR_22, sizeof(VAR_22) - 1, "%s", VAR_20);
 } else {
  FUNC_60(VAR_22, sizeof(VAR_22) - 1, "%s?%s", VAR_20, VAR_21);
 }
 VAR_22[sizeof(VAR_22) - 1] = '\0';




 FUNC_17();
 FUNC_2();
 FUNC_18();
 FUNC_7();




 VAR_12 = FUNC_8();
 if (VAR_12 == 0) {
  FUNC_31("RAND_poll");
  goto error;
 }


 VAR_26 = FUNC_13(FUNC_21());
 if (!VAR_26) {
  FUNC_31("SSL_CTX_new");
  goto error;
 }

 if (VAR_17 == ((void*)0)) {
  X509_STORE *VAR_36;

  VAR_36 = FUNC_11(VAR_26);







  if (FUNC_24(VAR_36) != 1) {
   FUNC_31("X509_STORE_set_default_paths");
   goto error;
  }

 } else {
  if (FUNC_12(VAR_26, VAR_17, ((void*)0)) != 1) {
   FUNC_31("SSL_CTX_load_verify_locations");
   goto error;
  }
 }
 FUNC_15(VAR_26, VAR_5, ((void*)0));
 FUNC_14(VAR_26, VAR_6,
       (void *) VAR_19);


 VAR_13 = FUNC_35();
 if (!VAR_13) {
  FUNC_57("event_base_new()");
  goto error;
 }


 VAR_27 = FUNC_19(VAR_26);
 if (VAR_27 == ((void*)0)) {
  FUNC_31("SSL_new()");
  goto error;
 }






 if (FUNC_61(VAR_18, "http") == 0) {
  VAR_28 = FUNC_29(VAR_13, -1, VAR_0);
 } else {
  VAR_35 = HTTPS;
  VAR_28 = FUNC_28(VAR_13, -1, VAR_27,
   VAR_2,
   VAR_0|VAR_1);
 }

 if (VAR_28 == ((void*)0)) {
  FUNC_55(VAR_9, "bufferevent_openssl_socket_new() failed\n");
  goto error;
 }

 FUNC_27(VAR_28, 1);



 VAR_29 = FUNC_37(VAR_13, ((void*)0), VAR_28,
  VAR_19, VAR_23);
 if (VAR_29 == ((void*)0)) {
  FUNC_55(VAR_9, "evhttp_connection_base_bufferevent_new() failed\n");
  goto error;
 }

 if (VAR_24 > 0) {
  FUNC_39(VAR_29, VAR_24);
 }
 if (VAR_25 >= 0) {
  FUNC_40(VAR_29, VAR_25);
 }


 VAR_30 = FUNC_44(VAR_7, VAR_28);
 if (VAR_30 == ((void*)0)) {
  FUNC_55(VAR_9, "evhttp_request_new() failed\n");
  goto error;
 }

 VAR_31 = FUNC_43(VAR_30);
 FUNC_36(VAR_31, "Host", VAR_19);
 FUNC_36(VAR_31, "Connection", "close");

 if (VAR_16) {



  FILE * VAR_37 = FUNC_54(VAR_16, "rb");
  char VAR_38[1024];
  size_t VAR_39;
  size_t VAR_40 = 0;

  if (!VAR_37) {
   FUNC_64();
   goto error;
  }

  VAR_32 = FUNC_42(VAR_30);
  while ((VAR_39 = FUNC_56(VAR_38, 1, sizeof(VAR_38), VAR_37)) > 0) {
   FUNC_32(VAR_32, VAR_38, VAR_39);
   VAR_40 += VAR_39;
  }
  FUNC_52(VAR_38, sizeof(VAR_38)-1, "%lu", (unsigned long)VAR_40);
  FUNC_36(VAR_31, "Content-Length", VAR_38);
  FUNC_53(VAR_37);
 }

 VAR_12 = FUNC_41(VAR_29, VAR_30, VAR_16 ? VAR_4 : VAR_3, VAR_22);
 if (VAR_12 != 0) {
  FUNC_55(VAR_9, "evhttp_make_request() failed\n");
  goto error;
 }

 FUNC_33(VAR_13);
 goto cleanup;

error:
 VAR_34 = 1;
cleanup:
 if (VAR_29)
  FUNC_38(VAR_29);
 if (VAR_14)
  FUNC_45(VAR_14);
 if (VAR_13)
  FUNC_34(VAR_13);

 if (VAR_26)
  FUNC_10(VAR_26);
 if (VAR_35 == HTTP && VAR_27)
  FUNC_16(VAR_27);


 FUNC_5();
 FUNC_1();


 FUNC_3(0);




 FUNC_0();

 FUNC_59(FUNC_9());







 return VAR_34;
}
