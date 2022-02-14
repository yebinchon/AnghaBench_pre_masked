
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;

__attribute__((used)) static inline unsigned int
FUNC_0(int VAR_10)
{
 return ((VAR_10 & VAR_0) ?
  VAR_3 | VAR_6 |
  VAR_7 : 0) |
        ((VAR_10 & VAR_1) ?
  VAR_4 | VAR_8 : 0) |
        ((VAR_10 & VAR_2) ?
  VAR_5 | VAR_9 : 0);
}
