
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct mem_ctl_info {struct i7300_pvt* pvt_info; } ;
struct i7300_pvt {int pci_dev_16_2_fsb_err_regs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int ,unsigned long) ;
 int VAR_2 ;
 int FUNC_2 (unsigned long) ;
 int VAR_3 ;
 int FUNC_3 (unsigned long) ;
 int VAR_4 ;
 unsigned long FUNC_4 (unsigned long*,int ) ;
 int FUNC_5 (struct mem_ctl_info*,int ,char*,char*,char const*) ;
 int FUNC_6 (int ,int ,unsigned long*) ;
 int FUNC_7 (int ,int ,unsigned long) ;
 scalar_t__ FUNC_8 (unsigned long) ;

__attribute__((used)) static void FUNC_9(struct mem_ctl_info *VAR_5)
{
 struct i7300_pvt *VAR_6;
 u32 VAR_7, VAR_8;
 unsigned long VAR_9;
 const char *VAR_10;
 bool VAR_11;

 VAR_6 = VAR_5->pvt_info;


 FUNC_6(VAR_6->pci_dev_16_2_fsb_err_regs,
         VAR_0, &VAR_8);
 if (FUNC_8(VAR_8)) {
  VAR_9 = VAR_8;
  VAR_7 = FUNC_4(&VAR_9,
     FUNC_0(VAR_3));
  VAR_10 = FUNC_1(VAR_3, VAR_7);
  VAR_11 = FUNC_2(VAR_7);


  FUNC_7(VAR_6->pci_dev_16_2_fsb_err_regs,
           VAR_0, VAR_8);

  goto error_global;
 }

 FUNC_6(VAR_6->pci_dev_16_2_fsb_err_regs,
         VAR_1, &VAR_8);
 if (FUNC_8(VAR_8)) {
  VAR_9 = VAR_8;
  VAR_7 = FUNC_4(&VAR_9,
     FUNC_0(VAR_4));
  VAR_10 = FUNC_1(VAR_4, VAR_7);
  VAR_11 = FUNC_3(VAR_7);


  FUNC_7(VAR_6->pci_dev_16_2_fsb_err_regs,
           VAR_1, VAR_8);

  goto error_global;
 }
 return;

error_global:
 FUNC_5(VAR_5, VAR_2, "%s misc error: %s\n",
   VAR_11 ? "Fatal" : "NOT fatal", VAR_10);
}
