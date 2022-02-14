
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {int dummy; } ;
struct i5400_error_info {int ferr_nf_fbd; int redmemb; } ;
typedef int msg ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (int ,struct mem_ctl_info*,int,int ,int ,int ,int,int,int,char*,char*) ;
 int * VAR_7 ;
 int FUNC_4 (int) ;
 int FUNC_5 (unsigned long*,int ) ;
 unsigned long FUNC_6 (int) ;
 int FUNC_7 (struct mem_ctl_info*,int ,char*,int,unsigned long,int ) ;
 int FUNC_8 (struct mem_ctl_info*,struct i5400_error_info*,unsigned long) ;
 char* FUNC_9 (int) ;
 int FUNC_10 (struct i5400_error_info*) ;
 int FUNC_11 (struct i5400_error_info*) ;
 int FUNC_12 (struct i5400_error_info*) ;
 int FUNC_13 (struct i5400_error_info*) ;
 int FUNC_14 (struct i5400_error_info*) ;
 int FUNC_15 (char*,int,char*,int,int,char*,int,int,unsigned long,int ) ;

__attribute__((used)) static void FUNC_16(struct mem_ctl_info *VAR_8,
     struct i5400_error_info *VAR_9)
{
 char VAR_10[VAR_0 + 1 + 90 + 80];
 unsigned long VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17, VAR_18;
 int VAR_19;


 VAR_11 = FUNC_6(VAR_9->ferr_nf_fbd & VAR_4);
 if (!VAR_11)
  return;



 if (VAR_11 & (VAR_3 | VAR_2)) {
  FUNC_8(VAR_8, VAR_9, VAR_11);
  return;
 }


 if (VAR_11 & VAR_1) {
  FUNC_2(0, "\tCorrected bits= 0x%lx\n", VAR_11);

  VAR_12 = FUNC_4(VAR_9->ferr_nf_fbd);

  VAR_13 = 0;
  if (FUNC_1(VAR_9->redmemb))
   VAR_13 = 1;



  VAR_13 += VAR_12;

  VAR_14 = FUNC_10(VAR_9);
  VAR_15 = FUNC_12(VAR_9);
  VAR_16 = FUNC_14(VAR_9);
  VAR_17 = FUNC_13(VAR_9);
  VAR_18 = FUNC_11(VAR_9);


  VAR_19 = FUNC_5(&VAR_11, FUNC_0(VAR_7));

  FUNC_2(0, "\t\tDIMM= %d Channel= %d  (Branch %d DRAM Bank= %d rdwr= %s ras= %d cas= %d)\n",
    VAR_15, VAR_13, VAR_12 >> 1, VAR_14,
    FUNC_9(VAR_16), VAR_17, VAR_18);


  FUNC_15(VAR_10, sizeof(VAR_10),
    "Corrected error (Branch=%d DRAM-Bank=%d RDWR=%s "
    "RAS=%d CAS=%d, CE Err=0x%lx (%s))",
    VAR_12 >> 1, VAR_14, FUNC_9(VAR_16), VAR_17, VAR_18,
    VAR_11, VAR_7[VAR_19]);

  FUNC_3(VAR_5, VAR_8, 1, 0, 0, 0,
         VAR_12 >> 1, VAR_13 % 2, VAR_15,
         VAR_16 ? "Write error" : "Read error",
         VAR_10);

  return;
 }


 VAR_19 = FUNC_5(&VAR_11, FUNC_0(VAR_7));

 VAR_12 = FUNC_4(VAR_9->ferr_nf_fbd);

 FUNC_7(VAR_8, VAR_6,
   "Non-Fatal misc error (Branch=%d Err=%#lx (%s))",
   VAR_12 >> 1, VAR_11, VAR_7[VAR_19]);
}
