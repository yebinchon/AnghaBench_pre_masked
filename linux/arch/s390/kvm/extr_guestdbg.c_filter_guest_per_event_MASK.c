
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_6__ {TYPE_2__* sie_block; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct TYPE_4__ {int addr; } ;
struct TYPE_5__ {int perc; int* gcr; int iprcc; TYPE_1__ gpsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (unsigned long,int,int) ;
 int FUNC_2 (struct kvm_vcpu*,unsigned long*) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_5)
{
 const u8 VAR_6 = VAR_5->arch.sie_block->perc;
 u64 VAR_7 = VAR_5->arch.sie_block->gpsw.addr;
 u64 VAR_8 = VAR_5->arch.sie_block->gcr[9];
 u64 VAR_9 = VAR_5->arch.sie_block->gcr[10];
 u64 VAR_10 = VAR_5->arch.sie_block->gcr[11];

 u8 VAR_11 = VAR_6 & (VAR_8 >> 24) & VAR_2;
 unsigned long VAR_12;
 int VAR_13;

 if (!FUNC_0(VAR_5))
  VAR_11 = 0;


 if (VAR_11 & VAR_0 &&
     VAR_8 & VAR_3 &&
     !FUNC_1(VAR_7, VAR_9, VAR_10))
  VAR_11 &= ~VAR_0;


 if (VAR_11 & VAR_1) {
  VAR_13 = FUNC_2(VAR_5, &VAR_12);
  if (VAR_13 < 0)
   return VAR_13;




  if (VAR_13 || !FUNC_1(VAR_12, VAR_9, VAR_10))
   VAR_11 &= ~VAR_1;
 }




 VAR_5->arch.sie_block->perc = VAR_11;

 if (!VAR_11)
  VAR_5->arch.sie_block->iprcc &= ~VAR_4;
 return 0;
}
