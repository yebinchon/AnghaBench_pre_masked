
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int timeout_header ;
struct xml_ctx {char* name; struct remote_lock* userData; int userFunc; int * cdata; scalar_t__ len; } ;
struct strbuf {int len; int buf; } ;
struct slot_results {scalar_t__ curl_result; int http_code; } ;
struct remote_lock {int timeout; char* token; char* owner; char* url; struct remote_lock* next; int start_time; } ;
struct curl_slist {int len; int buf; } ;
struct buffer {struct strbuf buf; int member_1; struct strbuf member_0; } ;
struct active_request_slot {int curl; struct slot_results* results; } ;
typedef enum XML_Status { ____Placeholder_XML_Status } XML_Status ;
typedef int XML_Parser ;
struct TYPE_2__ {struct remote_lock* locks; int url; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct remote_lock*) ;
 int VAR_5 ;
 struct strbuf VAR_6 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,struct xml_ctx*) ;
 int FUNC_9 (int ,int ,struct strbuf*) ;
 int FUNC_10 (int ,char*,int ,struct buffer*,int ) ;
 int FUNC_11 (int ,char*,int ) ;
 struct strbuf* FUNC_12 (struct strbuf*,char*) ;
 int FUNC_13 (struct strbuf*) ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 (char*) ;
 int VAR_8 ;
 struct active_request_slot* FUNC_16 () ;
 int VAR_9 ;
 struct strbuf* FUNC_17 () ;
 int FUNC_18 () ;
 TYPE_1__* VAR_10 ;
 int FUNC_19 (struct active_request_slot*) ;
 scalar_t__ FUNC_20 (struct active_request_slot*) ;
 int VAR_11 ;
 int FUNC_21 (struct strbuf*,int ,char*) ;
 int FUNC_22 (struct strbuf*) ;
 char* FUNC_23 (char*,char) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int *) ;
 void* FUNC_26 (int,int) ;
 int VAR_12 ;
 int VAR_13 ;
 char* FUNC_27 (int ) ;
 int VAR_14 ;
 int FUNC_28 (char*,int,char*,long) ;
 char* FUNC_29 (char*,int ,char const*) ;

__attribute__((used)) static struct remote_lock *FUNC_30(const char *VAR_15, long VAR_16)
{
 struct active_request_slot *VAR_17;
 struct slot_results VAR_18;
 struct buffer VAR_19 = { VAR_6, 0 };
 struct strbuf VAR_20 = VAR_6;
 char *VAR_21;
 char *VAR_22;
 char VAR_23[25];
 struct remote_lock *VAR_24 = ((void*)0);
 struct curl_slist *VAR_25 = FUNC_17();
 struct xml_ctx VAR_26;
 char *VAR_27;

 VAR_21 = FUNC_29("%s%s", VAR_10->url, VAR_15);


 VAR_22 = FUNC_23(VAR_21 + FUNC_24(VAR_10->url) + 1, '/');
 while (VAR_22) {
  char VAR_28 = VAR_22[1];
  VAR_22[1] = '\0';
  VAR_17 = FUNC_16();
  VAR_17->results = &VAR_18;
  FUNC_11(VAR_17->curl, VAR_21, VAR_4);
  if (FUNC_20(VAR_17)) {
   FUNC_19(VAR_17);
   if (VAR_18.curl_result != VAR_0 &&
       VAR_18.http_code != 405) {
    FUNC_14(VAR_11,
     "Unable to create branch path %s\n",
     VAR_21);
    FUNC_15(VAR_21);
    return ((void*)0);
   }
  } else {
   FUNC_14(VAR_11, "Unable to start MKCOL request\n");
   FUNC_15(VAR_21);
   return ((void*)0);
  }
  VAR_22[1] = VAR_28;
  VAR_22 = FUNC_23(VAR_22 + 1, '/');
 }

 VAR_27 = FUNC_27(FUNC_18());
 FUNC_21(&VAR_19.buf, VAR_5, VAR_27);
 FUNC_15(VAR_27);

 FUNC_28(VAR_23, sizeof(VAR_23), "Timeout: Second-%ld", VAR_16);
 VAR_25 = FUNC_12(VAR_25, VAR_23);
 VAR_25 = FUNC_12(VAR_25, "Content-Type: text/xml");

 VAR_17 = FUNC_16();
 VAR_17->results = &VAR_18;
 FUNC_10(VAR_17->curl, VAR_21, VAR_3, &VAR_19, VAR_8);
 FUNC_9(VAR_17->curl, VAR_2, VAR_25);
 FUNC_9(VAR_17->curl, VAR_1, &VAR_20);

 VAR_24 = FUNC_26(1, sizeof(*VAR_24));
 VAR_24->timeout = -1;

 if (FUNC_20(VAR_17)) {
  FUNC_19(VAR_17);
  if (VAR_18.curl_result == VAR_0) {
   XML_Parser VAR_29 = FUNC_4(((void*)0));
   enum XML_Status VAR_30;
   VAR_26.name = FUNC_26(10, 1);
   VAR_26.len = 0;
   VAR_26.cdata = ((void*)0);
   VAR_26.userFunc = VAR_9;
   VAR_26.userData = VAR_24;
   FUNC_8(VAR_29, &VAR_26);
   FUNC_7(VAR_29, VAR_14,
           VAR_13);
   FUNC_6(VAR_29, VAR_12);
   VAR_30 = FUNC_3(VAR_29, VAR_20.buf,
        VAR_20.len, 1);
   FUNC_15(VAR_26.name);
   if (VAR_30 != VAR_7) {
    FUNC_14(VAR_11, "XML error: %s\n",
     FUNC_1(
      FUNC_2(VAR_29)));
    VAR_24->timeout = -1;
   }
   FUNC_5(VAR_29);
  } else {
   FUNC_14(VAR_11,
    "error: curl result=%ld, HTTP code=%d\n",
    VAR_18.curl_result, VAR_18.http_code);
  }
 } else {
  FUNC_14(VAR_11, "Unable to start LOCK request\n");
 }

 FUNC_13(VAR_25);
 FUNC_22(&VAR_19.buf);
 FUNC_22(&VAR_20);

 if (VAR_24->token == ((void*)0) || VAR_24->timeout <= 0) {
  FUNC_15(VAR_24->token);
  FUNC_15(VAR_24->owner);
  FUNC_15(VAR_21);
  FUNC_0(VAR_24);
 } else {
  VAR_24->url = VAR_21;
  VAR_24->start_time = FUNC_25(((void*)0));
  VAR_24->next = VAR_10->locks;
  VAR_10->locks = VAR_24;
 }

 return VAR_24;
}
