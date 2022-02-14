
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pmf_handlers {int dummy; } ;
struct pmf_cmd {int dummy; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int ,struct pmf_cmd*,struct pmf_handlers*,int ,int ,int ) ;
 int FUNC_2 (struct pmf_cmd*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct pmf_cmd *VAR_1, struct pmf_handlers *VAR_2)
{
 u32 VAR_3 = FUNC_2(VAR_1);
 u8 VAR_4 = (u8)FUNC_2(VAR_1);
 u8 VAR_5 = (u8)FUNC_2(VAR_1);

 FUNC_0("pmf: wait_reg8(offset: %08x, comp_value: %02x,mask: %02x)\n",
    VAR_3, VAR_4, VAR_5);

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
