
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int semid_t ;


 int FUNC_0 (int,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static int
FUNC_2(void *VAR_2)
{
 semid_t VAR_3;
 int VAR_4, VAR_5;

 VAR_5 = (intptr_t)VAR_2;
 for (VAR_4 = 0; VAR_4 < VAR_5 + 1; VAR_4++) {
  if (FUNC_1(&VAR_3, 1) < 0) {
   if (VAR_1 == VAR_0)
    return (FUNC_0(0, 0));
   return (FUNC_0(1, VAR_1));
  }
 }
 return (FUNC_0(2, 0));
}
