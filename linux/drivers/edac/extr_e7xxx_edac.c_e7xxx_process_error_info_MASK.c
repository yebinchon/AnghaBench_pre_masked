
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {int dummy; } ;
struct e7xxx_error_info {int dram_ferr; int dram_nerr; } ;


 int FUNC_0 (struct mem_ctl_info*,struct e7xxx_error_info*) ;
 int FUNC_1 (struct mem_ctl_info*) ;
 int FUNC_2 (struct mem_ctl_info*,struct e7xxx_error_info*) ;
 int FUNC_3 (struct mem_ctl_info*) ;

__attribute__((used)) static int FUNC_4(struct mem_ctl_info *VAR_0,
    struct e7xxx_error_info *VAR_1,
    int VAR_2)
{
 int VAR_3;

 VAR_3 = 0;


 if (VAR_1->dram_ferr & 1) {
  VAR_3 = 1;

  if (VAR_2)
   FUNC_0(VAR_0, VAR_1);
 }

 if (VAR_1->dram_ferr & 2) {
  VAR_3 = 1;

  if (VAR_2)
   FUNC_2(VAR_0, VAR_1);
 }

 if (VAR_1->dram_nerr & 1) {
  VAR_3 = 1;

  if (VAR_2) {
   if (VAR_1->dram_ferr & 1)
    FUNC_1(VAR_0);
   else
    FUNC_0(VAR_0, VAR_1);
  }
 }

 if (VAR_1->dram_nerr & 2) {
  VAR_3 = 1;

  if (VAR_2) {
   if (VAR_1->dram_ferr & 2)
    FUNC_3(VAR_0);
   else
    FUNC_2(VAR_0, VAR_1);
  }
 }

 return VAR_3;
}
