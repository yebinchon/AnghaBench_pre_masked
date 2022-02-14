
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_swap {double ksw_total; double ksw_used; int ksw_devname; } ;
struct TYPE_2__ {double ksw_total; double ksw_used; } ;


 int VAR_0 ;
 int FUNC_0 (int ,double,double,double,double) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct kvm_swap *VAR_3)
{

 VAR_1.ksw_total += VAR_3->ksw_total;
 VAR_1.ksw_used += VAR_3->ksw_used;
 ++VAR_0;
 if (VAR_2 == 0)
  FUNC_0(VAR_3->ksw_devname, VAR_3->ksw_total,
      VAR_3->ksw_used, VAR_3->ksw_total - VAR_3->ksw_used,
      (VAR_3->ksw_used * 100.0) / VAR_3->ksw_total);
}
