
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tsockaddr {int sa_family; } ;
struct TYPE_5__ {scalar_t__ tv_usec; int tv_sec; } ;
struct itimerval {TYPE_1__ it_value; TYPE_1__ it_interval; } ;
struct TYPE_7__ {void* id_num; struct tsockaddr addr; } ;
struct TYPE_6__ {int sin_family; } ;
typedef int CTL_RESPONSE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,TYPE_3__,int ,int *) ;
 char* VAR_5 ;
 int FUNC_4 () ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (int,int) ;
 int VAR_10 ;
 int FUNC_8 (char*) ;
 TYPE_3__ VAR_11 ;
 TYPE_2__ VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (char*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_10 (int ,struct itimerval*,struct itimerval*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int VAR_16 ;
 int FUNC_13 () ;

void
FUNC_14(void)
{
 int VAR_17;
 struct itimerval VAR_18;
 CTL_RESPONSE VAR_19;

 VAR_18.it_value.tv_sec = VAR_3;
 VAR_18.it_value.tv_usec = 0;
 VAR_18.it_interval = VAR_18.it_value;
 if (FUNC_7(VAR_16, 5) != 0)
  FUNC_9("Error on attempt to listen for caller");

 VAR_11.addr = *(struct tsockaddr *)&VAR_12;
 VAR_11.addr.sa_family = FUNC_6(VAR_12.sin_family);
 VAR_11.id_num = FUNC_5(-1);
 VAR_8 = 1;
 FUNC_1();




 FUNC_4();
 FUNC_10(VAR_2, &VAR_18, (struct itimerval *)0);
 FUNC_8("Waiting for your party to respond");
 FUNC_12(VAR_4, VAR_14);
 (void) FUNC_11(VAR_9);
 while ((VAR_17 = FUNC_0(VAR_16, 0, 0)) < 0) {
  if (VAR_6 == VAR_1)
   continue;
  FUNC_9("Unable to connect with your party");
 }
 FUNC_2(VAR_16);
 VAR_16 = VAR_17;





 VAR_5 = "Waiting for your party to respond";
 FUNC_13();

 VAR_11.id_num = FUNC_5(VAR_10);
 FUNC_3(VAR_13, VAR_11, VAR_0, &VAR_19);
 VAR_11.id_num = FUNC_5(VAR_15);
 FUNC_3(VAR_7, VAR_11, VAR_0, &VAR_19);
 VAR_8 = 0;
}
