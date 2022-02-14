
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int *,int ,int ,char*) ;
 int * FUNC_1 (int *,int ,int ,int ,int,int ) ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 () ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 () ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static int
FUNC_6(void)
{
 int VAR_12;

 FUNC_4(&VAR_11, "pf rulesets");
 FUNC_5(&VAR_8, "pf ioctl");
 FUNC_5(&VAR_6, "pf end thread");

 FUNC_2();

 VAR_5 = FUNC_1(&VAR_4, 0, VAR_3, VAR_1, 0600, VAR_2);
 if (VAR_5 == ((void*)0))
  return (VAR_0);

 VAR_7 = 0;
 VAR_12 = FUNC_0(VAR_10, ((void*)0), &VAR_9, 0, 0, "pf purge");
 if (VAR_12 != 0)
  return (VAR_12);

 FUNC_3();

 return (0);
}
