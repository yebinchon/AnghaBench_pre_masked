
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hfi1_devdata {scalar_t__ icode; int * send_egress_err_status_cnt; int pport; } ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hfi1_devdata*) ;
 int FUNC_1 (struct hfi1_devdata*,char*,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (struct hfi1_devdata*,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct hfi1_devdata*,int) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct hfi1_devdata*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static void FUNC_12(struct hfi1_devdata *VAR_4, u32 VAR_5, u64 VAR_6)
{
 u64 VAR_7 = VAR_6, VAR_8 = 0;
 char VAR_9[96];
 int VAR_10 = 0;

 if (VAR_6 & VAR_0)
  FUNC_11(VAR_4->pport, 0);
 else if (FUNC_9(VAR_4) &&
   (VAR_6 & VAR_3) &&
   (VAR_4->icode != VAR_1))
  FUNC_11(VAR_4->pport, 0);

 while (VAR_7) {
  int VAR_11 = FUNC_6(VAR_7);

  int VAR_12 = VAR_11 - 1;
  u64 VAR_13 = 1ULL << VAR_12;

  if (FUNC_10(VAR_12)) {
   FUNC_0(VAR_4);
   VAR_8 |= VAR_13;
  } else if (FUNC_3(VAR_12)) {
   int VAR_14 = FUNC_5(VAR_4, FUNC_2(VAR_12));

   FUNC_7(VAR_4, VAR_14);
   VAR_8 |= VAR_13;
  }
  VAR_7 &= ~VAR_13;
 }

 VAR_6 &= ~VAR_8;

 if (VAR_6)
  FUNC_1(VAR_4, "Egress Error: %s\n",
       FUNC_4(VAR_9, sizeof(VAR_9), VAR_6));

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  if (VAR_6 & (1ull << VAR_10))
   FUNC_8(&VAR_4->send_egress_err_status_cnt[VAR_10]);
 }
}
