
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct r82600_error_info {int eapr; } ;
struct mem_ctl_info {int ctl_name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mem_ctl_info*,int) ;
 int FUNC_2 (int ,struct mem_ctl_info*,int,int,int ,int,int ,int ,int,int ,char*) ;

__attribute__((used)) static int FUNC_3(struct mem_ctl_info *VAR_3,
    struct r82600_error_info *VAR_4,
    int VAR_5)
{
 int VAR_6;
 u32 VAR_7, VAR_8;
 u32 VAR_9;

 VAR_6 = 0;


 VAR_7 = ((VAR_4->eapr >> 12) & 0x7FFF) << 13;

 VAR_9 = (VAR_4->eapr >> 4) & 0xFF;



 VAR_8 = VAR_7 >> VAR_2;

 if (VAR_4->eapr & FUNC_0(0)) {
  VAR_6 = 1;

  if (VAR_5)
   FUNC_2(VAR_0, VAR_3, 1,
          VAR_8, 0, VAR_9,
          FUNC_1(VAR_3, VAR_8),
          0, -1,
          VAR_3->ctl_name, "");
 }

 if (VAR_4->eapr & FUNC_0(1)) {
  VAR_6 = 1;

  if (VAR_5)

   FUNC_2(VAR_1, VAR_3, 1,
          VAR_8, 0, 0,
          FUNC_1(VAR_3, VAR_8),
          0, -1,
          VAR_3->ctl_name, "");
 }

 return VAR_6;
}
