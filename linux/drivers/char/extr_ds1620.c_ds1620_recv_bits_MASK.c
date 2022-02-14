
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static unsigned int FUNC_4(int VAR_0)
{
 unsigned int VAR_1 = 0, VAR_2 = 1;
 int VAR_3;

 FUNC_2(0);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_1(0);
  FUNC_3(1);

  if (FUNC_0())
   VAR_1 |= VAR_2;

  VAR_2 <<= 1;

  FUNC_1(1);
  FUNC_3(1);
 }

 return VAR_1;
}
