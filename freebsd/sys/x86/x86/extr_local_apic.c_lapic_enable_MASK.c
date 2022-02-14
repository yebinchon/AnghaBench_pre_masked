
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void
FUNC_2(void)
{
 uint32_t VAR_8;


 VAR_8 = FUNC_0(VAR_6);
 VAR_8 &= ~(VAR_5 | VAR_3);
 VAR_8 |= VAR_2 | VAR_4 | VAR_0;
 if (VAR_7)
  VAR_8 |= VAR_1;
 FUNC_1(VAR_6, VAR_8);
}
