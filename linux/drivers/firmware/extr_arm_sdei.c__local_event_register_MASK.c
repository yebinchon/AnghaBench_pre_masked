
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdei_registered_event {int dummy; } ;
struct sdei_crosscall_args {TYPE_1__* event; } ;
struct TYPE_2__ {int event_num; int private_registered; } ;


 int FUNC_0 (int ) ;
 struct sdei_registered_event* FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,struct sdei_registered_event*,int ,int ) ;
 int FUNC_4 (struct sdei_crosscall_args*,int) ;
 int VAR_0 ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(void *VAR_1)
{
 int VAR_2;
 struct sdei_registered_event *VAR_3;
 struct sdei_crosscall_args *VAR_4 = VAR_1;

 FUNC_0(FUNC_2());

 VAR_3 = FUNC_1(VAR_4->event->private_registered, FUNC_5());
 VAR_2 = FUNC_3(VAR_4->event->event_num, VAR_0,
          VAR_3, 0, 0);

 FUNC_4(VAR_4, VAR_2);
}
