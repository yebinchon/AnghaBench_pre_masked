
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ daddr_t ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(daddr_t *VAR_0, daddr_t *VAR_1, daddr_t VAR_2)
{

 if (*VAR_0 + *VAR_1 == VAR_2) {
  (*VAR_1)++;
 } else {
  FUNC_0(*VAR_0, *VAR_1);
  *VAR_0 = VAR_2;
  *VAR_1 = 1;
 }
}
