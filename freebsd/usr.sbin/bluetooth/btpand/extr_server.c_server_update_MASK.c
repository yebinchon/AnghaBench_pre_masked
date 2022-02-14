
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_4 ;

void
FUNC_5(int VAR_5)
{

 if (VAR_3 == 0)
  return;

 FUNC_0("count %d", VAR_5);

 VAR_1 = VAR_0 - (VAR_5 - 1) * VAR_0 / VAR_3;
 FUNC_1("Service Availability: %d/%d", VAR_1, VAR_0);

 if (VAR_1 == 0 && VAR_2 != -1)
  FUNC_2();

 if (VAR_1 > 0 && VAR_2 == -1)
  FUNC_3();

 if (VAR_4)
  FUNC_4();
}
