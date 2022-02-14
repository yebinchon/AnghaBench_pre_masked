
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmibdata {int dummy; } ;



 scalar_t__ VAR_0 ;


 int FUNC_0 (int,char*) ;


 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int*,int,void*,size_t*,void*,size_t) ;

__attribute__((used)) static void
FUNC_2(int VAR_2, struct ifmibdata *VAR_3)
{
 size_t VAR_4 = 0;
 static int VAR_5[] = { 132,
          128,
          129,
          130,
          0,
          131 };
 VAR_4 = sizeof(*VAR_3);
 VAR_5[4] = VAR_2;

 if ((FUNC_1(VAR_5, 6, (void *)VAR_3, (size_t *)&VAR_4, (void *)((void*)0),
     (size_t)0) != 0) && (VAR_1 != VAR_0))
  FUNC_0(2, "sysctl error getting interface data");
}
