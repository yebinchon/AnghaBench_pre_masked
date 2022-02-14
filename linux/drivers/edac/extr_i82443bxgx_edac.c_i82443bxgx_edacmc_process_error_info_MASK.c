
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mem_ctl_info {int ctl_name; } ;
struct i82443bxgx_edacmc_error_info {int eap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mem_ctl_info*,int) ;
 int FUNC_1 (int ,struct mem_ctl_info*,int,int,int,int ,int ,int ,int,int ,char*) ;

__attribute__((used)) static int FUNC_2(struct mem_ctl_info *VAR_5,
      struct
      i82443bxgx_edacmc_error_info
      *VAR_6, int VAR_7)
{
 int VAR_8 = 0;
 u32 VAR_9, VAR_10, VAR_11;



 VAR_9 = (VAR_6->eap & 0xfffff000);
 VAR_10 = VAR_9 >> VAR_4;
 VAR_11 = VAR_9 - (VAR_10 << VAR_4);

 if (VAR_6->eap & VAR_3) {
  VAR_8 = 1;
  if (VAR_7)
   FUNC_1(VAR_0, VAR_5, 1,
          VAR_10, VAR_11, 0,
          FUNC_0(VAR_5, VAR_10),
          0, -1, VAR_5->ctl_name, "");
 }

 if (VAR_6->eap & VAR_2) {
  VAR_8 = 1;
  if (VAR_7)
   FUNC_1(VAR_1, VAR_5, 1,
          VAR_10, VAR_11, 0,
          FUNC_0(VAR_5, VAR_10),
          0, -1, VAR_5->ctl_name, "");
 }

 return VAR_8;
}
