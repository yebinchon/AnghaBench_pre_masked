
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4 = 0;

 if (VAR_1 > VAR_0)
  VAR_1 = VAR_0;
 if (VAR_3 && VAR_3 < VAR_1)
  VAR_1 = VAR_3;

 if (VAR_2) {
  while (VAR_4 < 14 && (65535 << VAR_4) < VAR_1)
   VAR_4++;
 }
 return VAR_4;
}
