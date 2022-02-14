
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s390_io_adapter {int masked; int maskable; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 struct s390_io_adapter* FUNC_0 (struct kvm*,unsigned int) ;

int FUNC_1(struct kvm *VAR_1, unsigned int VAR_2, bool VAR_3)
{
 int VAR_4;
 struct s390_io_adapter *VAR_5 = FUNC_0(VAR_1, VAR_2);

 if (!VAR_5 || !VAR_5->maskable)
  return -VAR_0;
 VAR_4 = VAR_5->masked;
 VAR_5->masked = VAR_3;
 return VAR_4;
}
