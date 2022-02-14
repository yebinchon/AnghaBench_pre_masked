
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char const) ;

__attribute__((used)) static inline int FUNC_1(const char *VAR_0)
{
 unsigned int VAR_1 = FUNC_0(VAR_0[0]);
 return (VAR_1 & ~0xf) ? VAR_1 : (VAR_1 << 4) | FUNC_0(VAR_0[1]);
}
