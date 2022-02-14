
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nested_enable; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_1(struct kvm *VAR_5)
{
 if (!VAR_3)
  return -VAR_2;
 if (!FUNC_0(VAR_0) || VAR_4)
  return -VAR_1;


 if (VAR_5)
  VAR_5->arch.nested_enable = 1;
 return 0;
}
