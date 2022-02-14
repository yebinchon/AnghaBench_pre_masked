
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hfi1_packet {int rhqoff; int rhf; } ;
struct hfi1_ctxtdata {int seq_cnt; int head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hfi1_packet*) ;
 int FUNC_1 (struct hfi1_ctxtdata*,struct hfi1_packet*) ;
 int FUNC_2 (struct hfi1_ctxtdata*,struct hfi1_packet*) ;
 int FUNC_3 (struct hfi1_packet*,int) ;
 int FUNC_4 (struct hfi1_packet*) ;
 int FUNC_5 (int,struct hfi1_packet*) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct hfi1_ctxtdata *VAR_2, int VAR_3)
{
 u32 VAR_4;
 int VAR_5 = VAR_1;
 struct hfi1_packet VAR_6;

 FUNC_1(VAR_2, &VAR_6);
 VAR_4 = FUNC_6(VAR_6.rhf);
 if (VAR_4 != VAR_2->seq_cnt) {
  VAR_5 = VAR_0;
  goto bail;
 }

 FUNC_2(VAR_2, &VAR_6);

 while (VAR_5 == VAR_1) {
  VAR_5 = FUNC_3(&VAR_6, VAR_3);
  VAR_4 = FUNC_6(VAR_6.rhf);
  if (++VAR_2->seq_cnt > 13)
   VAR_2->seq_cnt = 1;
  if (VAR_4 != VAR_2->seq_cnt)
   VAR_5 = VAR_0;
  FUNC_5(VAR_5, &VAR_6);
 }
 FUNC_4(&VAR_6);
 VAR_2->head = VAR_6.rhqoff;
bail:
 FUNC_0(&VAR_6);
 return VAR_5;
}
