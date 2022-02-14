
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct active_request_slot {int* finished; int callback_data; int (* callback_func ) (int ) ;TYPE_1__* results; int curl; scalar_t__ http_code; int curl_result; } ;
struct TYPE_2__ {scalar_t__ http_connectcode; scalar_t__ auth_avail; scalar_t__ http_code; int curl_result; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct active_request_slot*) ;
 int FUNC_1 (int ,int ,scalar_t__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct active_request_slot *VAR_3)
{
 FUNC_0(VAR_3);
 FUNC_1(VAR_3->curl, VAR_1, &VAR_3->http_code);

 if (VAR_3->finished != ((void*)0))
  (*VAR_3->finished) = 1;


 if (VAR_3->results != ((void*)0)) {
  VAR_3->results->curl_result = VAR_3->curl_result;
  VAR_3->results->http_code = VAR_3->http_code;




  VAR_3->results->auth_avail = 0;


  FUNC_1(VAR_3->curl, VAR_2,
   &VAR_3->results->http_connectcode);
 }


 if (VAR_3->callback_func != ((void*)0))
  VAR_3->callback_func(VAR_3->callback_data);
}
