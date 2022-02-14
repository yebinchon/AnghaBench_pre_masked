
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_sev_info {int fd; } ;
struct kvm {int dummy; } ;
struct TYPE_2__ {struct kvm_sev_info sev_info; } ;


 int FUNC_0 (int ,int,void*,int*) ;
 TYPE_1__* FUNC_1 (struct kvm*) ;

__attribute__((used)) static int FUNC_2(struct kvm *VAR_0, int VAR_1, void *VAR_2, int *VAR_3)
{
 struct kvm_sev_info *VAR_4 = &FUNC_1(VAR_0)->sev_info;

 return FUNC_0(VAR_4->fd, VAR_1, VAR_2, VAR_3);
}
