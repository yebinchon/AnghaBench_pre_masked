
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(int VAR_2)
{
 int VAR_3;

 if (FUNC_0() < 0)
  VAR_3 = -FUNC_0();
 else
  VAR_3 = FUNC_0();

 if (!(VAR_2 & VAR_0))
  VAR_3 &= ~0222;
 if (VAR_2 & VAR_1)

  VAR_3 |= (VAR_3 & 0444) >> 2;
 if (FUNC_0() < 0)
  VAR_2 = (VAR_2 & ~0777) | VAR_3;
 else
  VAR_2 |= VAR_3;

 return VAR_2;
}
