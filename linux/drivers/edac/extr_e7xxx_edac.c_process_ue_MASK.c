
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mem_ctl_info {int dummy; } ;
struct e7xxx_error_info {int dram_uelog_add; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct mem_ctl_info*,int) ;
 int FUNC_2 (int ,struct mem_ctl_info*,int,int,int ,int ,int,int,int,char*,char*) ;

__attribute__((used)) static void FUNC_3(struct mem_ctl_info *VAR_1, struct e7xxx_error_info *VAR_2)
{
 u32 VAR_3, VAR_4;
 int VAR_5;

 FUNC_0(3, "\n");

 VAR_3 = VAR_2->dram_uelog_add;

 VAR_4 = VAR_3 >> 6;
 VAR_5 = FUNC_1(VAR_1, VAR_4);

 FUNC_2(VAR_0, VAR_1, 1, VAR_4, 0, 0,
        VAR_5, -1, -1, "e7xxx UE", "");
}
