
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mem_ctl_info {int dummy; } ;
struct i5000_error_info {int ferr_nf_fbd; int recmemb; int recmema; int redmemb; int nrecmemb; int nrecmema; } ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,int,...) ;
 int FUNC_13 (int ,struct mem_ctl_info*,int,int ,int ,int ,int,int,int,char*,char*) ;
 int VAR_10 ;
 int FUNC_14 (char*,int,char*,int,...) ;

__attribute__((used)) static void FUNC_15(struct mem_ctl_info *VAR_11,
     struct i5000_error_info *VAR_12,
     int VAR_13)
{
 char VAR_14[VAR_0 + 1 + 170];
 char *VAR_15 = ((void*)0);
 u32 VAR_16;
 u32 VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25, VAR_26;


 VAR_16 = (VAR_12->ferr_nf_fbd & VAR_3);
 if (!VAR_16)
  return;


 VAR_17 = VAR_16 & VAR_7;
 if (VAR_17) {
  FUNC_12(0, "\tUncorrected bits= 0x%x\n", VAR_17);

  VAR_20 = FUNC_0(VAR_12->ferr_nf_fbd);





  VAR_21 = VAR_20 & 2;

  VAR_22 = FUNC_1(VAR_12->nrecmema);
  VAR_23 = FUNC_3(VAR_12->nrecmema);
  VAR_24 = FUNC_5(VAR_12->nrecmema);
  VAR_25 = FUNC_4(VAR_12->nrecmemb);
  VAR_26 = FUNC_2(VAR_12->nrecmemb);

  FUNC_12(0, "\t\tCSROW= %d  Channels= %d,%d  (Branch= %d DRAM Bank= %d rdwr= %s ras= %d cas= %d)\n",
    VAR_23, VAR_21, VAR_21 + 1, VAR_20 >> 1, VAR_22,
    VAR_24 ? "Write" : "Read", VAR_25, VAR_26);

  switch (VAR_17) {
  case 145:
   VAR_15 = "Non-Aliased Uncorrectable Patrol Data ECC";
   break;
  case 146:
   VAR_15 = "Non-Aliased Uncorrectable Spare-Copy "
     "Data ECC";
   break;
  case 147:
   VAR_15 = "Non-Aliased Uncorrectable Mirrored Demand "
     "Data ECC";
   break;
  case 128:
   VAR_15 = "Non-Aliased Uncorrectable Non-Mirrored "
     "Demand Data ECC";
   break;
  case 129:
   VAR_15 = "Aliased Uncorrectable Patrol Data ECC";
   break;
  case 130:
   VAR_15 = "Aliased Uncorrectable Spare-Copy Data ECC";
   break;
  case 131:
   VAR_15 = "Aliased Uncorrectable Mirrored Demand "
     "Data ECC";
   break;
  case 132:
   VAR_15 = "Aliased Uncorrectable Non-Mirrored Demand "
     "Data ECC";
   break;
  case 133:
   VAR_15 = "Uncorrectable Data ECC on Replay";
   break;
  }


  FUNC_14(VAR_14, sizeof(VAR_14),
    "Rank=%d Bank=%d RAS=%d CAS=%d, UE Err=0x%x (%s)",
    VAR_23, VAR_22, VAR_25, VAR_26, VAR_17, VAR_15);


  FUNC_13(VAR_9, VAR_11, 1, 0, 0, 0,
    VAR_21 >> 1, -1, VAR_23,
    VAR_24 ? "Write error" : "Read error",
    VAR_14);
 }


 VAR_18 = VAR_16 & VAR_1;
 if (VAR_18) {
  FUNC_12(0, "\tCorrected bits= 0x%x\n", VAR_18);

  VAR_20 = FUNC_0(VAR_12->ferr_nf_fbd);

  VAR_21 = 0;
  if (FUNC_8(VAR_12->redmemb))
   VAR_21 = 1;



  VAR_21 += VAR_20;

  VAR_22 = FUNC_6(VAR_12->recmema);
  VAR_23 = FUNC_9(VAR_12->recmema);
  VAR_24 = FUNC_11(VAR_12->recmema);
  VAR_25 = FUNC_10(VAR_12->recmemb);
  VAR_26 = FUNC_7(VAR_12->recmemb);

  FUNC_12(0, "\t\tCSROW= %d Channel= %d  (Branch %d DRAM Bank= %d rdwr= %s ras= %d cas= %d)\n",
    VAR_23, VAR_21, VAR_20 >> 1, VAR_22,
    VAR_24 ? "Write" : "Read", VAR_25, VAR_26);

  switch (VAR_18) {
  case 141:
   VAR_15 = "Correctable Non-Mirrored Demand Data ECC";
   break;
  case 140:
   VAR_15 = "Correctable Mirrored Demand Data ECC";
   break;
  case 139:
   VAR_15 = "Correctable Spare-Copy Data ECC";
   break;
  case 138:
   VAR_15 = "Correctable Patrol Data ECC";
   break;
  }


  FUNC_14(VAR_14, sizeof(VAR_14),
    "Rank=%d Bank=%d RDWR=%s RAS=%d "
    "CAS=%d, CE Err=0x%x (%s))", VAR_20 >> 1, VAR_22,
    VAR_24 ? "Write" : "Read", VAR_25, VAR_26, VAR_18,
    VAR_15);


  FUNC_13(VAR_8, VAR_11, 1, 0, 0, 0,
    VAR_21 >> 1, VAR_21 % 2, VAR_23,
    VAR_24 ? "Write error" : "Read error",
    VAR_14);
 }

 if (!VAR_10)
  return;

 VAR_19 = VAR_16 & (VAR_4 | VAR_5 |
       VAR_6 | VAR_2);
 if (VAR_19) {
  switch (VAR_19) {
  case 144:
   VAR_15 = "Non-Retry or Redundant Retry FBD Memory "
     "Alert or Redundant Fast Reset Timeout";
   break;
  case 143:
   VAR_15 = "Non-Retry or Redundant Retry FBD "
     "Configuration Alert";
   break;
  case 142:
   VAR_15 = "Non-Retry or Redundant Retry FBD "
     "Northbound CRC error on read data";
   break;
  case 137:
   VAR_15 = "FBD Northbound CRC error on "
     "FBD Sync Status";
   break;
  case 136:
   VAR_15 = "SPD protocol error";
   break;
  case 135:
   VAR_15 = "DIMM-spare copy started";
   break;
  case 134:
   VAR_15 = "DIMM-spare copy completed";
   break;
  }
  VAR_20 = FUNC_0(VAR_12->ferr_nf_fbd);


  FUNC_14(VAR_14, sizeof(VAR_14),
    "Err=%#x (%s)", VAR_19, VAR_15);


  FUNC_13(VAR_8, VAR_11, 1, 0, 0, 0,
    VAR_20 >> 1, -1, -1,
    "Misc error", VAR_14);
 }
}
