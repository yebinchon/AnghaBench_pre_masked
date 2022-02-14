
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gb_interface {TYPE_1__* control; } ;
struct gb_control_get_manifest_size_response {int size; } ;
struct gb_connection {TYPE_2__* intf; } ;
typedef int response ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct gb_connection* connection; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct gb_connection*,int ,int *,int ,struct gb_control_get_manifest_size_response*,int) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct gb_interface *VAR_1)
{
 struct gb_control_get_manifest_size_response VAR_2;
 struct gb_connection *VAR_3 = VAR_1->control->connection;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_0,
    ((void*)0), 0, &VAR_2, sizeof(VAR_2));
 if (VAR_4) {
  FUNC_0(&VAR_3->intf->dev,
   "failed to get manifest size: %d\n", VAR_4);
  return VAR_4;
 }

 return FUNC_2(VAR_2.size);
}
