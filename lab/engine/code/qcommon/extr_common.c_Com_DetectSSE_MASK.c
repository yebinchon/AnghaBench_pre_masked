
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpuFeatures_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_2(void)
{

 cpuFeatures_t VAR_11;

 VAR_11 = FUNC_1();

 if(VAR_11 & VAR_0)
 {
  if(VAR_11 & VAR_1)
   VAR_2 = VAR_7;
  else
   VAR_2 = VAR_8;

  VAR_4 = VAR_5;

  VAR_3 = VAR_9;

  FUNC_0("SSE instruction set enabled\n");

 }
 else
 {
  VAR_4 = VAR_6;
  VAR_3 = VAR_10;
  VAR_2 = VAR_8;

  FUNC_0("SSE instruction set not available\n");
 }

}
