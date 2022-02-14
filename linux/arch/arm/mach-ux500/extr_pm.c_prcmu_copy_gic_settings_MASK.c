
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

int FUNC_2(void)
{
 u32 VAR_4;
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_1 - 1; VAR_5++) {
  VAR_4 = FUNC_0(VAR_3 +
       VAR_0 + (VAR_5 + 1) * 4);
  FUNC_1(VAR_4, VAR_2 + VAR_5 * 4);
 }

 return 0;
}
