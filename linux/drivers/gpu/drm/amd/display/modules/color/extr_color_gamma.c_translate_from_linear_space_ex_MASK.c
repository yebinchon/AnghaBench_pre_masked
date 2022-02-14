
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct gamma_coefficients {int * user_gamma; int * a3; int * a2; int * a1; int * a0; } ;
struct fixed31_32 {int dummy; } ;
struct TYPE_3__ {int gamma; int a3; int a2; int a1; int a0; struct fixed31_32 arg; } ;


 TYPE_1__ VAR_0 ;
 struct fixed31_32 FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static struct fixed31_32 FUNC_1(
 struct fixed31_32 VAR_1,
 struct gamma_coefficients *VAR_2,
 uint32_t VAR_3)
{
 VAR_0.arg = VAR_1;
 VAR_0.a0 = VAR_2->a0[VAR_3];
 VAR_0.a1 = VAR_2->a1[VAR_3];
 VAR_0.a2 = VAR_2->a2[VAR_3];
 VAR_0.a3 = VAR_2->a3[VAR_3];
 VAR_0.gamma = VAR_2->user_gamma[VAR_3];

 return FUNC_0(&VAR_0);
}
