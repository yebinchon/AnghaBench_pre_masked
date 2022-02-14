
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (char) ;

void
FUNC_2(int VAR_0, int VAR_1, int VAR_2)
{
 static char VAR_3[36] = "0123456789abcdefghijklmnopqrstuvwxyz";
 int VAR_4;
 int VAR_5 = 0;

 if (VAR_1 > 36)
  FUNC_0(1, "base %d > 36: not supported.", VAR_1);

 if (VAR_1 < 2)
  FUNC_0(1, "bad base %d for conversion.", VAR_1);

 VAR_4 = (VAR_0 < 0) ? -VAR_0 : VAR_0;
 do {
  FUNC_1(VAR_3[VAR_4 % VAR_1]);
  VAR_5++;
 }
 while ((VAR_4 /= VAR_1) > 0);

 if (VAR_0 < 0)
  VAR_5++;
 while (VAR_5++ < VAR_2)
  FUNC_1('0');

 if (VAR_0 < 0)
  FUNC_1('-');
}
