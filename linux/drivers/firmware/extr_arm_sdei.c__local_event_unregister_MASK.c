
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdei_crosscall_args {TYPE_1__* event; } ;
struct TYPE_2__ {int event_num; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sdei_crosscall_args*,int) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 int VAR_1;
 struct sdei_crosscall_args *VAR_2 = VAR_0;

 FUNC_0(FUNC_1());

 VAR_1 = FUNC_2(VAR_2->event->event_num);

 FUNC_3(VAR_2, VAR_1);
}
