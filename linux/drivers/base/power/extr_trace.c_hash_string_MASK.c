
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_0, const char *VAR_1, unsigned int VAR_2)
{
 unsigned char VAR_3;
 while ((VAR_3 = *VAR_1++) != 0) {
  VAR_0 = (VAR_0 << 16) + (VAR_0 << 6) - VAR_0 + VAR_3;
 }
 return VAR_0 % VAR_2;
}
