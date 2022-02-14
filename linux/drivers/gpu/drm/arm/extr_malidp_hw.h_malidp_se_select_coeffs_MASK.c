
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef enum malidp_scaling_coeff_set { ____Placeholder_malidp_scaling_coeff_set } malidp_scaling_coeff_set ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static inline enum malidp_scaling_coeff_set
FUNC_0(u32 VAR_9)
{
 return (VAR_9 >= VAR_3) ? VAR_8 :
        (VAR_9 >= VAR_2) ? VAR_4 :
        (VAR_9 >= VAR_1) ? VAR_6 :
        (VAR_9 >= VAR_0) ? VAR_5 :
        VAR_7;
}
