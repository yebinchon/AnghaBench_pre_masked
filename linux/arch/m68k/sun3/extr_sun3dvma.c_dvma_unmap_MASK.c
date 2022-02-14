
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long) ;

void FUNC_1(void *VAR_0)
{
 unsigned long VAR_1;

 VAR_1 = (unsigned long)VAR_0;

 if(!(VAR_1 & 0x00f00000))
  VAR_1 |= 0xf00000;

 FUNC_0(VAR_1);

 return;

}
