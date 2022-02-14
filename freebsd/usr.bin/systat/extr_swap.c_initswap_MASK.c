
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

int
FUNC_6(void)
{
 static int VAR_13 = 0;

 if (VAR_13)
  return (1);

 VAR_3 = FUNC_3(&VAR_4, &VAR_1);
 VAR_11 = FUNC_4();

 if ((VAR_7 = FUNC_5(VAR_5, VAR_6, VAR_0, 0)) < 0) {
  FUNC_2("systat: kvm_getswapinfo failed");
  return (0);
 }
 VAR_9 = VAR_7;

 FUNC_0();
 VAR_8 = VAR_2;
 VAR_10 = VAR_12;

 VAR_13 = 1;

 FUNC_1(12);

 return (1);
}
