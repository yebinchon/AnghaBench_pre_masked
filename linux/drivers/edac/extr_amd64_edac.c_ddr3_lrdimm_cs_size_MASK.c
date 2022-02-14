
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(unsigned VAR_0, unsigned VAR_1)
{
 unsigned VAR_2 = 0;
 int VAR_3 = 0;

 if (VAR_0 < 4 || VAR_0 == 6)
  VAR_3 = -1;
 else if (VAR_0 == 12)
  VAR_2 = 7;
 else if (!(VAR_0 & 0x1))
  VAR_2 = VAR_0 >> 1;
 else
  VAR_2 = (VAR_0 + 1) >> 1;

 if (VAR_3 != -1)
  VAR_3 = VAR_1 * (128 << VAR_2);

 return VAR_3;
}
