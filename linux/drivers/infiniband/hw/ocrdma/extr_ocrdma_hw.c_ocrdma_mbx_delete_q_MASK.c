
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ocrdma_queue_info {int created; int id; } ;
struct TYPE_2__ {int netdev; } ;
struct ocrdma_dev {TYPE_1__ nic_info; struct ocrdma_delete_q_req* mbx_cmd; } ;
struct ocrdma_delete_q_req {int id; int req; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_1 (int ,struct ocrdma_delete_q_req*,int,int *,int *) ;
 int FUNC_2 (struct ocrdma_delete_q_req*,int ,int) ;
 int FUNC_3 (int *,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct ocrdma_dev *VAR_4,
          struct ocrdma_queue_info *VAR_5, int VAR_6)
{
 u8 VAR_7 = 0;
 int VAR_8;
 struct ocrdma_delete_q_req *VAR_9 = VAR_4->mbx_cmd;

 switch (VAR_6) {
 case 128:
  VAR_7 = VAR_2;
  break;
 case 130:
  VAR_7 = VAR_0;
  break;
 case 129:
  VAR_7 = VAR_1;
  break;
 default:
  FUNC_0();
 }
 FUNC_2(VAR_9, 0, sizeof(*VAR_9));
 FUNC_3(&VAR_9->req, VAR_7, VAR_3, sizeof(*VAR_9));
 VAR_9->id = VAR_5->id;

 VAR_8 = FUNC_1(VAR_4->nic_info.netdev,
     VAR_9, sizeof(*VAR_9), ((void*)0), ((void*)0));
 if (!VAR_8)
  VAR_5->created = 0;
 return VAR_8;
}
