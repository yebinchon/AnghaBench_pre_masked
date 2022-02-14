
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 () ;
 int FUNC_1 (int,int *,int*) ;

__attribute__((used)) static int
FUNC_2(void)
{
 uint32_t VAR_0,VAR_1;
 uint64_t VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0();

 for (VAR_0 = 0; VAR_0 < VAR_3; VAR_0++) {
  FUNC_1(VAR_0, &VAR_2, &VAR_1);
  if ((VAR_1 & 0x80000000) == 0)
   break;
 }

 return (VAR_0);
}
