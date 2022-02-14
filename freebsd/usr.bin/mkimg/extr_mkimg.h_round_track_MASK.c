
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef scalar_t__ lba_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline lba_t
FUNC_0(lba_t VAR_1)
{
 u_int VAR_2 = VAR_1 % VAR_0;
 return ((VAR_2 == 0) ? VAR_1 : VAR_1 + VAR_0 - VAR_2);
}
