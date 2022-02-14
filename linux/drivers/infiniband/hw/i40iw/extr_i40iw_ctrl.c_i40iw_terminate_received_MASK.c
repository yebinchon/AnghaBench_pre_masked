
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i40iw_terminate_hdr {scalar_t__ layer_etype; } ;
struct i40iw_sc_qp {int* q2_buf; int eventtype; int term_flags; } ;
struct i40iw_aeqe_info {int ae_id; scalar_t__ q2_data_written; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int*) ;
 int FUNC_1 (struct i40iw_sc_qp*,struct i40iw_aeqe_info*) ;
 int FUNC_2 (struct i40iw_sc_qp*,int ) ;
 int FUNC_3 (struct i40iw_sc_qp*) ;
 int FUNC_4 (struct i40iw_sc_qp*) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct i40iw_sc_qp *VAR_11, struct i40iw_aeqe_info *VAR_12)
{
 u8 *VAR_13 = VAR_11->q2_buf + VAR_7;
 __be32 *VAR_14;
 u8 VAR_15;
 u8 VAR_16;
 u16 VAR_17 = 0;
 struct i40iw_terminate_hdr *VAR_18;

 VAR_14 = (__be32 *)FUNC_0(VAR_13);
 if (VAR_12->q2_data_written) {

  VAR_15 = (FUNC_5(VAR_14[0]) >> 8) & 0xff;
  VAR_16 = FUNC_5(VAR_14[0]) & 0xff;
  if ((VAR_15 & 0xc0) != 0x40)
   VAR_17 = VAR_4;
  else if ((VAR_15 & 0x03) != 1)
   VAR_17 = VAR_1;
  else if (FUNC_5(VAR_14[2]) != 2)
   VAR_17 = VAR_3;
  else if (FUNC_5(VAR_14[3]) != 1)
   VAR_17 = VAR_0;
  else if (FUNC_5(VAR_14[4]) != 0)
   VAR_17 = VAR_2;
  else if ((VAR_16 & 0xc0) != 0x40)
   VAR_17 = VAR_5;

  VAR_12->ae_id = VAR_17;
  if (VAR_12->ae_id) {

   FUNC_1(VAR_11, VAR_12);
   return;
  }
 }

 VAR_11->term_flags |= VAR_6;
 VAR_11->eventtype = VAR_10;
 VAR_18 = (struct i40iw_terminate_hdr *)&VAR_14[5];
 if (VAR_18->layer_etype == VAR_9 ||
     VAR_18->layer_etype == VAR_8) {
  FUNC_2(VAR_11, 0);
 } else {
  FUNC_4(VAR_11);
  FUNC_3(VAR_11);
 }
}
