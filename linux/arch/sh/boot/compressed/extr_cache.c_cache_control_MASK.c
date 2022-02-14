
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(unsigned int VAR_0)
{
 volatile unsigned int *VAR_1 = (volatile unsigned int *) 0x80000000;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < (32 * 1024); VAR_2 += 32) {
  (void)*VAR_1;
  VAR_1 += (32 / sizeof(int));
 }

 return 0;
}
