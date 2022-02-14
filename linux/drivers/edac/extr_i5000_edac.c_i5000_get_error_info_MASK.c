
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mem_ctl_info {struct i5000_pvt* pvt_info; } ;
struct i5000_pvt {int branchmap_werrors; } ;
struct i5000_error_info {int ferr_fat_fbd; int nerr_fat_fbd; int nrecmemb; int ferr_nf_fbd; int nerr_nf_fbd; int recmemb; int redmemb; scalar_t__ recmema; scalar_t__ nrecmema; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,scalar_t__*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct mem_ctl_info *VAR_12,
     struct i5000_error_info *VAR_13)
{
 struct i5000_pvt *VAR_14;
 u32 VAR_15;

 VAR_14 = VAR_12->pvt_info;


 FUNC_0(VAR_14->branchmap_werrors, VAR_0, &VAR_15);



 VAR_15 &= (VAR_1 | VAR_2);



 if (VAR_15 & VAR_2) {
  VAR_13->ferr_fat_fbd = VAR_15;


  FUNC_0(VAR_14->branchmap_werrors,
    VAR_5, &VAR_13->nerr_fat_fbd);
  FUNC_1(VAR_14->branchmap_werrors,
    VAR_7, &VAR_13->nrecmema);
  FUNC_0(VAR_14->branchmap_werrors,
    VAR_8, &VAR_13->nrecmemb);


  FUNC_2(VAR_14->branchmap_werrors,
    VAR_0, VAR_15);
 } else {
  VAR_13->ferr_fat_fbd = 0;
  VAR_13->nerr_fat_fbd = 0;
  VAR_13->nrecmema = 0;
  VAR_13->nrecmemb = 0;
 }


 FUNC_0(VAR_14->branchmap_werrors, VAR_3, &VAR_15);



 if (VAR_15 & VAR_4) {
  VAR_13->ferr_nf_fbd = VAR_15;


  FUNC_0(VAR_14->branchmap_werrors,
    VAR_6, &VAR_13->nerr_nf_fbd);
  FUNC_1(VAR_14->branchmap_werrors,
    VAR_9, &VAR_13->recmema);
  FUNC_0(VAR_14->branchmap_werrors,
    VAR_10, &VAR_13->recmemb);
  FUNC_0(VAR_14->branchmap_werrors,
    VAR_11, &VAR_13->redmemb);


  FUNC_2(VAR_14->branchmap_werrors,
    VAR_3, VAR_15);
 } else {
  VAR_13->ferr_nf_fbd = 0;
  VAR_13->nerr_nf_fbd = 0;
  VAR_13->recmema = 0;
  VAR_13->recmemb = 0;
  VAR_13->redmemb = 0;
 }
}
