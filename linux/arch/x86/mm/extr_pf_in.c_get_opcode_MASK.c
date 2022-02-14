
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(unsigned char *VAR_0, unsigned int *VAR_1)
{
 int VAR_2;

 if (*VAR_0 == 0x0F) {

  *VAR_1 = *(unsigned short *)VAR_0;
  VAR_2 = 2;
 } else {
  *VAR_1 = *VAR_0;
  VAR_2 = 1;
 }

 return VAR_2;
}
