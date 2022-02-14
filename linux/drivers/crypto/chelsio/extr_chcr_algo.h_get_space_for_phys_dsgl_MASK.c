
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline u16 FUNC_0(unsigned int VAR_1)
{

 return ((VAR_1 >> 3) + ((VAR_1 % 8) ?
       1 : 0)) * VAR_0 +
  (VAR_1 << 3) + ((VAR_1 % 2 ? 1 : 0) << 3);
}
