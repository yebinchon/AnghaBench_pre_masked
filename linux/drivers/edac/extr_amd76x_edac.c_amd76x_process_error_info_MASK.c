
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct mem_ctl_info {int ctl_name; TYPE_1__** csrows; } ;
struct amd76x_error_info {int ecc_mode_status; } ;
struct TYPE_2__ {int first_page; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct mem_ctl_info*,int,int ,int ,int ,size_t,int ,int,int ,char*) ;

__attribute__((used)) static int FUNC_2(struct mem_ctl_info *VAR_2,
    struct amd76x_error_info *VAR_3,
    int VAR_4)
{
 int VAR_5;
 u32 VAR_6;

 VAR_5 = 0;




 if (VAR_3->ecc_mode_status & FUNC_0(8)) {
  VAR_5 = 1;

  if (VAR_4) {
   VAR_6 = (VAR_3->ecc_mode_status >> 4) & 0xf;
   FUNC_1(VAR_1, VAR_2, 1,
          VAR_2->csrows[VAR_6]->first_page, 0, 0,
          VAR_6, 0, -1,
          VAR_2->ctl_name, "");
  }
 }




 if (VAR_3->ecc_mode_status & FUNC_0(9)) {
  VAR_5 = 1;

  if (VAR_4) {
   VAR_6 = VAR_3->ecc_mode_status & 0xf;
   FUNC_1(VAR_0, VAR_2, 1,
          VAR_2->csrows[VAR_6]->first_page, 0, 0,
          VAR_6, 0, -1,
          VAR_2->ctl_name, "");
  }
 }

 return VAR_5;
}
