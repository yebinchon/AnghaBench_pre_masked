
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2(unsigned int VAR_0, unsigned int VAR_1)
{
 return (1 << FUNC_1(VAR_0)) |
        (FUNC_0(VAR_0) << 8) |
        ((VAR_1 >> 8) << 28) |
        (VAR_1 & 0xfcu);
}
