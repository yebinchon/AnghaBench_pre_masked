
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(int VAR_0)
{
 if ('0'<=VAR_0 && VAR_0<='9')
  VAR_0 -= '0';
 else if ('a'<=VAR_0 && VAR_0<='f')
  VAR_0 -= 'a'-10;
 else if ('A'<=VAR_0 && VAR_0<='F')
  VAR_0 -= 'A'-10;
 else
  VAR_0 = -1;
 return VAR_0;
}
