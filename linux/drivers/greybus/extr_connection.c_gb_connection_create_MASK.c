
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gb_interface {int hd; } ;
struct gb_connection {int dummy; } ;
struct gb_bundle {struct gb_interface* intf; } ;
typedef int gb_request_handler_t ;


 struct gb_connection* FUNC_0 (int ,int,struct gb_interface*,struct gb_bundle*,int ,int ,int ) ;

struct gb_connection *
FUNC_1(struct gb_bundle *VAR_0, u16 VAR_1,
       gb_request_handler_t VAR_2)
{
 struct gb_interface *VAR_3 = VAR_0->intf;

 return FUNC_0(VAR_3->hd, -1, VAR_3, VAR_0, VAR_1,
         VAR_2, 0);
}
