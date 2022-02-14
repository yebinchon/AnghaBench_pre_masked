
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct gb_interface {int interface_id; } ;
struct gb_host_device {int dev; TYPE_1__* svc; } ;
struct gb_connection {int name; struct gb_host_device* hd; int intf_cport_id; int hd_cport_id; struct gb_interface* intf; } ;
struct TYPE_2__ {int ap_intf_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ,int) ;
 scalar_t__ FUNC_1 (struct gb_connection*) ;
 scalar_t__ FUNC_2 (struct gb_connection*) ;
 scalar_t__ FUNC_3 (struct gb_connection*) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct gb_connection *VAR_3)
{
 struct gb_host_device *VAR_4 = VAR_3->hd;
 struct gb_interface *VAR_5;
 u8 VAR_6;
 int VAR_7;

 if (FUNC_3(VAR_3))
  return 0;

 VAR_5 = VAR_3->intf;




 VAR_6 = VAR_1;
 if (FUNC_2(VAR_3)) {
  VAR_6 |= VAR_0;
 } else if (FUNC_1(VAR_3)) {
  VAR_6 |= VAR_0 |
    VAR_2;
 }

 VAR_7 = FUNC_4(VAR_4->svc,
           VAR_4->svc->ap_intf_id,
           VAR_3->hd_cport_id,
           VAR_5->interface_id,
           VAR_3->intf_cport_id,
           VAR_6);
 if (VAR_7) {
  FUNC_0(&VAR_3->hd->dev,
   "%s: failed to create svc connection: %d\n",
   VAR_3->name, VAR_7);
  return VAR_7;
 }

 return 0;
}
