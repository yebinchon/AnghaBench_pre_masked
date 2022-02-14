
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_update_work {int enforce_security; int work; int port_num; int device; } ;
struct ib_event_handler {int dummy; } ;
struct TYPE_2__ {int port_num; } ;
struct ib_event {scalar_t__ event; TYPE_1__ element; int device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 struct ib_update_work* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct ib_event_handler *VAR_9,
      struct ib_event *VAR_10)
{
 struct ib_update_work *VAR_11;

 if (VAR_10->event == VAR_6 ||
     VAR_10->event == VAR_5 ||
     VAR_10->event == VAR_3 ||
     VAR_10->event == VAR_4 ||
     VAR_10->event == VAR_1 ||
     VAR_10->event == VAR_2) {
  VAR_11 = FUNC_1(sizeof *VAR_11, VAR_0);
  if (VAR_11) {
   FUNC_0(&VAR_11->work, VAR_7);
   VAR_11->device = VAR_10->device;
   VAR_11->port_num = VAR_10->element.port_num;
   if (VAR_10->event == VAR_4 ||
       VAR_10->event == VAR_2)
    VAR_11->enforce_security = 1;
   else
    VAR_11->enforce_security = 0;

   FUNC_2(VAR_8, &VAR_11->work);
  }
 }
}
