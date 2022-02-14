
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct fsm_opt {int data; } ;
struct TYPE_2__ {scalar_t__ state; scalar_t__ keybits; } ;
struct ccp_config {TYPE_1__ mppe; } ;
struct bundle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bundle*,struct ccp_config const*) ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (int ,int*) ;

__attribute__((used)) static int
FUNC_3(struct bundle *VAR_8, struct fsm_opt *VAR_9,
                 const struct ccp_config *VAR_10)
{
  u_int32_t VAR_11, VAR_12;
  int VAR_13 = VAR_0;

  FUNC_2(VAR_9->data, &VAR_12);
  if (!VAR_2) {
    if (VAR_12 != 0) {
      VAR_12 = 0;
      FUNC_1(&VAR_12, VAR_9->data);
      return VAR_1;
    } else
      return VAR_0;
  }

  VAR_11 = FUNC_0(VAR_8, VAR_10);

  if (VAR_12 & ~VAR_4)

    VAR_13 = VAR_1;

  if (VAR_12 & VAR_5) {
    if (VAR_10->mppe.state == VAR_6)

      VAR_13 = VAR_1;
    else

      VAR_11 |= VAR_5;
  } else {
    if (VAR_10->mppe.state == VAR_7)

      VAR_13 = VAR_1;
    else

      VAR_11 &= ~VAR_5;
  }


  if (VAR_10->mppe.keybits) {
    FUNC_1(&VAR_11, VAR_9->data);
    return VAR_12 == VAR_11 ? VAR_13 : VAR_1;
  }


  switch (VAR_12 & VAR_3) {
  case 130:
  case 128:
  case 129:
    break;
  default:
    VAR_13 = VAR_1;
  }


  VAR_11 &= ~VAR_3;
  if (VAR_12 & 130)
    VAR_11 |= 130;
  else if (VAR_12 & 128)
    VAR_11 |= 128;
  else if (VAR_12 & 129)
    VAR_11 |= 129;
  else
    VAR_11 |= 130;
  FUNC_1(&VAR_11, VAR_9->data);

  return VAR_13;
}
