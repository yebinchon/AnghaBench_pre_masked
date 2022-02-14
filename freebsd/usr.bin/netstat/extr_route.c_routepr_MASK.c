
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*,int*,size_t*,int *,int ) ;
 int VAR_4 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*) ;

void
FUNC_8(int VAR_5, int VAR_6)
{
 size_t VAR_7;
 int VAR_8;

 if (VAR_3 == 0)
  return;

 VAR_7 = sizeof(int);
 if (VAR_5 == -1 &&
     FUNC_4("net.my_fibnum", &VAR_5, &VAR_7, ((void*)0), 0) == -1)
  VAR_5 = 0;
 if (FUNC_4("net.fibs", &VAR_8, &VAR_7, ((void*)0), 0) == -1)
  VAR_8 = 1;
 if (VAR_5 < 0 || VAR_5 > VAR_8 - 1)
  FUNC_2(VAR_2, "%d: invalid fib", VAR_5);





 if (FUNC_0(VAR_0, &VAR_4) < 0)
  FUNC_1(VAR_1, "clock_gettime() failed");

 FUNC_7("route-information");
 FUNC_6("{T:Routing tables}");
 if (VAR_5)
  FUNC_6(" ({L:fib}: {:fib/%d})", VAR_5);
 FUNC_6("\n");
 FUNC_3(VAR_5, VAR_6);
 FUNC_5("route-information");
}
