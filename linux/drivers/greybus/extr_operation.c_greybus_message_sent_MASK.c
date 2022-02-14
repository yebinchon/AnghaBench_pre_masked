
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_operation {int work; int type; struct gb_message* response; struct gb_connection* connection; } ;
struct gb_message {struct gb_operation* operation; } ;
struct gb_host_device {int dummy; } ;
struct gb_connection {int name; TYPE_1__* hd; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ,int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct gb_operation*) ;
 int FUNC_2 (struct gb_operation*) ;
 int FUNC_3 (struct gb_operation*) ;
 scalar_t__ FUNC_4 (struct gb_operation*,int) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct gb_host_device *VAR_1,
     struct gb_message *VAR_2, int VAR_3)
{
 struct gb_operation *VAR_4 = VAR_2->operation;
 struct gb_connection *VAR_5 = VAR_4->connection;
 if (VAR_2 == VAR_4->response) {
  if (VAR_3) {
   FUNC_0(&VAR_5->hd->dev,
    "%s: error sending response 0x%02x: %d\n",
    VAR_5->name, VAR_4->type, VAR_3);
  }

  FUNC_3(VAR_4);
  FUNC_2(VAR_4);
 } else if (VAR_3 || FUNC_1(VAR_4)) {
  if (FUNC_4(VAR_4, VAR_3)) {
   FUNC_5(VAR_0,
       &VAR_4->work);
  }
 }
}
