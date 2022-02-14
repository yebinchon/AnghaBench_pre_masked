
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_ucm_sidr_rep_event_resp {int qpn; int qkey; int status; } ;
struct ib_cm_sidr_rep_event_param {int qpn; int qkey; int status; } ;



__attribute__((used)) static void FUNC_0(struct ib_ucm_sidr_rep_event_resp *VAR_0,
          struct ib_cm_sidr_rep_event_param *VAR_1)
{
 VAR_0->status = VAR_1->status;
 VAR_0->qkey = VAR_1->qkey;
 VAR_0->qpn = VAR_1->qpn;
}
