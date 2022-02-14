
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static __inline__ unsigned long FUNC_0(void *VAR_0)
{
 unsigned char *VAR_1 = VAR_0;

 return (((unsigned long) VAR_1[0] << 24) +
         ((unsigned long) VAR_1[1] << 16) +
         ((unsigned long) VAR_1[2] << 8) +
         (unsigned long) VAR_1[3]);
}
