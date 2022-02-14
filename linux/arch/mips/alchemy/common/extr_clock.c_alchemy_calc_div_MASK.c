
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static long FUNC_0(unsigned long VAR_0, unsigned long VAR_1,
          int VAR_2, int VAR_3, unsigned long *VAR_4)
{
 long VAR_5, VAR_6;

 VAR_5 = VAR_1 / VAR_0;
 if ((VAR_1 / VAR_5) > VAR_0)
  VAR_5++;

 if (VAR_2 == 2) {
  if (VAR_5 & 1)
   VAR_5++;
 }

 VAR_6 = (VAR_5 / VAR_2) - 1;

 if (VAR_6 > VAR_3)
  VAR_6 = VAR_3;
 if (VAR_4)
  *VAR_4 = VAR_6;

 VAR_5 = ((VAR_6 + 1) * VAR_2);
 return VAR_5;
}
