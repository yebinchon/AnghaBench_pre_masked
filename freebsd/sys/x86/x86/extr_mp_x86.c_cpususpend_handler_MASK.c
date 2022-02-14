
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_4__ {int (* cpu_resume ) () ;} ;
struct TYPE_3__ {int sp_fpususpend; int sp_pcb; } ;


 int FUNC_0 (size_t,int *) ;
 int FUNC_1 (size_t,int *) ;
 int FUNC_2 (size_t,int *) ;
 int VAR_0 ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 () ;
 int VAR_3 ;
 scalar_t__ FUNC_17 (int *) ;
 int VAR_4 ;
 int FUNC_18 () ;
 int VAR_5 ;
 TYPE_1__** VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 () ;

void
FUNC_22(void)
{
 u_int VAR_11;

 FUNC_13(&VAR_4, VAR_0);

 VAR_11 = FUNC_3(VAR_2);
 if (FUNC_17(&VAR_6[VAR_11]->sp_pcb)) {

  FUNC_6(VAR_6[VAR_11]->sp_fpususpend);
  FUNC_2(VAR_11, &VAR_5);
  FUNC_2(VAR_11, &VAR_3);







  FUNC_21();
 } else {

  FUNC_5(VAR_6[VAR_11]->sp_fpususpend);



  FUNC_16();
  FUNC_8();
  FUNC_4(VAR_8, 0);
  FUNC_4(VAR_7, VAR_9);


  FUNC_0(VAR_11, &VAR_5);
 }


 while (!FUNC_1(VAR_11, &VAR_10))
  FUNC_7();


 FUNC_19();






 if (VAR_1.cpu_resume)
  VAR_1.cpu_resume();

 if (&FUNC_20)
  FUNC_20();



 FUNC_11();
 FUNC_12();
 FUNC_10(0);


 FUNC_0(VAR_11, &VAR_3);
 FUNC_0(VAR_11, &VAR_5);
 FUNC_0(VAR_11, &VAR_10);
}
