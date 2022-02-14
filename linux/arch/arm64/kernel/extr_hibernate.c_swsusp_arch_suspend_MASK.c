
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sleep_stack_data {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sleep_stack_data*) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ VAR_10 ;
 int FUNC_9 (unsigned long) ;
 unsigned long FUNC_10 () ;
 int FUNC_11 (char*) ;
 int VAR_11 ;
 int FUNC_12 () ;
 int FUNC_13 () ;

int FUNC_14(void)
{
 int VAR_12 = 0;
 unsigned long VAR_13;
 struct sleep_stack_data VAR_14;

 if (FUNC_4()) {
  FUNC_11("Can't hibernate: no mechanism to offline secondary CPUs.\n");
  return -VAR_0;
 }

 VAR_13 = FUNC_10();

 if (FUNC_0(&VAR_14)) {

  FUNC_6();

  VAR_11 = FUNC_12();
  VAR_12 = FUNC_13();
 } else {

  FUNC_7(VAR_9, VAR_8);
  FUNC_7(VAR_7, VAR_6);


  if (FUNC_8()) {
   FUNC_7(VAR_3, VAR_2);
   FUNC_7(VAR_5, VAR_4);
  }


  FUNC_5();





  VAR_10 = 0;

  VAR_11 = -VAR_1;
  FUNC_1();






  switch (FUNC_2()) {
  case 129:
  case 128:
   FUNC_3(1);
  }
 }

 FUNC_9(VAR_13);

 return VAR_12;
}
