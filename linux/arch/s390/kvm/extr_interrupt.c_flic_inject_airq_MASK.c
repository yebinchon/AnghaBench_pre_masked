
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s390_io_adapter {int dummy; } ;
struct kvm_device_attr {unsigned int attr; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 struct s390_io_adapter* FUNC_0 (struct kvm*,unsigned int) ;
 int FUNC_1 (struct kvm*,struct s390_io_adapter*) ;

__attribute__((used)) static int FUNC_2(struct kvm *VAR_1, struct kvm_device_attr *VAR_2)
{
 unsigned int VAR_3 = VAR_2->attr;
 struct s390_io_adapter *VAR_4 = FUNC_0(VAR_1, VAR_3);

 if (!VAR_4)
  return -VAR_0;

 return FUNC_1(VAR_1, VAR_4);
}
