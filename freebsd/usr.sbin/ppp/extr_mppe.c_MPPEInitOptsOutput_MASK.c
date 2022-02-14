
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct TYPE_2__ {int len; } ;
struct fsm_opt {int data; TYPE_1__ hdr; } ;
struct ccp_config {int dummy; } ;
struct bundle {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bundle*,struct ccp_config const*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__*,int ) ;

__attribute__((used)) static void
FUNC_3(struct bundle *VAR_2, struct fsm_opt *VAR_3,
                   const struct ccp_config *VAR_4)
{
  u_int32_t VAR_5;

  VAR_3->hdr.len = 6;

  if (!VAR_1) {
    FUNC_1(VAR_0, "MPPE: MasterKey is invalid,"
               " MPPE is available only with CHAP81 authentication\n");
    VAR_5 = 0;
    FUNC_2(&VAR_5, VAR_3->data);
    return;
  }


  VAR_5 = FUNC_0(VAR_2, VAR_4);
  FUNC_2(&VAR_5, VAR_3->data);
}
