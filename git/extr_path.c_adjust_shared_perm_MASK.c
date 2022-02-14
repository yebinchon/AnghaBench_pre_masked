
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const*,int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char const*,int*) ;

int FUNC_5(const char *VAR_2)
{
 int VAR_3, VAR_4;

 if (!FUNC_3())
  return 0;
 if (FUNC_4(VAR_2, &VAR_3) < 0)
  return -1;

 VAR_4 = FUNC_1(VAR_3);
 if (FUNC_0(VAR_3)) {

  VAR_4 |= (VAR_4 & 0444) >> 2;
  VAR_4 |= VAR_0;
 }

 if (((VAR_3 ^ VAR_4) & ~VAR_1) &&
   FUNC_2(VAR_2, (VAR_4 & ~VAR_1)) < 0)
  return -2;
 return 0;
}
