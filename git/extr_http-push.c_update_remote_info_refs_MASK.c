
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slot_results {scalar_t__ curl_result; int http_code; } ;
struct remote_lock {int url; } ;
struct curl_slist {int dummy; } ;
struct buffer {int buf; int member_1; int member_0; } ;
struct active_request_slot {int curl; struct slot_results* results; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,struct curl_slist*) ;
 int FUNC_1 (int ,int ,int ,struct buffer*,int ) ;
 int FUNC_2 (int ,char*,scalar_t__,int ) ;
 int VAR_9 ;
 struct active_request_slot* FUNC_3 () ;
 struct curl_slist* FUNC_4 (struct remote_lock*,int ) ;
 int FUNC_5 (char*,int,int ,int *) ;
 int FUNC_6 (struct active_request_slot*) ;
 scalar_t__ FUNC_7 (struct active_request_slot*) ;
 int VAR_10 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct remote_lock *VAR_11)
{
 struct buffer VAR_12 = { VAR_6, 0 };
 struct active_request_slot *VAR_13;
 struct slot_results VAR_14;
 struct curl_slist *VAR_15;

 FUNC_5("refs/", (VAR_4 | VAR_5),
    VAR_8, &VAR_12.buf);
 if (!VAR_7) {
  VAR_15 = FUNC_4(VAR_11, VAR_2);

  VAR_13 = FUNC_3();
  VAR_13->results = &VAR_14;
  FUNC_1(VAR_13->curl, VAR_11->url, VAR_3,
    &VAR_12, VAR_9);
  FUNC_0(VAR_13->curl, VAR_1, VAR_15);

  if (FUNC_7(VAR_13)) {
   FUNC_6(VAR_13);
   if (VAR_14.curl_result != VAR_0) {
    FUNC_2(VAR_10,
     "PUT error: curl result=%ld, HTTP code=%d\n",
     VAR_14.curl_result, VAR_14.http_code);
   }
  }
 }
 FUNC_8(&VAR_12.buf);
}
