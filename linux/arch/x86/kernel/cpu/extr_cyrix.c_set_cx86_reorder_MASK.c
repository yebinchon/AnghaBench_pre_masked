
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(void)
{
 u8 VAR_2;

 FUNC_1("Enable Memory access reorder on Cyrix/NSC processor.\n");
 VAR_2 = FUNC_0(VAR_0);
 FUNC_2(VAR_0, (VAR_2 & 0x0f) | 0x10);


 FUNC_2(VAR_1, FUNC_0(VAR_1) & ~0x80);

 VAR_2 |= 0xe0;
 FUNC_2(VAR_0, VAR_2);
}
