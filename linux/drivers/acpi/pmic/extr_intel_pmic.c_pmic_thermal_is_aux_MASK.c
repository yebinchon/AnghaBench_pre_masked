
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool FUNC_0(int VAR_0)
{
 return (VAR_0 >= 4 && VAR_0 <= 0x40 && !((VAR_0 - 4) % 12)) ||
        (VAR_0 >= 8 && VAR_0 <= 0x44 && !((VAR_0 - 8) % 12));
}
