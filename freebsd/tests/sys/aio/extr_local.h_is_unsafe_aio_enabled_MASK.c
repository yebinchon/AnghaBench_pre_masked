
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unsafe ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int*,size_t*,int *,int ) ;

__attribute__((used)) static int
FUNC_1(void)
{
 size_t VAR_3;
 int VAR_4;

 VAR_3 = sizeof(VAR_4);
 if (FUNC_0(VAR_2, &VAR_4, &VAR_3, ((void*)0), 0) < 0) {
  if (VAR_1 == VAR_0)
   return (-1);
  return (0);
 }
 return (VAR_4 == 0 ? 0 : 1);
}
