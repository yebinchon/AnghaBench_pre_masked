
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mem_ctl_info {int dummy; } ;
struct e7xxx_error_info {int dram_celog_add; int dram_celog_syndrome; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct mem_ctl_info*,int) ;
 int FUNC_3 (int ,struct mem_ctl_info*,int,int,int ,int ,int,int,int,char*,char*) ;

__attribute__((used)) static void FUNC_4(struct mem_ctl_info *VAR_1, struct e7xxx_error_info *VAR_2)
{
 u32 VAR_3, VAR_4;
 u16 VAR_5;
 int VAR_6;
 int VAR_7;

 FUNC_1(3, "\n");

 VAR_3 = VAR_2->dram_celog_add;

 VAR_4 = VAR_3 >> 6;

 VAR_5 = VAR_2->dram_celog_syndrome;

 VAR_6 = FUNC_2(VAR_1, VAR_4);

 VAR_7 = FUNC_0(VAR_5);
 FUNC_3(VAR_0, VAR_1, 1, VAR_4, 0, VAR_5,
        VAR_6, VAR_7, -1, "e7xxx CE", "");
}
