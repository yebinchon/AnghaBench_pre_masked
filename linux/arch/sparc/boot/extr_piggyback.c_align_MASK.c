
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1)
{
 if (VAR_0)
  return (VAR_1 + 0x1fff) & ~0x1fff;
 else
  return (VAR_1 + 0xfff) & ~0xfff;
}
