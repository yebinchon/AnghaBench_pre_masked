
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rxe_dev {int ib_dev; } ;
struct TYPE_2__ {int port_num; } ;
struct ib_event {int event; TYPE_1__ element; int * device; } ;
typedef enum ib_event_type { ____Placeholder_ib_event_type } ib_event_type ;


 int FUNC_0 (struct ib_event*) ;

__attribute__((used)) static void FUNC_1(struct rxe_dev *VAR_0,
      enum ib_event_type VAR_1)
{
 struct ib_event VAR_2;

 VAR_2.device = &VAR_0->ib_dev;
 VAR_2.element.port_num = 1;
 VAR_2.event = VAR_1;

 FUNC_0(&VAR_2);
}
