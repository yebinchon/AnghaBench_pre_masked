
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct gamma_coefficients {int * user_gamma; int * a3; int * a2; int * a1; int * a0; } ;
struct fixed31_32 {int dummy; } ;


 struct fixed31_32 FUNC_0 (struct fixed31_32,int ,int ,int ,int ,int ) ;

__attribute__((used)) static inline struct fixed31_32 FUNC_1(
 struct fixed31_32 VAR_0,
 struct gamma_coefficients *VAR_1,
 uint32_t VAR_2)
{
 return FUNC_0(
  VAR_0,
  VAR_1->a0[VAR_2],
  VAR_1->a1[VAR_2],
  VAR_1->a2[VAR_2],
  VAR_1->a3[VAR_2],
  VAR_1->user_gamma[VAR_2]);
}
