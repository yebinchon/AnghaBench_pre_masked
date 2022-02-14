
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xml_ctx {char* name; struct remote_ls_ctx* userData; int userFunc; int * cdata; scalar_t__ len; } ;
struct strbuf {int len; int buf; } ;
struct slot_results {scalar_t__ curl_result; } ;
struct remote_ls_ctx {int flags; char* path; void (* userFunc ) (struct remote_ls_ctx*) ;void* userData; scalar_t__ dentry_flags; int * dentry_name; } ;
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
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,struct xml_ctx*) ;
 int FUNC_8 (int ,int ,struct strbuf*) ;
 int FUNC_9 (int ,char*,int ,struct buffer*,int ) ;
 struct strbuf* FUNC_10 (struct strbuf*,char*) ;
 int FUNC_11 (struct strbuf*) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (char*) ;
 int VAR_7 ;
 struct active_request_slot* FUNC_14 () ;
 int VAR_8 ;
 struct strbuf* FUNC_15 () ;
 TYPE_1__* VAR_9 ;
 int FUNC_16 (struct active_request_slot*) ;
 scalar_t__ FUNC_17 (struct active_request_slot*) ;
 int VAR_10 ;
 int FUNC_18 (struct strbuf*,int ) ;
 int FUNC_19 (struct strbuf*) ;
 char* FUNC_20 (int,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 char* FUNC_21 (char const*) ;
 char* FUNC_22 (char*,int ,char const*) ;

__attribute__((used)) static void FUNC_23(const char *VAR_14, int VAR_15,
        void (*VAR_16)(struct remote_ls_ctx *VAR_17),
        void *VAR_18)
{
 char *VAR_19 = FUNC_22("%s%s", VAR_9->url, VAR_14);
 struct active_request_slot *VAR_20;
 struct slot_results VAR_21;
 struct strbuf VAR_22 = VAR_5;
 struct buffer VAR_23 = { VAR_5, 0 };
 struct curl_slist *VAR_24 = FUNC_15();
 struct xml_ctx VAR_25;
 struct remote_ls_ctx VAR_26;

 VAR_26.flags = VAR_15;
 VAR_26.path = FUNC_21(VAR_14);
 VAR_26.dentry_name = ((void*)0);
 VAR_26.dentry_flags = 0;
 VAR_26.userData = VAR_18;
 VAR_26.userFunc = VAR_16;

 FUNC_18(&VAR_23.buf, VAR_4);

 VAR_24 = FUNC_10(VAR_24, "Depth: 1");
 VAR_24 = FUNC_10(VAR_24, "Content-Type: text/xml");

 VAR_20 = FUNC_14();
 VAR_20->results = &VAR_21;
 FUNC_9(VAR_20->curl, VAR_19, VAR_3,
   &VAR_23, VAR_7);
 FUNC_8(VAR_20->curl, VAR_2, VAR_24);
 FUNC_8(VAR_20->curl, VAR_1, &VAR_22);

 if (FUNC_17(VAR_20)) {
  FUNC_16(VAR_20);
  if (VAR_21.curl_result == VAR_0) {
   XML_Parser VAR_27 = FUNC_3(((void*)0));
   enum XML_Status VAR_28;
   VAR_25.name = FUNC_20(10, 1);
   VAR_25.len = 0;
   VAR_25.cdata = ((void*)0);
   VAR_25.userFunc = VAR_8;
   VAR_25.userData = &VAR_26;
   FUNC_7(VAR_27, &VAR_25);
   FUNC_6(VAR_27, VAR_13,
           VAR_12);
   FUNC_5(VAR_27, VAR_11);
   VAR_28 = FUNC_2(VAR_27, VAR_22.buf,
        VAR_22.len, 1);
   FUNC_13(VAR_25.name);

   if (VAR_28 != VAR_6) {
    FUNC_12(VAR_10, "XML error: %s\n",
     FUNC_0(
      FUNC_1(VAR_27)));
   }
   FUNC_4(VAR_27);
  }
 } else {
  FUNC_12(VAR_10, "Unable to start PROPFIND request\n");
 }

 FUNC_13(VAR_26.path);
 FUNC_13(VAR_19);
 FUNC_19(&VAR_23.buf);
 FUNC_19(&VAR_22);
 FUNC_11(VAR_24);
}
