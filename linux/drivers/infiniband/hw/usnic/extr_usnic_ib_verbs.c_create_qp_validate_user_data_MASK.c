
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ trans_type; } ;
struct usnic_ib_create_qp_cmd {TYPE_1__ spec; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct usnic_ib_create_qp_cmd VAR_3)
{
 if (VAR_3.spec.trans_type <= VAR_2 ||
   VAR_3.spec.trans_type >= VAR_1)
  return -VAR_0;

 return 0;
}
