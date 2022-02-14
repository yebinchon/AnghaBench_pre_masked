
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;
typedef int hva_handler_fn ;


 int FUNC_0 (struct kvm*,unsigned long,unsigned long,int ) ;

__attribute__((used)) static int FUNC_1(struct kvm *VAR_0, unsigned long VAR_1,
     hva_handler_fn VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, VAR_1 + 1, VAR_2);
}
