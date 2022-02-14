
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slot_results {scalar_t__ curl_result; int http_code; } ;
struct remote_lock {struct remote_lock* token; struct remote_lock* url; struct remote_lock* owner; struct remote_lock* next; } ;
struct curl_slist {int dummy; } ;
struct active_request_slot {int curl; struct slot_results* results; } ;
struct TYPE_2__ {struct remote_lock* locks; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,struct curl_slist*) ;
 int FUNC_1 (int ,struct remote_lock*,int ) ;
 int FUNC_2 (struct curl_slist*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct remote_lock*) ;
 struct active_request_slot* FUNC_5 () ;
 struct curl_slist* FUNC_6 (struct remote_lock*,int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_7 (struct active_request_slot*) ;
 scalar_t__ FUNC_8 (struct active_request_slot*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_9(struct remote_lock *VAR_6)
{
 struct active_request_slot *VAR_7;
 struct slot_results VAR_8;
 struct remote_lock *VAR_9 = VAR_4->locks;
 struct curl_slist *VAR_10;
 int VAR_11 = 0;

 VAR_10 = FUNC_6(VAR_6, VAR_2);

 VAR_7 = FUNC_5();
 VAR_7->results = &VAR_8;
 FUNC_1(VAR_7->curl, VAR_6->url, VAR_3);
 FUNC_0(VAR_7->curl, VAR_1, VAR_10);

 if (FUNC_8(VAR_7)) {
  FUNC_7(VAR_7);
  if (VAR_8.curl_result == VAR_0)
   VAR_11 = 1;
  else
   FUNC_3(VAR_5, "UNLOCK HTTP error %d\n",
    VAR_8.http_code);
 } else {
  FUNC_3(VAR_5, "Unable to start UNLOCK request\n");
 }

 FUNC_2(VAR_10);

 if (VAR_4->locks == VAR_6) {
  VAR_4->locks = VAR_6->next;
 } else {
  while (VAR_9 && VAR_9->next != VAR_6)
   VAR_9 = VAR_9->next;
  if (VAR_9)
   VAR_9->next = VAR_6->next;
 }

 FUNC_4(VAR_6->owner);
 FUNC_4(VAR_6->url);
 FUNC_4(VAR_6->token);
 FUNC_4(VAR_6);

 return VAR_11;
}
