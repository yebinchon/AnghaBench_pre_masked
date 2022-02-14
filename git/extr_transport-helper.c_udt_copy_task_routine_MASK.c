
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unidirectional_transfer {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct unidirectional_transfer*) ;
 scalar_t__ FUNC_4 (struct unidirectional_transfer*) ;
 scalar_t__ FUNC_5 (struct unidirectional_transfer*) ;

__attribute__((used)) static void *FUNC_6(void *VAR_1)
{
 struct unidirectional_transfer *VAR_2 = (struct unidirectional_transfer *)VAR_1;
 while (VAR_2->state != VAR_0) {
  if (FUNC_1(VAR_2->state))
   if (FUNC_4(VAR_2))
    return ((void*)0);
  if (FUNC_2(VAR_2->state))
   if (FUNC_5(VAR_2))
    return ((void*)0);
  if (FUNC_0(VAR_2->state))
   FUNC_3(VAR_2);
 }
 return VAR_1;
}
