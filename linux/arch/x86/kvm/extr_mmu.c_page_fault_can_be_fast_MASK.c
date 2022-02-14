
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(u32 VAR_5)
{




 if (FUNC_0(VAR_5 & VAR_2))
  return 0;


 if (FUNC_0(((VAR_5 & (VAR_0 | VAR_1))
        == (VAR_0 | VAR_1))))
  return 0;
 return VAR_4 != 0 ||
        ((VAR_5 & (VAR_3 | VAR_1))
  == (VAR_3 | VAR_1));
}
