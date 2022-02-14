
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_hyperv_eventfd {int flags; int conn_id; int fd; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm*,int,int ) ;
 int FUNC_1 (struct kvm*,int) ;

int FUNC_2(struct kvm *VAR_3, struct kvm_hyperv_eventfd *VAR_4)
{
 if ((VAR_4->flags & ~VAR_2) ||
     (VAR_4->conn_id & ~VAR_1))
  return -VAR_0;

 if (VAR_4->flags == VAR_2)
  return FUNC_1(VAR_3, VAR_4->conn_id);
 return FUNC_0(VAR_3, VAR_4->conn_id, VAR_4->fd);
}
