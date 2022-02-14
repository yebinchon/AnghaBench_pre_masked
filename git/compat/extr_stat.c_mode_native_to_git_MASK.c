
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static inline mode_t FUNC_7(mode_t VAR_0)
{
 mode_t VAR_1 = VAR_0 & 07777;
 if (FUNC_5(VAR_0))
  return 0100000 | VAR_1;
 if (FUNC_2(VAR_0))
  return 0040000 | VAR_1;
 if (FUNC_4(VAR_0))
  return 0120000 | VAR_1;
 if (FUNC_0(VAR_0))
  return 0060000 | VAR_1;
 if (FUNC_1(VAR_0))
  return 0020000 | VAR_1;
 if (FUNC_3(VAR_0))
  return 0010000 | VAR_1;
 if (FUNC_6(VAR_0))
  return 0140000 | VAR_1;

 return VAR_1;
}
