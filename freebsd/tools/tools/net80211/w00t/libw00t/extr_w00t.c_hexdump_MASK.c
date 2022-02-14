
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

void FUNC_1(void *VAR_0, int VAR_1)
{
 unsigned char *VAR_2 = (unsigned char*) VAR_0;

 while (VAR_1--)
  FUNC_0("%.2X ", *VAR_2++);
 FUNC_0("\n");
}
