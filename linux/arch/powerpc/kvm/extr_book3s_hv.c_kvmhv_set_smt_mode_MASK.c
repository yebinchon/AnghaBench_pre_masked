
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long smt_mode; int emul_smt_mode; int online_vcores; } ;
struct kvm {int lock; TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 unsigned long VAR_4 ;

__attribute__((used)) static int FUNC_4(struct kvm *VAR_5, unsigned long VAR_6,
         unsigned long VAR_7)
{
 int VAR_8;
 int VAR_9 = 0;

 if (VAR_7)
  return -VAR_2;
 if (VAR_6 > VAR_3 || !FUNC_1(VAR_6))
  return -VAR_2;
 if (!FUNC_0(VAR_0)) {




  if (VAR_6 > VAR_4)
   return -VAR_2;
 } else {




  VAR_9 = VAR_6;
  VAR_6 = 1;
 }
 FUNC_2(&VAR_5->lock);
 VAR_8 = -VAR_1;
 if (!VAR_5->arch.online_vcores) {
  VAR_5->arch.smt_mode = VAR_6;
  VAR_5->arch.emul_smt_mode = VAR_9;
  VAR_8 = 0;
 }
 FUNC_3(&VAR_5->lock);

 return VAR_8;
}
