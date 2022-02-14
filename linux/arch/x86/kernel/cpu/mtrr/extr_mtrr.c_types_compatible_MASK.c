
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mtrr_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline int FUNC_0(mtrr_type VAR_3, mtrr_type VAR_4)
{
 return VAR_3 == VAR_0 ||
        VAR_4 == VAR_0 ||
        (VAR_3 == VAR_2 && VAR_4 == VAR_1) ||
        (VAR_3 == VAR_1 && VAR_4 == VAR_2);
}
