
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct fsm_opt {int data; } ;
struct TYPE_2__ {scalar_t__ state; int keybits; } ;
struct ccp_config {TYPE_1__ mppe; } ;
struct bundle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bundle*,struct ccp_config const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (int ,int*) ;

__attribute__((used)) static int
FUNC_3(struct bundle *VAR_7, struct fsm_opt *VAR_8,
                  const struct ccp_config *VAR_9)
{
  u_int32_t VAR_10, VAR_11;

  FUNC_2(VAR_8->data, &VAR_11);

  if (!VAR_3)

    return VAR_1;

  VAR_10 = FUNC_0(VAR_7, VAR_9);





  if (!VAR_9->mppe.keybits) {
    VAR_10 &= ~VAR_5;
    VAR_10 |= (VAR_11 & VAR_5);
    if (!(VAR_10 & VAR_5))
      VAR_10 |= VAR_4;
  }


  if (VAR_9->mppe.state == VAR_2) {
    VAR_10 &= ~VAR_6;
    VAR_10 |= (VAR_11 & VAR_6);
  }

  FUNC_1(&VAR_10, VAR_8->data);

  return VAR_0;
}
