
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(char *VAR_1)
{
 int VAR_2;

 while ((VAR_2 = (*VAR_1++ & 0377)))
  if (VAR_2 < ' ')
   FUNC_0(VAR_0, "^%c", VAR_2 + '`');
  else if (VAR_2 == 0177)
   FUNC_0(VAR_0, "^?");
  else if (VAR_2 > 0200)
   FUNC_0(VAR_0, "\\%03o", VAR_2);
  else
   FUNC_0(VAR_0, "%c", VAR_2);
}
