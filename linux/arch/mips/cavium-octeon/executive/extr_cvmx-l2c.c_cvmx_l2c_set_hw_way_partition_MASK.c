
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

int FUNC_5(uint32_t VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = (0x1 << FUNC_2()) - 1;
 VAR_2 &= VAR_3;


 if (VAR_2 == VAR_3 && !FUNC_1(VAR_1))
  return -1;

 if (FUNC_1(VAR_1))
  FUNC_4(FUNC_0(0), VAR_2);
 else
  FUNC_4(VAR_0,
          (FUNC_3(VAR_0) & ~0xFF) | VAR_2);
 return 0;
}
