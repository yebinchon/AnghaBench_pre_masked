
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm {int dummy; } ;
struct TYPE_4__ {int msa_id; } ;
struct TYPE_3__ {int (* check_extension ) (struct kvm*,long) ;} ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 () ;
 int VAR_6 ;
 int FUNC_1 (struct kvm*,long) ;

int FUNC_2(struct kvm *VAR_7, long VAR_8)
{
 int VAR_9;

 switch (VAR_8) {
 case 130:
 case 137:
 case 129:
 case 128:
 case 136:
  VAR_9 = 1;
  break;
 case 131:
  VAR_9 = FUNC_0();
  break;
 case 135:
  VAR_9 = VAR_0;
  break;
 case 134:
  VAR_9 = VAR_1;
  break;
 case 133:

  VAR_9 = !!VAR_6;
  break;
 case 132:
  VAR_9 = VAR_4 && !(VAR_3.msa_id & VAR_2);
  break;
 default:
  VAR_9 = VAR_5->check_extension(VAR_7, VAR_8);
  break;
 }
 return VAR_9;
}
