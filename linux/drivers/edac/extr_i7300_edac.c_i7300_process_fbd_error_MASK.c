
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
typedef int u16 ;
struct mem_ctl_info {struct i7300_pvt* pvt_info; } ;
struct i7300_pvt {int tmp_prt_buffer; int pci_dev_16_1_fsb_addr_map; } ;


 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 char* FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_5 (int ) ;
 unsigned int FUNC_6 (int ) ;
 int VAR_7 ;
 unsigned int FUNC_7 (unsigned long) ;
 int FUNC_8 (unsigned long) ;
 unsigned int FUNC_9 (unsigned long) ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int FUNC_10 (int ) ;
 unsigned int FUNC_11 (int ) ;
 int VAR_10 ;
 unsigned int FUNC_12 (unsigned long) ;
 int FUNC_13 (unsigned long) ;
 unsigned int FUNC_14 (unsigned long) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_15 (int ,struct mem_ctl_info*,int,int ,int ,unsigned long,unsigned int,unsigned int,unsigned int,char*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned long FUNC_16 (unsigned long*,int ) ;
 int FUNC_17 (int ,int ,unsigned long*) ;
 int FUNC_18 (int ,int ,int *) ;
 int FUNC_19 (int ,int ,unsigned long) ;
 int FUNC_20 (int ,int ,char*,unsigned int,unsigned int,unsigned int,unsigned long,char const*) ;
 scalar_t__ FUNC_21 (unsigned long) ;

__attribute__((used)) static void FUNC_22(struct mem_ctl_info *VAR_15)
{
 struct i7300_pvt *VAR_16;
 u32 VAR_17, VAR_18, VAR_19;
 u16 VAR_20;
 unsigned VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
 u32 VAR_27;

 unsigned long VAR_28;
 const char *VAR_29;
 bool VAR_30;

 VAR_16 = VAR_15->pvt_info;


 FUNC_17(VAR_16->pci_dev_16_1_fsb_addr_map,
         VAR_0, &VAR_19);
 if (FUNC_21(VAR_19 & VAR_1)) {
  VAR_28 = VAR_19 & VAR_1 ;
  VAR_17 = FUNC_16(&VAR_28,
     FUNC_0(VAR_13));
  VAR_29 = FUNC_2(VAR_13, VAR_17);
  VAR_21 = (FUNC_3(VAR_19) == 2) ? 1 : 0;

  FUNC_18(VAR_16->pci_dev_16_1_fsb_addr_map,
         VAR_6, &VAR_20);
  VAR_23 = FUNC_5(VAR_20);
  VAR_24 = FUNC_6(VAR_20);

  FUNC_17(VAR_16->pci_dev_16_1_fsb_addr_map,
    VAR_7, &VAR_18);
  VAR_30 = FUNC_8(VAR_18);
  VAR_25 = FUNC_7(VAR_18);
  VAR_26 = FUNC_9(VAR_18);


  FUNC_19(VAR_16->pci_dev_16_1_fsb_addr_map,
    VAR_0, VAR_19);

  FUNC_20(VAR_16->tmp_prt_buffer, VAR_8,
    "Bank=%d RAS=%d CAS=%d Err=0x%lx (%s))",
    VAR_23, VAR_26, VAR_25, VAR_28, VAR_29);

  FUNC_15(VAR_5, VAR_15, 1, 0, 0, 0,
         VAR_21, -1, VAR_24,
         VAR_30 ? "Write error" : "Read error",
         VAR_16->tmp_prt_buffer);

 }


 FUNC_17(VAR_16->pci_dev_16_1_fsb_addr_map,
         VAR_2, &VAR_19);
 if (FUNC_21(VAR_19 & VAR_3)) {
  VAR_28 = VAR_19 & VAR_3;
  VAR_17 = FUNC_16(&VAR_28,
     FUNC_0(VAR_14));
  VAR_29 = FUNC_2(VAR_14, VAR_17);
  VAR_21 = (FUNC_4(VAR_19) == 2) ? 1 : 0;

  FUNC_17(VAR_16->pci_dev_16_1_fsb_addr_map,
   VAR_11, &VAR_27);

  FUNC_18(VAR_16->pci_dev_16_1_fsb_addr_map,
         VAR_9, &VAR_20);
  VAR_23 = FUNC_10(VAR_20);
  VAR_24 = FUNC_11(VAR_20);

  FUNC_17(VAR_16->pci_dev_16_1_fsb_addr_map,
    VAR_10, &VAR_18);
  VAR_30 = FUNC_13(VAR_18);
  VAR_25 = FUNC_12(VAR_18);
  VAR_26 = FUNC_14(VAR_18);

  FUNC_17(VAR_16->pci_dev_16_1_fsb_addr_map,
         VAR_12, &VAR_18);
  VAR_22 = (VAR_21 << 1);


  VAR_22 += !!(VAR_18 & FUNC_1(17));


  FUNC_19(VAR_16->pci_dev_16_1_fsb_addr_map,
    VAR_2, VAR_19);


  FUNC_20(VAR_16->tmp_prt_buffer, VAR_8,
    "DRAM-Bank=%d RAS=%d CAS=%d, Err=0x%lx (%s))",
    VAR_23, VAR_26, VAR_25, VAR_28, VAR_29);

  FUNC_15(VAR_4, VAR_15, 1, 0, 0,
         VAR_27,
         VAR_21 >> 1, VAR_22 % 2, VAR_24,
         VAR_30 ? "Write error" : "Read error",
         VAR_16->tmp_prt_buffer);
 }
 return;
}
