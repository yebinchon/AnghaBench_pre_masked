
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {int dummy; } ;
struct i5400_error_info {int ferr_fat_fbd; } ;
typedef int msg ;
typedef enum hw_event_mc_err_type { ____Placeholder_hw_event_mc_err_type } hw_event_mc_err_type ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int,int,int,int,int,int,int ,int,int) ;
 int FUNC_2 (int,struct mem_ctl_info*,int,int ,int ,int ,int,int,int,char*,char*) ;
 int * VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned long*,int ) ;
 int FUNC_5 (struct i5400_error_info*) ;
 int FUNC_6 (struct i5400_error_info*) ;
 int FUNC_7 (struct i5400_error_info*) ;
 int FUNC_8 (struct i5400_error_info*) ;
 int FUNC_9 (struct i5400_error_info*) ;
 int FUNC_10 (struct i5400_error_info*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (char*,int,char*,int,int,int,int,unsigned long,int ) ;

__attribute__((used)) static void FUNC_13(struct mem_ctl_info *VAR_6,
        struct i5400_error_info *VAR_7,
        unsigned long VAR_8)
{
 char VAR_9[VAR_0 + 1 + 90 + 80];
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16, VAR_17;
 int VAR_18;
 char *VAR_19 = ((void*)0);
 enum hw_event_mc_err_type VAR_20 = VAR_4;

 if (!VAR_8)
  return;

 if (VAR_8 & VAR_1) {
  VAR_19 = "FATAL";
  VAR_20 = VAR_3;
 } else if (VAR_8 & VAR_2)
  VAR_19 = "NON-FATAL uncorrected";
 else
  VAR_19 = "NON-FATAL recoverable";



 VAR_10 = FUNC_3(VAR_7->ferr_fat_fbd);
 VAR_11 = VAR_10;


 VAR_12 = FUNC_5(VAR_7);
 VAR_14 = FUNC_8(VAR_7);
 VAR_13 = FUNC_6(VAR_7);
 VAR_15 = FUNC_10(VAR_7);
 VAR_16 = FUNC_9(VAR_7);
 VAR_17 = FUNC_7(VAR_7);

 FUNC_1(0, "\t\tDIMM= %d  Channels= %d,%d  (Branch= %d DRAM Bank= %d Buffer ID = %d rdwr= %s ras= %d cas= %d)\n",
   VAR_14, VAR_11, VAR_11 + 1, VAR_10 >> 1, VAR_12,
   VAR_13, FUNC_11(VAR_15), VAR_16, VAR_17);


 VAR_18 = FUNC_4(&VAR_8, FUNC_0(VAR_5));


 FUNC_12(VAR_9, sizeof(VAR_9),
   "Bank=%d Buffer ID = %d RAS=%d CAS=%d Err=0x%lx (%s)",
   VAR_12, VAR_13, VAR_16, VAR_17, VAR_8, VAR_5[VAR_18]);

 FUNC_2(VAR_20, VAR_6, 1, 0, 0, 0,
        VAR_10 >> 1, -1, VAR_14,
        VAR_15 ? "Write error" : "Read error",
        VAR_9);
}
