
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mem_ctl_info {int pdev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mem_ctl_info*,int,int) ;
 int FUNC_1 (struct mem_ctl_info*,int,int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_8, void *VAR_9)
{
 struct mem_ctl_info *VAR_10 = VAR_9;
 u32 VAR_11, VAR_12;
 u32 VAR_13, VAR_14, VAR_15;
 u8 VAR_16, VAR_17;

 FUNC_3(VAR_7, VAR_2, &VAR_13);
 FUNC_2(VAR_10->pdev, "received edac interrupt w/ mcr register 50: 0x%x\n",
  VAR_13);


 VAR_16 = (VAR_13 & VAR_4) >> 16;
 VAR_17 = (VAR_13 & VAR_5) >> 12;

 FUNC_2(VAR_10->pdev, "%d recoverable interrupts and %d unrecoverable interrupts\n",
  VAR_16, VAR_17);

 FUNC_3(VAR_7, VAR_1, &VAR_15);
 VAR_12 = VAR_15;

 FUNC_3(VAR_7, VAR_0, &VAR_14);
 VAR_11 = VAR_14;


 FUNC_4(VAR_7, VAR_2,
      VAR_3,
      VAR_3);

 FUNC_4(VAR_7, VAR_2,
      VAR_3, 0);


 FUNC_0(VAR_10, VAR_16, VAR_11);
 FUNC_1(VAR_10, VAR_17, VAR_12);

 if (!VAR_16 && !VAR_17)
  FUNC_2(VAR_10->pdev, "received edac interrupt, but did not find any ECC counters\n");

 FUNC_3(VAR_7, VAR_2, &VAR_13);
 FUNC_2(VAR_10->pdev, "edac interrupt handled. mcr reg 50 is now: 0x%x\n",
  VAR_13);

 return VAR_6;
}
