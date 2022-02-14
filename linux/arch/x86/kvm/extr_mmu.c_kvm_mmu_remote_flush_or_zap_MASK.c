
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct kvm {int dummy; } ;


 int FUNC_0 (struct kvm*) ;
 int FUNC_1 (struct kvm*,struct list_head*) ;
 scalar_t__ FUNC_2 (struct list_head*) ;

__attribute__((used)) static bool FUNC_3(struct kvm *VAR_0,
     struct list_head *VAR_1,
     bool VAR_2)
{
 if (!VAR_2 && FUNC_2(VAR_1))
  return 0;

 if (!FUNC_2(VAR_1))
  FUNC_1(VAR_0, VAR_1);
 else
  FUNC_0(VAR_0);
 return 1;
}
