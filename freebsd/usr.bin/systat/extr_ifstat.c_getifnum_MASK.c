
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u_int ;
typedef int data ;





 int FUNC_0 (int,char*) ;


 scalar_t__ FUNC_1 (int*,int,void*,size_t*,void*,size_t) ;

__attribute__((used)) static
unsigned int
FUNC_2(void)
{
 u_int VAR_0 = 0;
 size_t VAR_1 = 0;
 static int VAR_2[] = { 132,
          128,
          129,
          130,
          131 };

 VAR_1 = sizeof(VAR_0);
 if (FUNC_1(VAR_2, 5, (void *)&VAR_0, (size_t *)&VAR_1, (void *)((void*)0),
     (size_t)0) != 0)
  FUNC_0(1, "sysctl error");
 return (VAR_0);
}
