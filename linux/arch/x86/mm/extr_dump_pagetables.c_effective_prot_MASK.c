
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pgprotval_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline pgprotval_t FUNC_0(pgprotval_t VAR_3, pgprotval_t VAR_4)
{
 return (VAR_3 & VAR_4 & (VAR_2 | VAR_1)) |
        ((VAR_3 | VAR_4) & VAR_0);
}
