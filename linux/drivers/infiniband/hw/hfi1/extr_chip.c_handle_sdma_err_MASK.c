
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hfi1_devdata {int * send_dma_err_status_cnt; int pport; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hfi1_devdata*,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct hfi1_devdata *VAR_2, u32 VAR_3, u64 VAR_4)
{
 char VAR_5[96];
 int VAR_6 = 0;

 FUNC_0(VAR_2, "SDMA Error: %s\n",
      FUNC_2(VAR_5, sizeof(VAR_5), VAR_4));

 if (VAR_4 & VAR_0)
  FUNC_3(VAR_2->pport, 0);

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_4 & (1ull << VAR_6))
   FUNC_1(&VAR_2->send_dma_err_status_cnt[VAR_6]);
 }
}
