
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(int VAR_0)
{
 switch (VAR_0) {
 case 'n':
  return ('\n');
 case 'r':
  return ('\r');
 case 't':
  return ('\t');
 case 'f':
  return ('\f');
 case 'v':
  return ('\v');
 case 'b':
  return ('\b');
 case 'a':
  return ('\a');
 default:
  return (VAR_0);
 }
}
