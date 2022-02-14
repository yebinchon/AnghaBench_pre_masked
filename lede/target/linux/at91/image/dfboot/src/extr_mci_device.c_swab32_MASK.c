
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned int FUNC_0(unsigned int VAR_0)
{
 unsigned int VAR_1 = 0;

 VAR_1 = (VAR_0 & 0x000000ff) << 24 |
    (VAR_0 & 0x0000ff00) << 8 |
    (VAR_0 & 0x00ff0000) >> 8 |
    (VAR_0 & 0xff000000) >> 24;

 return VAR_1;
}
