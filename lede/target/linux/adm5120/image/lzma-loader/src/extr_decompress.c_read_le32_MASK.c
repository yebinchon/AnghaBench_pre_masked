
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static __inline__ unsigned int FUNC_0(void *VAR_0)
{
 unsigned char *VAR_1 = VAR_0;

 return ((unsigned int)VAR_1[0] + ((unsigned int)VAR_1[1] << 8) +
  ((unsigned int)VAR_1[2] << 16) +((unsigned int)VAR_1[3] << 24));
}
