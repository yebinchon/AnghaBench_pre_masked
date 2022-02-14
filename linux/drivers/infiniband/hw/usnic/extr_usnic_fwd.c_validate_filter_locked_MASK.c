
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usnic_fwd_dev {scalar_t__ inaddr; int lock; } ;
struct TYPE_3__ {int flags; scalar_t__ dst_port; scalar_t__ dst_addr; } ;
struct TYPE_4__ {TYPE_1__ ipv4; } ;
struct filter {scalar_t__ type; TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct usnic_fwd_dev *VAR_8,
     struct filter *VAR_9)
{

 FUNC_0(&VAR_8->lock);

 if (VAR_9->type == VAR_7) {
  if (!(VAR_9->u.ipv4.flags & VAR_5))
   return -VAR_0;
  if (!(VAR_9->u.ipv4.flags & VAR_6))
   return -VAR_1;
  else if (VAR_8->inaddr == 0)
   return -VAR_3;
  else if (VAR_9->u.ipv4.dst_port == 0)
   return -VAR_4;
  else if (FUNC_1(VAR_8->inaddr) != VAR_9->u.ipv4.dst_addr)
   return -VAR_2;
  else
   return 0;
 }

 return 0;
}
