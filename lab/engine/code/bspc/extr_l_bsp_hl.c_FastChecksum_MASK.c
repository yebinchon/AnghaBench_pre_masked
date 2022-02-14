
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(void *VAR_0, int VAR_1)
{
 int VAR_2 = 0;
 char *VAR_3 = VAR_0;

 while( VAR_1-- )
  VAR_2 = (VAR_2 << 4) ^ *(VAR_3++);

 return VAR_2;
}
