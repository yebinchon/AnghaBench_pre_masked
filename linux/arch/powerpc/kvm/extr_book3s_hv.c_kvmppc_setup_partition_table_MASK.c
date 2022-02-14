
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vrma_slb_v; unsigned long sdr1; unsigned long process_table; int lpid; int pgtable; } ;
struct kvm {TYPE_1__ arch; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct kvm*) ;
 int FUNC_2 (int ,unsigned long,unsigned long) ;
 unsigned long FUNC_3 () ;

void FUNC_4(struct kvm *VAR_5)
{
 unsigned long VAR_6, VAR_7;

 if (!FUNC_1(VAR_5)) {

  VAR_6 = ((VAR_5->arch.vrma_slb_v & VAR_3) >> 1) |
   ((VAR_5->arch.vrma_slb_v & VAR_4) << 1);

  VAR_6 |= VAR_5->arch.sdr1;


  VAR_7 = VAR_5->arch.process_table;
 } else {
  VAR_6 = VAR_1 | FUNC_3() |
   FUNC_0(VAR_5->arch.pgtable) | VAR_2;
  VAR_7 = VAR_0 | VAR_5->arch.process_table;
 }
 FUNC_2(VAR_5->arch.lpid, VAR_6, VAR_7);
}
