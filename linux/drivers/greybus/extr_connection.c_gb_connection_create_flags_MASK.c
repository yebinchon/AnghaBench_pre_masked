
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gb_interface {int hd; } ;
struct gb_connection {int dummy; } ;
struct gb_bundle {struct gb_interface* intf; } ;
typedef int gb_request_handler_t ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 struct gb_connection* FUNC_1 (int ,int,struct gb_interface*,struct gb_bundle*,int ,int ,unsigned long) ;

struct gb_connection *
FUNC_2(struct gb_bundle *VAR_1, u16 VAR_2,
      gb_request_handler_t VAR_3,
      unsigned long VAR_4)
{
 struct gb_interface *VAR_5 = VAR_1->intf;

 if (FUNC_0(VAR_4 & VAR_0))
  VAR_4 &= ~VAR_0;

 return FUNC_1(VAR_5->hd, -1, VAR_5, VAR_1, VAR_2,
         VAR_3, VAR_4);
}
