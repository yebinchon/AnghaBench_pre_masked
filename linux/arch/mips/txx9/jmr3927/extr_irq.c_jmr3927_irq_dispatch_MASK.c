
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(int VAR_4)
{
 int VAR_5;

 if ((VAR_4 & VAR_1) == 0)
  return -1;
 VAR_5 = (VAR_4 >> VAR_0) & 0x0f;
 VAR_5 += VAR_3;
 if (VAR_5 == VAR_2)
  VAR_5 = FUNC_0();
 return VAR_5;
}
