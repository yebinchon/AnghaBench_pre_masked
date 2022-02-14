
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static void *
FUNC_3(unsigned int VAR_1)
{
 void *VAR_2;

 if ((VAR_2 = FUNC_2(VAR_1)) == ((void*)0)) {
  (void) FUNC_1(VAR_0, "fortune: out of memory.\n");
  FUNC_0(1);
 }

 return (VAR_2);
}
