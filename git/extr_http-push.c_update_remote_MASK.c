
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slot_results {scalar_t__ curl_result; int http_code; } ;
struct remote_lock {int url; } ;
struct object_id {int dummy; } ;
struct curl_slist {int dummy; } ;
struct buffer {int buf; int member_1; int member_0; } ;
struct active_request_slot {int curl; struct slot_results* results; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,struct curl_slist*) ;
 int FUNC_1 (int ,int ,int ,struct buffer*,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_5 ;
 struct active_request_slot* FUNC_3 () ;
 struct curl_slist* FUNC_4 (struct remote_lock*,int ) ;
 int FUNC_5 (struct object_id const*) ;
 int FUNC_6 (struct active_request_slot*) ;
 scalar_t__ FUNC_7 (struct active_request_slot*) ;
 int VAR_6 ;
 int FUNC_8 (int *,char*,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(const struct object_id *VAR_7, struct remote_lock *VAR_8)
{
 struct active_request_slot *VAR_9;
 struct slot_results VAR_10;
 struct buffer VAR_11 = { VAR_4, 0 };
 struct curl_slist *VAR_12;

 VAR_12 = FUNC_4(VAR_8, VAR_2);

 FUNC_8(&VAR_11.buf, "%s\n", FUNC_5(VAR_7));

 VAR_9 = FUNC_3();
 VAR_9->results = &VAR_10;
 FUNC_1(VAR_9->curl, VAR_8->url, VAR_3,
   &VAR_11, VAR_5);
 FUNC_0(VAR_9->curl, VAR_1, VAR_12);

 if (FUNC_7(VAR_9)) {
  FUNC_6(VAR_9);
  FUNC_9(&VAR_11.buf);
  if (VAR_10.curl_result != VAR_0) {
   FUNC_2(VAR_6,
    "PUT error: curl result=%ld, HTTP code=%d\n",
    VAR_10.curl_result, VAR_10.http_code);

   return 0;
  }
 } else {
  FUNC_9(&VAR_11.buf);
  FUNC_2(VAR_6, "Unable to start PUT request\n");
  return 0;
 }

 return 1;
}
