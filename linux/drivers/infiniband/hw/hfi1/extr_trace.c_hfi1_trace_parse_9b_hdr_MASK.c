
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ib_header {int dummy; } ;


 int FUNC_0 (struct ib_header*) ;
 int FUNC_1 (struct ib_header*) ;
 int FUNC_2 (struct ib_header*) ;
 int FUNC_3 (struct ib_header*) ;
 int FUNC_4 (struct ib_header*) ;
 int FUNC_5 (struct ib_header*) ;
 int FUNC_6 (struct ib_header*) ;

void FUNC_7(struct ib_header *VAR_0, bool VAR_1,
        u8 *VAR_2, u8 *VAR_3, u8 *VAR_4, u8 *VAR_5,
        u16 *VAR_6, u32 *VAR_7, u32 *VAR_8)
{
 *VAR_2 = FUNC_2(VAR_0);
 *VAR_3 = FUNC_3(VAR_0);
 *VAR_4 = FUNC_5(VAR_0);
 *VAR_5 = FUNC_4(VAR_0) | (VAR_1 << 4);
 *VAR_6 = FUNC_1(VAR_0);
 *VAR_7 = FUNC_0(VAR_0);
 *VAR_8 = FUNC_6(VAR_0);
}
