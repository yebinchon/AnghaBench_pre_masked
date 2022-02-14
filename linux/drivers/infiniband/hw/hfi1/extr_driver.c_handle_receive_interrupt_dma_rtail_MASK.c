
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hfi1_packet {scalar_t__ rhqoff; } ;
struct hfi1_ctxtdata {scalar_t__ head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hfi1_packet*) ;
 scalar_t__ FUNC_1 (struct hfi1_ctxtdata*) ;
 int FUNC_2 (struct hfi1_ctxtdata*,struct hfi1_packet*) ;
 int FUNC_3 (struct hfi1_ctxtdata*,struct hfi1_packet*) ;
 int FUNC_4 (struct hfi1_packet*,int) ;
 int FUNC_5 (struct hfi1_packet*) ;
 int FUNC_6 (int,struct hfi1_packet*) ;
 int FUNC_7 () ;

int FUNC_8(struct hfi1_ctxtdata *VAR_2, int VAR_3)
{
 u32 VAR_4;
 int VAR_5 = VAR_1;
 struct hfi1_packet VAR_6;

 FUNC_2(VAR_2, &VAR_6);
 VAR_4 = FUNC_1(VAR_2);
 if (VAR_6.rhqoff == VAR_4) {
  VAR_5 = VAR_0;
  goto bail;
 }
 FUNC_7();

 FUNC_3(VAR_2, &VAR_6);

 while (VAR_5 == VAR_1) {
  VAR_5 = FUNC_4(&VAR_6, VAR_3);
  if (VAR_6.rhqoff == VAR_4)
   VAR_5 = VAR_0;
  FUNC_6(VAR_5, &VAR_6);
 }
 FUNC_5(&VAR_6);
 VAR_2->head = VAR_6.rhqoff;
bail:
 FUNC_0(&VAR_6);
 return VAR_5;
}
