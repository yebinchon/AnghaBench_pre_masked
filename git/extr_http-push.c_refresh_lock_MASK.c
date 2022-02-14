
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slot_results {scalar_t__ curl_result; int http_code; } ;
struct remote_lock {int refreshing; int start_time; int url; } ;
struct curl_slist {int dummy; } ;
struct active_request_slot {int curl; struct slot_results* results; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,struct curl_slist*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct curl_slist*) ;
 int FUNC_3 (int ,char*,int ) ;
 struct active_request_slot* FUNC_4 () ;
 struct curl_slist* FUNC_5 (struct remote_lock*,int) ;
 int FUNC_6 (struct active_request_slot*) ;
 scalar_t__ FUNC_7 (struct active_request_slot*) ;
 int VAR_5 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct remote_lock *VAR_6)
{
 struct active_request_slot *VAR_7;
 struct slot_results VAR_8;
 struct curl_slist *VAR_9;
 int VAR_10 = 0;

 VAR_6->refreshing = 1;

 VAR_9 = FUNC_5(VAR_6, VAR_2 | VAR_3);

 VAR_7 = FUNC_4();
 VAR_7->results = &VAR_8;
 FUNC_1(VAR_7->curl, VAR_6->url, VAR_4);
 FUNC_0(VAR_7->curl, VAR_1, VAR_9);

 if (FUNC_7(VAR_7)) {
  FUNC_6(VAR_7);
  if (VAR_8.curl_result != VAR_0) {
   FUNC_3(VAR_5, "LOCK HTTP error %d\n",
    VAR_8.http_code);
  } else {
   VAR_6->start_time = FUNC_8(((void*)0));
   VAR_10 = 1;
  }
 }

 VAR_6->refreshing = 0;
 FUNC_2(VAR_9);

 return VAR_10;
}
