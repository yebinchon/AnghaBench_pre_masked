
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pri; int opt; } ;
typedef TYPE_1__ weight_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,int *,TYPE_1__*) ;
 int FUNC_1 (int) ;
 int * VAR_2 ;

int32_t
FUNC_2(int32_t VAR_3, int VAR_4)
{
 weight_t VAR_5;
 weight_t *VAR_6;
 int32_t VAR_7;

 VAR_7 = FUNC_1(VAR_3);
 if (VAR_7 & VAR_0) {
  return (VAR_7);
 }
 if (VAR_7 <= 0) {
  return (VAR_7);
 }
 VAR_5.pri = VAR_7;
 if ((VAR_6 = FUNC_0(VAR_2, &VAR_2[VAR_4], &VAR_5)) == ((void*)0)) {
  VAR_1;
  return (-1);
 }
 return (VAR_6->opt);
}
