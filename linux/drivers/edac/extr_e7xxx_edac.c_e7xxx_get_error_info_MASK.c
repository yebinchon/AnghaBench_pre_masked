
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {scalar_t__ pvt_info; } ;
struct e7xxx_pvt {int bridge_ck; } ;
struct e7xxx_error_info {int dram_ferr; int dram_nerr; int dram_uelog_add; int dram_celog_syndrome; int dram_celog_add; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_4(struct mem_ctl_info *VAR_5,
     struct e7xxx_error_info *VAR_6)
{
 struct e7xxx_pvt *VAR_7;

 VAR_7 = (struct e7xxx_pvt *)VAR_5->pvt_info;
 FUNC_0(VAR_7->bridge_ck, VAR_2, &VAR_6->dram_ferr);
 FUNC_0(VAR_7->bridge_ck, VAR_3, &VAR_6->dram_nerr);

 if ((VAR_6->dram_ferr & 1) || (VAR_6->dram_nerr & 1)) {
  FUNC_1(VAR_7->bridge_ck, VAR_0,
    &VAR_6->dram_celog_add);
  FUNC_2(VAR_7->bridge_ck,
    VAR_1,
    &VAR_6->dram_celog_syndrome);
 }

 if ((VAR_6->dram_ferr & 2) || (VAR_6->dram_nerr & 2))
  FUNC_1(VAR_7->bridge_ck, VAR_4,
    &VAR_6->dram_uelog_add);

 if (VAR_6->dram_ferr & 3)
  FUNC_3(VAR_7->bridge_ck, VAR_2, 0x03, 0x03);

 if (VAR_6->dram_nerr & 3)
  FUNC_3(VAR_7->bridge_ck, VAR_3, 0x03, 0x03);
}
