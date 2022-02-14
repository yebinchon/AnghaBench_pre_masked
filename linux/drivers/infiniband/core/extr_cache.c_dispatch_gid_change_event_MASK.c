
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int port_num; } ;
struct ib_event {int event; TYPE_1__ element; struct ib_device* device; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_event*) ;

__attribute__((used)) static void FUNC_1(struct ib_device *VAR_1, u8 VAR_2)
{
 struct ib_event VAR_3;

 VAR_3.device = VAR_1;
 VAR_3.element.port_num = VAR_2;
 VAR_3.event = VAR_0;

 FUNC_0(&VAR_3);
}
