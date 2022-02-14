
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;
 void* FUNC_1 (void*,char*) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (void*,char*,int) ;
 int VAR_0 ;

void FUNC_4(u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 void *VAR_4 = ((void*)0);

 FUNC_2("CPU clock-frequency <- 0x%x (%dMHz)\n\r", VAR_1, FUNC_0(VAR_1));
 FUNC_2("CPU timebase-frequency <- 0x%x (%dMHz)\n\r", VAR_2, FUNC_0(VAR_2));
 if (VAR_3 > 0)
  FUNC_2("CPU bus-frequency <- 0x%x (%dMHz)\n\r", VAR_3, FUNC_0(VAR_3));

 while ((VAR_4 = FUNC_1(VAR_4, "cpu"))) {
  FUNC_3(VAR_4, "clock-frequency", VAR_1);
  FUNC_3(VAR_4, "timebase-frequency", VAR_2);
  if (VAR_3 > 0)
   FUNC_3(VAR_4, "bus-frequency", VAR_3);
 }

 VAR_0 = 1000000000 / VAR_2;
}
