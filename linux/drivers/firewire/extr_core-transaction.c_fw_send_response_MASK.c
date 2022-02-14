
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fw_request {scalar_t__ ack; int response; int * request_header; int * data; } ;
struct fw_card {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* send_response ) (struct fw_card*,int *) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,char*) ;
 int FUNC_2 (int *,int *,int,int *,int ) ;
 int FUNC_3 (struct fw_request*) ;
 int FUNC_4 (struct fw_request*) ;
 int FUNC_5 (struct fw_card*,int *) ;

void FUNC_6(struct fw_card *VAR_2,
        struct fw_request *VAR_3, int VAR_4)
{
 if (FUNC_1(!VAR_3, "invalid for FCP address handlers"))
  return;


 if (VAR_3->ack != VAR_0 ||
     FUNC_0(VAR_3->request_header[0])) {
  FUNC_4(VAR_3);
  return;
 }

 if (VAR_4 == VAR_1)
  FUNC_2(&VAR_3->response, VAR_3->request_header,
     VAR_4, VAR_3->data,
     FUNC_3(VAR_3));
 else
  FUNC_2(&VAR_3->response, VAR_3->request_header,
     VAR_4, ((void*)0), 0);

 VAR_2->driver->send_response(VAR_2, &VAR_3->response);
}
