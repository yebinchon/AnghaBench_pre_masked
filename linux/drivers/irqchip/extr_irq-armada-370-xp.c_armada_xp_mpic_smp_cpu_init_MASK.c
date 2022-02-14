
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(void)
{
 u32 VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = FUNC_0(VAR_6 + VAR_1);
 VAR_9 = (VAR_8 >> 2) & 0x3ff;

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
  FUNC_1(VAR_10, VAR_7 + VAR_2);


 FUNC_1(0, VAR_7 + VAR_3);


 FUNC_1(VAR_5, VAR_7 +
  VAR_4);


 FUNC_1(0, VAR_7 + VAR_0);
}
