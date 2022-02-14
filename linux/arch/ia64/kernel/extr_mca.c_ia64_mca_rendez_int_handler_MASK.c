
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ia64_mca_notify_die {int* monarch_cpu; int * sos; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int * imi_rendez_checkin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,long,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_1__ VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int VAR_7 ;
 int FUNC_6 () ;

__attribute__((used)) static irqreturn_t
FUNC_7(int VAR_8, void *VAR_9)
{
 unsigned long VAR_10;
 int VAR_11 = FUNC_6();
 struct ia64_mca_notify_die VAR_12 =
  { .sos = ((void*)0), .monarch_cpu = &VAR_7 };


 FUNC_5(VAR_10);

 FUNC_0(VAR_0, FUNC_2(), (long)&VAR_12, 1);

 VAR_6.imi_rendez_checkin[VAR_11] = VAR_3;



 FUNC_3();

 FUNC_0(VAR_2, FUNC_2(), (long)&VAR_12, 1);


 while (VAR_7 != -1)
        FUNC_1();

 FUNC_0(VAR_1, FUNC_2(), (long)&VAR_12, 1);

 VAR_6.imi_rendez_checkin[VAR_11] = VAR_4;

 FUNC_4(VAR_10);
 return VAR_5;
}
