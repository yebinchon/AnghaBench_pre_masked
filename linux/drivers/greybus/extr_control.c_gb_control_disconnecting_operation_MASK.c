
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct gb_operation {TYPE_1__* request; } ;
struct gb_control_disconnecting_request {int cport_id; } ;
struct gb_control {int dev; int connection; } ;
struct TYPE_2__ {struct gb_control_disconnecting_request* payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 struct gb_operation* FUNC_2 (int ,int ,int,int ,int ,int ) ;
 int FUNC_3 (struct gb_operation*) ;
 int FUNC_4 (struct gb_operation*) ;

int FUNC_5(struct gb_control *VAR_3,
           u16 VAR_4)
{
 struct gb_control_disconnecting_request *VAR_5;
 struct gb_operation *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_3->connection,
          VAR_1,
          sizeof(*VAR_5), 0, 0,
          VAR_2);
 if (!VAR_6)
  return -VAR_0;

 VAR_5 = VAR_6->request->payload;
 VAR_5->cport_id = FUNC_0(VAR_4);

 VAR_7 = FUNC_4(VAR_6);
 if (VAR_7) {
  FUNC_1(&VAR_3->dev, "failed to send disconnecting: %d\n",
   VAR_7);
 }

 FUNC_3(VAR_6);

 return VAR_7;
}
