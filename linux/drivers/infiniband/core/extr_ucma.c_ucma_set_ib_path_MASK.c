
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ucma_context {TYPE_1__* cm_id; } ;
struct sa_path_rec {int event; int rec_type; } ;
struct rdma_cm_event {int event; int rec_type; } ;
struct ib_path_rec_data {int flags; int path_rec; } ;
typedef int sa_path ;
struct TYPE_3__ {int port_num; int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct sa_path_rec*) ;
 int FUNC_1 (struct sa_path_rec*,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,struct sa_path_rec*) ;
 int FUNC_4 (struct sa_path_rec*,struct sa_path_rec*) ;
 int FUNC_5 (TYPE_1__*,struct sa_path_rec*) ;

__attribute__((used)) static int FUNC_6(struct ucma_context *VAR_6,
       struct ib_path_rec_data *VAR_7, size_t VAR_8)
{
 struct sa_path_rec VAR_9;
 struct rdma_cm_event VAR_10;
 int VAR_11;

 if (VAR_8 % sizeof(*VAR_7))
  return -VAR_0;

 for (; VAR_8; VAR_8 -= sizeof(*VAR_7), VAR_7++) {
  if (VAR_7->flags == (VAR_2 | VAR_3 |
      VAR_1))
   break;
 }

 if (!VAR_8)
  return -VAR_0;

 if (!VAR_6->cm_id->device)
  return -VAR_0;

 FUNC_1(&VAR_9, 0, sizeof(VAR_9));

 VAR_9.rec_type = VAR_5;
 FUNC_0(VAR_7->path_rec, &VAR_9);

 if (FUNC_2(VAR_6->cm_id->device, VAR_6->cm_id->port_num)) {
  struct sa_path_rec VAR_12;

  FUNC_4(&VAR_12, &VAR_9);
  VAR_11 = FUNC_3(VAR_6->cm_id, &VAR_12);
 } else {
  VAR_11 = FUNC_3(VAR_6->cm_id, &VAR_9);
 }
 if (VAR_11)
  return VAR_11;

 FUNC_1(&VAR_10, 0, sizeof VAR_10);
 VAR_10.event = VAR_4;
 return FUNC_5(VAR_6->cm_id, &VAR_10);
}
