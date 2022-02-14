
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
typedef int u32 ;
struct hfi1_devdata {scalar_t__ icode; int sw_cce_err_status_aggregate; int * cce_err_status_cnt; int pport; } ;
typedef int buf ;


 unsigned long long VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,unsigned long long) ;
 int FUNC_1 (struct hfi1_devdata*,char*,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct hfi1_devdata*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct hfi1_devdata *VAR_4, u32 VAR_5, u64 VAR_6)
{
 char VAR_7[96];
 int VAR_8 = 0;





 FUNC_1(VAR_4, "CCE Error: %s\n",
      FUNC_0(VAR_7, sizeof(VAR_7), VAR_6));

 if ((VAR_6 & VAR_0) &&
     FUNC_3(VAR_4) && (VAR_4->icode != VAR_2)) {


  FUNC_4(VAR_4->pport, VAR_1);
 }

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  if (VAR_6 & (1ull << VAR_8)) {
   FUNC_2(&VAR_4->cce_err_status_cnt[VAR_8]);

   FUNC_2(&VAR_4->sw_cce_err_status_aggregate);
  }
 }
}
