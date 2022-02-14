
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int prefix; int stop; int extcall; int ext; int pgm; int mchk; } ;
struct kvm_s390_local_interrupt {TYPE_2__ irq; } ;
struct TYPE_3__ {int prefix; int stop; int extcall; int ext; int pgm; int mchk; } ;
struct kvm_s390_irq {TYPE_1__ u; int type; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_0(struct kvm_s390_local_interrupt *VAR_9,
       struct kvm_s390_irq *VAR_10,
       unsigned long VAR_11)
{
 switch (VAR_11) {
 case 134:
 case 133:
  VAR_10->type = VAR_4;
  VAR_10->u.mchk = VAR_9->irq.mchk;
  break;
 case 131:
  VAR_10->type = VAR_5;
  VAR_10->u.pgm = VAR_9->irq.pgm;
  break;
 case 132:
  VAR_10->type = VAR_3;
  VAR_10->u.ext = VAR_9->irq.ext;
  break;
 case 135:
  VAR_10->type = VAR_2;
  VAR_10->u.extcall = VAR_9->irq.extcall;
  break;
 case 137:
  VAR_10->type = VAR_0;
  break;
 case 136:
  VAR_10->type = VAR_1;
  break;
 case 128:
  VAR_10->type = VAR_8;
  VAR_10->u.stop = VAR_9->irq.stop;
  break;
 case 130:
  VAR_10->type = VAR_6;
  break;
 case 129:
  VAR_10->type = VAR_7;
  VAR_10->u.prefix = VAR_9->irq.prefix;
  break;
 }
}
