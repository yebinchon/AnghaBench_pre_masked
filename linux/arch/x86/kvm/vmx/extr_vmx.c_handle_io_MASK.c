
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int io_exits; } ;
struct kvm_vcpu {TYPE_1__ stat; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvm_vcpu*,int,unsigned int,int) ;
 unsigned long FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3, VAR_4, VAR_5;
 unsigned VAR_6;

 VAR_2 = FUNC_2(VAR_0);
 VAR_5 = (VAR_2 & 16) != 0;

 ++VAR_1->stat.io_exits;

 if (VAR_5)
  return FUNC_0(VAR_1, 0);

 VAR_6 = VAR_2 >> 16;
 VAR_3 = (VAR_2 & 7) + 1;
 VAR_4 = (VAR_2 & 8) != 0;

 return FUNC_1(VAR_1, VAR_3, VAR_6, VAR_4);
}
