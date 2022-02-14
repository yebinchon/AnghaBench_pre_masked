
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ opcode; } ;
struct rvt_swqe {TYPE_1__ wr; int psn; } ;
struct rvt_qp {scalar_t__ s_acked; scalar_t__ s_size; scalar_t__ s_tail; scalar_t__ s_psn; scalar_t__ s_sending_psn; int s_flags; int s_sending_hpsn; void* s_state; scalar_t__ s_cur; } ;







 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,int ) ;
 struct rvt_swqe* FUNC_2 (struct rvt_qp*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct rvt_qp *VAR_5, u32 VAR_6)
{
 u32 VAR_7 = VAR_5->s_acked;
 struct rvt_swqe *VAR_8 = FUNC_2(VAR_5, VAR_7);
 u32 VAR_9;

 VAR_5->s_cur = VAR_7;





 if (FUNC_1(VAR_6, VAR_8->psn) <= 0) {
  VAR_5->s_state = FUNC_0(VAR_4);
  goto done;
 }


 VAR_9 = VAR_8->wr.opcode;
 for (;;) {
  int VAR_10;

  if (++VAR_7 == VAR_5->s_size)
   VAR_7 = 0;
  if (VAR_7 == VAR_5->s_tail)
   break;
  VAR_8 = FUNC_2(VAR_5, VAR_7);
  VAR_10 = FUNC_1(VAR_6, VAR_8->psn);
  if (VAR_10 < 0)
   break;
  VAR_5->s_cur = VAR_7;




  if (VAR_10 == 0) {
   VAR_5->s_state = FUNC_0(VAR_4);
   goto done;
  }
  VAR_9 = VAR_8->wr.opcode;
 }






 switch (VAR_9) {
 case 129:
 case 128:
  VAR_5->s_state = FUNC_0(VAR_0);
  break;

 case 131:
 case 130:
  VAR_5->s_state = FUNC_0(VAR_1);
  break;

 case 132:
  VAR_5->s_state = FUNC_0(VAR_2);
  break;

 default:




  VAR_5->s_state = FUNC_0(VAR_4);
 }
done:
 VAR_5->s_psn = VAR_6;





 if ((FUNC_1(VAR_5->s_psn, VAR_5->s_sending_hpsn) <= 0) &&
     (FUNC_1(VAR_5->s_sending_psn, VAR_5->s_sending_hpsn) <= 0))
  VAR_5->s_flags |= VAR_3;
}
