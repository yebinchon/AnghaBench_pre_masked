
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned FUNC_0(unsigned long VAR_0)
{
 unsigned VAR_1;
 for (VAR_1 = 2; VAR_1 < 96; ++VAR_1) {
  if ((VAR_1 & 1) && VAR_1 > 8)
   continue;
  if (VAR_0 >= 96000000 / VAR_1)
   break;
 }
 return VAR_1;
}
