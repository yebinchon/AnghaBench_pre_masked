
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int*,int*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(void)
{
 u32 VAR_3, VAR_4, VAR_5;
 int VAR_6;


 FUNC_1(FUNC_0(VAR_0), &VAR_3, &VAR_4);
 VAR_6 = VAR_4 & 0xff00;


 VAR_5 = FUNC_2(VAR_6 + VAR_1);
 VAR_5 &= ~(1 << (16 + 13));
 VAR_5 |= (1 << 13);
 FUNC_4(VAR_5, VAR_6 + VAR_1);
 FUNC_3();

 VAR_5 = FUNC_2(VAR_6 + VAR_2) & ~(1 << (13));
 VAR_5 |= (1 << (16 + 13));
 FUNC_4(VAR_5, VAR_6 + VAR_2);
 FUNC_3();
}
