
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
typedef int u32 ;
struct hfi1_devdata {int * send_err_status_cnt; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (struct hfi1_devdata*,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,unsigned long long) ;

__attribute__((used)) static void FUNC_3(struct hfi1_devdata *VAR_1, u32 VAR_2, u64 VAR_3)
{
 char VAR_4[96];
 int VAR_5 = 0;

 FUNC_0(VAR_1, "Send Error: %s\n",
      FUNC_2(VAR_4, sizeof(VAR_4), VAR_3));

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_3 & (1ull << VAR_5))
   FUNC_1(&VAR_1->send_err_status_cnt[VAR_5]);
 }
}
