
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sgid_index; TYPE_1__* sgid_attr; } ;
struct rdma_ah_attr {scalar_t__ port_num; scalar_t__ type; int ah_flags; TYPE_2__ grh; } ;
struct ib_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ index; scalar_t__ port_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct ib_device*,scalar_t__) ;
 int FUNC_1 (struct ib_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct ib_device *VAR_3,
         struct rdma_ah_attr *VAR_4)
{
 if (!FUNC_1(VAR_3, VAR_4->port_num))
  return -VAR_0;

 if ((FUNC_0(VAR_3, VAR_4->port_num) ||
      VAR_4->type == VAR_2) &&
     !(VAR_4->ah_flags & VAR_1))
  return -VAR_0;

 if (VAR_4->grh.sgid_attr) {




  if (VAR_4->grh.sgid_attr->index != VAR_4->grh.sgid_index ||
      VAR_4->grh.sgid_attr->port_num != VAR_4->port_num)
   return -VAR_0;
 }
 return 0;
}
