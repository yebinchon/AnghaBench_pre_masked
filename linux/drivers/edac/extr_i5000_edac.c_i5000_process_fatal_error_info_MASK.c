
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mem_ctl_info {int dummy; } ;
struct i5000_error_info {int ferr_fat_fbd; int nrecmemb; int nrecmema; } ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (int) ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int,int,int,char*,int,int) ;
 int FUNC_7 (int ,struct mem_ctl_info*,int,int ,int ,int ,int,int,int,char*,char*) ;
 int FUNC_8 (char*,int,char*,int,int,int,int,char*) ;

__attribute__((used)) static void FUNC_9(struct mem_ctl_info *VAR_3,
     struct i5000_error_info *VAR_4,
     int VAR_5)
{
 char VAR_6[VAR_0 + 1 + 160];
 char *VAR_7 = ((void*)0);
 u32 VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13, VAR_14;


 VAR_8 = (VAR_4->ferr_fat_fbd & VAR_1);
 if (!VAR_8)
  return;

 VAR_9 = FUNC_0(VAR_4->ferr_fat_fbd);


 VAR_10 = FUNC_1(VAR_4->nrecmema);
 VAR_11 = FUNC_3(VAR_4->nrecmema);
 VAR_12 = FUNC_5(VAR_4->nrecmema);
 VAR_13 = FUNC_4(VAR_4->nrecmemb);
 VAR_14 = FUNC_2(VAR_4->nrecmemb);

 FUNC_6(0, "\t\tCSROW= %d  Channel= %d (DRAM Bank= %d rdwr= %s ras= %d cas= %d)\n",
   VAR_11, VAR_9, VAR_10,
   VAR_12 ? "Write" : "Read", VAR_13, VAR_14);


 switch (VAR_8) {
 case 130:
  VAR_7 = "Alert on non-redundant retry or fast "
    "reset timeout";
  break;
 case 129:
  VAR_7 = "Northbound CRC error on non-redundant "
    "retry";
  break;
 case 128:
  {
  static int VAR_15;
  if (VAR_15)
   return;
  VAR_15++;

  VAR_7 = ">Tmid Thermal event with intelligent "
      "throttling disabled";
  }
  break;
 }


 FUNC_8(VAR_6, sizeof(VAR_6),
   "Bank=%d RAS=%d CAS=%d FATAL Err=0x%x (%s)",
   VAR_10, VAR_13, VAR_14, VAR_8, VAR_7);


 FUNC_7(VAR_2, VAR_3, 1, 0, 0, 0,
        VAR_9 >> 1, VAR_9 & 1, VAR_11,
        VAR_12 ? "Write error" : "Read error",
        VAR_6);
}
