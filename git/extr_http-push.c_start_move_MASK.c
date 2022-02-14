
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transfer_request {char* dest; int url; int state; struct active_request_slot* slot; } ;
struct curl_slist {int dummy; } ;
struct active_request_slot {int curl; struct transfer_request* callback_data; int callback_func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,struct curl_slist*) ;
 int FUNC_2 (int ,int ,int ) ;
 struct curl_slist* FUNC_3 (struct curl_slist*,char*) ;
 struct active_request_slot* FUNC_4 () ;
 struct curl_slist* FUNC_5 () ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (struct active_request_slot*) ;

__attribute__((used)) static void FUNC_7(struct transfer_request *VAR_5)
{
 struct active_request_slot *VAR_6;
 struct curl_slist *VAR_7 = FUNC_5();

 VAR_6 = FUNC_4();
 VAR_6->callback_func = VAR_4;
 VAR_6->callback_data = VAR_5;
 FUNC_2(VAR_6->curl, VAR_5->url, VAR_2);
 VAR_7 = FUNC_3(VAR_7, VAR_5->dest);
 VAR_7 = FUNC_3(VAR_7, "Overwrite: T");
 FUNC_1(VAR_6->curl, VAR_1, VAR_7);

 if (FUNC_6(VAR_6)) {
  VAR_5->slot = VAR_6;
  VAR_5->state = VAR_3;
 } else {
  VAR_5->state = VAR_0;
  FUNC_0(VAR_5->url);
 }
}
