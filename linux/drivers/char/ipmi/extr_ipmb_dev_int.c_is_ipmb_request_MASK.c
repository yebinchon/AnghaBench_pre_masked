
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int netfn_rs_lun; } ;
struct ipmb_dev {scalar_t__ msg_idx; TYPE_1__ request; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ipmb_dev*,int ) ;

__attribute__((used)) static bool FUNC_1(struct ipmb_dev *VAR_2, u8 VAR_3)
{
 if (VAR_2->msg_idx >= VAR_0) {
  if (FUNC_0(VAR_2, VAR_3))
   return 0;
  if (!(VAR_2->request.netfn_rs_lun & VAR_1))
   return 1;
 }
 return 0;
}
