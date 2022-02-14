
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct ib_mad_agent* send_agent; } ;
struct qib_ibport {TYPE_3__* smi_ah; TYPE_1__ rvp; } ;
struct qib_pportdata {TYPE_2__* cpspec; struct qib_ibport ibport_data; } ;
struct ib_smp {int class_version; int hop_cnt; scalar_t__ attr_mod; int attr_id; int method; int mgmt_class; int base_version; } ;
struct ib_mad_send_buf {struct ib_smp* mad; struct ib_mad_send_buf* ah; } ;
struct ib_mad_agent {int dummy; } ;
struct ib_ah {struct ib_smp* mad; struct ib_ah* ah; } ;
struct TYPE_6__ {struct ib_mad_send_buf ibah; } ;
struct TYPE_5__ {int ipg_tries; int ipg_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct ib_mad_send_buf*) ;
 int FUNC_1 (struct ib_mad_send_buf*) ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 struct ib_mad_send_buf* FUNC_3 (struct ib_mad_agent*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct ib_mad_send_buf*) ;
 int FUNC_5 (struct ib_mad_send_buf*,int *) ;
 int VAR_8 ;
 TYPE_3__* FUNC_6 (struct ib_mad_send_buf*) ;
 int FUNC_7 (unsigned int) ;
 struct ib_mad_send_buf* FUNC_8 (struct qib_ibport*,int ) ;
 int FUNC_9 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_10(struct qib_pportdata *VAR_9)
{
 struct qib_ibport *VAR_10 = &VAR_9->ibport_data;
 struct ib_mad_send_buf *VAR_11;
 struct ib_mad_agent *VAR_12;
 struct ib_smp *VAR_13;
 unsigned VAR_14;
 int VAR_15;

 VAR_12 = VAR_10->rvp.send_agent;
 if (!VAR_12)
  goto retry;

 VAR_11 = FUNC_3(VAR_12, 0, 0, 0, VAR_5,
          VAR_4, VAR_0,
          VAR_2);
 if (FUNC_0(VAR_11))
  goto retry;

 if (!VAR_10->smi_ah) {
  struct ib_ah *VAR_16;

  VAR_16 = FUNC_8(VAR_10, FUNC_2(VAR_1));
  if (FUNC_0(VAR_16))
   VAR_15 = FUNC_1(VAR_16);
  else {
   VAR_11->ah = VAR_16;
   VAR_10->smi_ah = FUNC_6(VAR_16);
   VAR_15 = 0;
  }
 } else {
  VAR_11->ah = &VAR_10->smi_ah->ibah;
  VAR_15 = 0;
 }

 VAR_13 = VAR_11->mad;
 VAR_13->base_version = VAR_2;
 VAR_13->mgmt_class = VAR_3;
 VAR_13->class_version = 1;
 VAR_13->method = VAR_6;
 VAR_13->hop_cnt = 1;
 VAR_13->attr_id = VAR_7;
 VAR_13->attr_mod = 0;

 if (!VAR_15)
  VAR_15 = FUNC_5(VAR_11, ((void*)0));
 if (VAR_15)
  FUNC_4(VAR_11);
retry:
 VAR_14 = 2 << VAR_9->cpspec->ipg_tries;
 FUNC_9(VAR_8, &VAR_9->cpspec->ipg_work,
      FUNC_7(VAR_14));
}
