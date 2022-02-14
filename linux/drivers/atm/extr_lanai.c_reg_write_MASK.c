
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lanai_dev {scalar_t__ base; } ;
typedef enum lanai_register { ____Placeholder_lanai_register } lanai_register ;


 int FUNC_0 (char*,unsigned int,int,int ) ;
 int FUNC_1 (struct lanai_dev const*,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline void FUNC_3(const struct lanai_dev *VAR_0, u32 VAR_1,
 enum lanai_register VAR_2)
{
 FUNC_0("W [0x%08X] 0x%02X < 0x%08X\n", (unsigned int) VAR_0->base,
     (int) VAR_2, VAR_1);
 FUNC_2(VAR_1, FUNC_1(VAR_0, VAR_2));
}
