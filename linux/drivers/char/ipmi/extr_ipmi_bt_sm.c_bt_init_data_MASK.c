
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_sm_io {int dummy; } ;
struct si_sm_data {int BT_CAP_req2rsp; int BT_CAP_retries; void* complete; void* state; scalar_t__ seq; struct si_sm_io* io; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct si_sm_data*,int ,int) ;

__attribute__((used)) static unsigned int FUNC_1(struct si_sm_data *VAR_4, struct si_sm_io *VAR_5)
{
 FUNC_0(VAR_4, 0, sizeof(struct si_sm_data));
 if (VAR_4->io != VAR_5) {

  VAR_4->io = VAR_5;
  VAR_4->seq = 0;
 }
 VAR_4->state = VAR_2;
 VAR_4->complete = VAR_2;
 VAR_4->BT_CAP_req2rsp = VAR_1 * VAR_3;
 VAR_4->BT_CAP_retries = VAR_0;
 return 3;
}
