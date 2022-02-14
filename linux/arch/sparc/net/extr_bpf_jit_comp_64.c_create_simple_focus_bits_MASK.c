
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned long FUNC_0(unsigned long VAR_0,
           unsigned long VAR_1,
           int VAR_2, int VAR_3)
{
 long VAR_4, VAR_5;

 if (VAR_2 < 32) {
  VAR_5 = (VAR_1 >> VAR_2) << VAR_3;
  VAR_4 = ((VAR_0 << (32 - VAR_2)) << VAR_3);
 } else {
  VAR_5 = 0;
  VAR_4 = ((VAR_0 >> (VAR_2 - 32)) << VAR_3);
 }
 return VAR_4 | VAR_5;
}
