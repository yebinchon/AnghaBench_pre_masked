
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned int FUNC_0(unsigned int VAR_0)
{
 unsigned int VAR_1;

 VAR_1 = (VAR_0 >> 8) & 0xf;

 if (VAR_1 == 0xf)
  VAR_1 += (VAR_0 >> 20) & 0xff;

 return VAR_1;
}
