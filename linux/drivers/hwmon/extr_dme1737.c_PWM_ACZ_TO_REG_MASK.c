
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(long VAR_0, int VAR_1)
{
 int VAR_2 = (VAR_0 == 4) ? 2 : VAR_0 - 1;

 return (VAR_1 & 0x1f) | ((VAR_2 & 0x07) << 5);
}
