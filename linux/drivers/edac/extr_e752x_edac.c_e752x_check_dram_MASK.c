
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mem_ctl_info {int dummy; } ;
struct e752x_error_info {int dram_ferr; int dram_nerr; int dram_scrb_add; int dram_ded_add; int dram_retr_add; int dram_sec2_syndrome; int dram_sec2_add; int dram_sec1_syndrome; int dram_sec1_add; } ;


 int FUNC_0 (struct mem_ctl_info*,int,int ,int ,int*,int) ;
 int FUNC_1 (struct mem_ctl_info*,int,int ,int*,int) ;
 int FUNC_2 (struct mem_ctl_info*,int,int*,int) ;
 int FUNC_3 (struct mem_ctl_info*,int,int ,int ,int*,int) ;
 int FUNC_4 (struct mem_ctl_info*,int*,int) ;

__attribute__((used)) static void FUNC_5(struct mem_ctl_info *VAR_0,
   struct e752x_error_info *VAR_1, int *VAR_2,
   int VAR_3)
{
 u16 VAR_4, VAR_5;

 VAR_4 = VAR_1->dram_ferr;
 VAR_5 = VAR_1->dram_nerr;


 if (VAR_4 & 0x0101)
  FUNC_0(VAR_0, VAR_4, VAR_1->dram_sec1_add,
   VAR_1->dram_sec1_syndrome, VAR_2, VAR_3);

 if (VAR_5 & 0x0101)
  FUNC_0(VAR_0, VAR_5, VAR_1->dram_sec2_add,
   VAR_1->dram_sec2_syndrome, VAR_2, VAR_3);

 if (VAR_4 & 0x4040)
  FUNC_4(VAR_0, VAR_2, VAR_3);

 if (VAR_5 & 0x4040)
  FUNC_4(VAR_0, VAR_2, VAR_3);

 if (VAR_4 & 0x2020)
  FUNC_1(VAR_0, VAR_4, VAR_1->dram_retr_add,
    VAR_2, VAR_3);

 if (VAR_5 & 0x2020)
  FUNC_1(VAR_0, VAR_5, VAR_1->dram_retr_add,
    VAR_2, VAR_3);

 if (VAR_4 & 0x0808)
  FUNC_2(VAR_0, VAR_4, VAR_2, VAR_3);

 if (VAR_5 & 0x0808)
  FUNC_2(VAR_0, VAR_5, VAR_2,
    VAR_3);

 if (VAR_4 & 0x0606)
  FUNC_3(VAR_0, VAR_4, VAR_1->dram_ded_add,
   VAR_1->dram_scrb_add, VAR_2, VAR_3);

 if (VAR_5 & 0x0606)
  FUNC_3(VAR_0, VAR_5, VAR_1->dram_ded_add,
   VAR_1->dram_scrb_add, VAR_2, VAR_3);
}
