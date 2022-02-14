
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bw_fixed {int value; } ;
typedef int int64_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

struct bw_fixed FUNC_3(
 const struct bw_fixed VAR_0,
 const struct bw_fixed VAR_1)
{
 struct bw_fixed VAR_2;
 int64_t VAR_3;

 VAR_3 = FUNC_2(VAR_0.value, FUNC_1(VAR_1.value));
 VAR_2.value = FUNC_1(VAR_1.value) * VAR_3;
 FUNC_0(FUNC_1(VAR_2.value) <= FUNC_1(VAR_0.value));
 return VAR_2;
}
