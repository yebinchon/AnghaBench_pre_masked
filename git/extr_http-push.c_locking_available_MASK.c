
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xml_ctx {char* name; int* userData; int userFunc; int * cdata; scalar_t__ len; } ;
struct strbuf {int len; int buf; } ;
struct slot_results {scalar_t__ curl_result; } ;
struct curl_slist {int len; int buf; } ;
struct buffer {struct strbuf buf; int member_1; struct strbuf member_0; } ;
struct active_request_slot {int curl; struct slot_results* results; } ;
typedef enum XML_Status { ____Placeholder_XML_Status } XML_Status ;
typedef int XML_Parser ;
struct TYPE_2__ {int url; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct strbuf VAR_5 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,struct xml_ctx*) ;
 int FUNC_7 (int ,int ,struct strbuf*) ;
 int FUNC_8 (int ,int ,int ,struct buffer*,int ) ;
 struct strbuf* FUNC_9 (struct strbuf*,char*) ;
 int FUNC_10 (struct strbuf*) ;
 int FUNC_11 (char*,int ,...) ;
 int FUNC_12 (int ,char*,char*) ;
 int FUNC_13 (char*) ;
 int VAR_7 ;
 struct active_request_slot* FUNC_14 () ;
 int VAR_8 ;
 struct strbuf* FUNC_15 () ;
 TYPE_1__* VAR_9 ;
 int FUNC_16 (struct active_request_slot*) ;
 scalar_t__ FUNC_17 (struct active_request_slot*) ;
 int VAR_10 ;
 int FUNC_18 (struct strbuf*,int ,char*) ;
 int FUNC_19 (struct strbuf*) ;
 char* FUNC_20 (int,int) ;
 int VAR_11 ;
 char* FUNC_21 (int ) ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_22(void)
{
 struct active_request_slot *VAR_13;
 struct slot_results VAR_14;
 struct strbuf VAR_15 = VAR_5;
 struct buffer VAR_16 = { VAR_5, 0 };
 struct curl_slist *VAR_17 = FUNC_15();
 struct xml_ctx VAR_18;
 int VAR_19 = 0;
 char *VAR_20;

 VAR_20 = FUNC_21(VAR_9->url);
 FUNC_18(&VAR_16.buf, VAR_4, VAR_20);
 FUNC_13(VAR_20);

 VAR_17 = FUNC_9(VAR_17, "Depth: 0");
 VAR_17 = FUNC_9(VAR_17, "Content-Type: text/xml");

 VAR_13 = FUNC_14();
 VAR_13->results = &VAR_14;
 FUNC_8(VAR_13->curl, VAR_9->url, VAR_3,
   &VAR_16, VAR_7);
 FUNC_7(VAR_13->curl, VAR_2, VAR_17);
 FUNC_7(VAR_13->curl, VAR_1, &VAR_15);

 if (FUNC_17(VAR_13)) {
  FUNC_16(VAR_13);
  if (VAR_14.curl_result == VAR_0) {
   XML_Parser VAR_21 = FUNC_3(((void*)0));
   enum XML_Status VAR_22;
   VAR_18.name = FUNC_20(10, 1);
   VAR_18.len = 0;
   VAR_18.cdata = ((void*)0);
   VAR_18.userFunc = VAR_8;
   VAR_18.userData = &VAR_19;
   FUNC_6(VAR_21, &VAR_18);
   FUNC_5(VAR_21, VAR_12,
           VAR_11);
   VAR_22 = FUNC_2(VAR_21, VAR_15.buf,
        VAR_15.len, 1);
   FUNC_13(VAR_18.name);

   if (VAR_22 != VAR_6) {
    FUNC_12(VAR_10, "XML error: %s\n",
     FUNC_0(
      FUNC_1(VAR_21)));
    VAR_19 = 0;
   }
   FUNC_4(VAR_21);
   if (!VAR_19)
    FUNC_11("no DAV locking support on %s",
          VAR_9->url);

  } else {
   FUNC_11("Cannot access URL %s, return code %d",
         VAR_9->url, VAR_14.curl_result);
   VAR_19 = 0;
  }
 } else {
  FUNC_11("Unable to start PROPFIND request on %s", VAR_9->url);
 }

 FUNC_19(&VAR_16.buf);
 FUNC_19(&VAR_15);
 FUNC_10(VAR_17);

 return VAR_19;
}
