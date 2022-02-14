
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* message_cb_payload; void* error_cb; void* progress_cb; } ;
typedef TYPE_1__ transport_local ;
typedef void* git_transport_message_cb ;
typedef int git_transport_certificate_check_cb ;
typedef int git_transport ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(
 git_transport *VAR_0,
 git_transport_message_cb VAR_1,
 git_transport_message_cb VAR_2,
 git_transport_certificate_check_cb VAR_3,
 void *VAR_4)
{
 transport_local *VAR_5 = (transport_local *)VAR_0;

 FUNC_0(VAR_3);

 VAR_5->progress_cb = VAR_1;
 VAR_5->error_cb = VAR_2;
 VAR_5->message_cb_payload = VAR_4;

 return 0;
}
