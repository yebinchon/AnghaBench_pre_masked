
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hfi1_devdata {int * rcv_err_status_cnt; int pport; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hfi1_devdata*,char*,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct hfi1_devdata*) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct hfi1_devdata *VAR_4, u32 VAR_5, u64 VAR_6)
{
 char VAR_7[96];
 int VAR_8 = 0;

 FUNC_0(VAR_4, "Receive Error: %s\n",
      FUNC_3(VAR_7, sizeof(VAR_7), VAR_6));

 if (VAR_6 & VAR_0) {
  int VAR_9 = 0;





  if (FUNC_2(VAR_4) && (VAR_6 & VAR_3))
   VAR_9 = VAR_1;

  FUNC_4(VAR_4->pport, VAR_9);
 }

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  if (VAR_6 & (1ull << VAR_8))
   FUNC_1(&VAR_4->rcv_err_status_cnt[VAR_8]);
 }
}
