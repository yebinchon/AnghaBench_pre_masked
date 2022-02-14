
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmb_request_elem {int list; int request; } ;
struct ipmb_msg {int dummy; } ;
struct ipmb_dev {int wait_queue; int request_queue_len; int request_queue; int request; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 struct ipmb_request_elem* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ipmb_dev *VAR_2)
{
 struct ipmb_request_elem *VAR_3;

 if (FUNC_1(&VAR_2->request_queue_len) >=
   VAR_1)
  return;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return;

 FUNC_4(&VAR_3->request, &VAR_2->request,
  sizeof(struct ipmb_msg));
 FUNC_3(&VAR_3->list, &VAR_2->request_queue);
 FUNC_0(&VAR_2->request_queue_len);
 FUNC_5(&VAR_2->wait_queue);
}
