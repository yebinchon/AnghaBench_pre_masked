
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef size_t u32 ;
struct TYPE_5__ {int swqe_polarity; TYPE_1__* sq_wrtrk_array; } ;
struct i40iw_sc_qp {TYPE_2__ qp_uk; int dev; } ;
struct i40iw_puda_send_info {int tcplen; int maclen; int doloopback; int paddr; int len; scalar_t__ scratch; scalar_t__ ipv4; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_4__ {uintptr_t wrid; } ;


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
 int VAR_12 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,char*,int*,int) ;
 int FUNC_2 (int*,int) ;
 int* FUNC_3 (TYPE_2__*,size_t*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int*,int,int) ;

enum i40iw_status_code FUNC_6(struct i40iw_sc_qp *VAR_13,
           struct i40iw_puda_send_info *VAR_14)
{
 u64 *VAR_15;
 u32 VAR_16, VAR_17;
 u64 VAR_18[2];
 u32 VAR_19;
 u8 VAR_20;


 VAR_17 = VAR_14->tcplen >> 2;
 if (VAR_14->ipv4) {
  VAR_20 = 3;
  VAR_16 = 5;
 } else {
  VAR_20 = 1;
  VAR_16 = 10;
 }

 VAR_15 = FUNC_3(&VAR_13->qp_uk, &VAR_19);
 if (!VAR_15)
  return VAR_2;
 VAR_13->qp_uk.sq_wrtrk_array[VAR_19].wrid = (uintptr_t)VAR_14->scratch;


 VAR_18[0] = FUNC_0((VAR_14->maclen >> 1), VAR_9) |
      FUNC_0(VAR_16, VAR_6) | FUNC_0(1, VAR_8) |
      FUNC_0(VAR_20, VAR_5) |
      FUNC_0(VAR_17, VAR_7);

 VAR_18[1] = FUNC_0(VAR_3, VAR_10) |
      FUNC_0(1, VAR_11) |
      FUNC_0(VAR_14->doloopback, VAR_4) |
      FUNC_0(VAR_13->qp_uk.swqe_polarity, VAR_12);

 FUNC_5(VAR_15, 0, VAR_14->paddr);
 FUNC_5(VAR_15, 8, FUNC_0(VAR_14->len, VAR_0));
 FUNC_5(VAR_15, 16, VAR_18[0]);

 FUNC_2(VAR_15, VAR_18[1]);

 FUNC_1(VAR_13->dev, VAR_1, "PUDA SEND WQE", VAR_15, 32);
 FUNC_4(&VAR_13->qp_uk);
 return 0;
}
