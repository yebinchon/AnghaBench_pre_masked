
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct gb_connection {int hd_cport_id; int intf_cport_id; int name; TYPE_1__* intf; } ;
struct TYPE_2__ {int interface_id; } ;


 int FUNC_0 (int ,int,char*,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct gb_connection *VAR_0)
{
 u16 VAR_1 = VAR_0->hd_cport_id;
 u16 VAR_2 = 0;
 u8 VAR_3 = 0;

 if (VAR_0->intf) {
  VAR_3 = VAR_0->intf->interface_id;
  VAR_2 = VAR_0->intf_cport_id;
 }

 FUNC_0(VAR_0->name, sizeof(VAR_0->name),
   "%u/%u:%u", VAR_1, VAR_3, VAR_2);
}
