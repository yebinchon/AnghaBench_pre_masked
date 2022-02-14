
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mem_ctl_info {struct amd64_pvt* pvt_info; } ;
struct err_info {scalar_t__ csrow; int channel; int err_code; int syndrome; int src_mci; } ;
struct amd64_pvt {int nbcfg; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mem_ctl_info*,char*,unsigned long) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int,struct err_info*) ;
 int FUNC_4 (struct mem_ctl_info*,int) ;
 int FUNC_5 (struct mem_ctl_info*,int ) ;
 scalar_t__ FUNC_6 (int ,int) ;

__attribute__((used)) static void FUNC_7(struct mem_ctl_info *VAR_4, u64 VAR_5,
        struct err_info *VAR_6)
{
 struct amd64_pvt *VAR_7 = VAR_4->pvt_info;

 FUNC_3(VAR_5, VAR_6);





 VAR_6->src_mci = FUNC_4(VAR_4, VAR_5);
 if (!VAR_6->src_mci) {
  FUNC_1(VAR_4, "failed to map error addr 0x%lx to a node\n",
        (unsigned long)VAR_5);
  VAR_6->err_code = VAR_2;
  return;
 }


 VAR_6->csrow = FUNC_6(VAR_6->src_mci, VAR_5);
 if (VAR_6->csrow < 0) {
  VAR_6->err_code = VAR_1;
  return;
 }


 if (VAR_7->nbcfg & VAR_3) {
  VAR_6->channel = FUNC_5(VAR_4, VAR_6->syndrome);
  if (VAR_6->channel < 0) {





   FUNC_2(VAR_6->src_mci, "unknown syndrome 0x%04x - "
          "possible error reporting race\n",
          VAR_6->syndrome);
   VAR_6->err_code = VAR_0;
   return;
  }
 } else {
  VAR_6->channel = ((VAR_5 & FUNC_0(3)) != 0);
 }
}
