
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;
 void* FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*,int,int) ;
 int FUNC_3 (void*,char*,int) ;

void FUNC_4(const char *VAR_0, u32 VAR_1)
{
 void *VAR_2 = FUNC_1(VAR_0);

 if (VAR_2) {
  FUNC_2("%s: clock-frequency <- %x (%dMHz)\n\r", VAR_0, VAR_1, FUNC_0(VAR_1));
  FUNC_3(VAR_2, "clock-frequency", VAR_1);
 }
}
