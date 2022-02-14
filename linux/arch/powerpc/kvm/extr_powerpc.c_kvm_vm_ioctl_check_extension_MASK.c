
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int emul_smt_mode; int smt_mode; } ;
struct kvm {TYPE_1__ arch; } ;
struct TYPE_6__ {int cpu_user_features2; } ;
struct TYPE_5__ {int (* enable_nested ) (int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 TYPE_3__* VAR_6 ;
 int FUNC_1 (struct kvm*) ;
 TYPE_2__* VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int VAR_8 ;
 int FUNC_8 () ;

int FUNC_9(struct kvm *VAR_9, long VAR_10)
{
 int VAR_11;

 int VAR_12 = VAR_7 ? 1 : 0;

 if (VAR_9) {




  VAR_12 = FUNC_1(VAR_9);
 }

 switch (VAR_10) {





 case 138:
 case 152:
 case 141:

 case 135:
 case 148:
 case 171:
 case 163:
 case 169:
 case 172:
 case 170:
  VAR_11 = 1;
  break;
 case 142:
 case 143:
 case 154:




  VAR_11 = !VAR_12;
  break;
 case 128:





  VAR_11 = 0;

  break;





 case 164:






  if (VAR_12)
   VAR_11 = FUNC_5();
  else
   VAR_11 = FUNC_4();
  break;
 case 166:
  VAR_11 = VAR_3;
  break;
 case 165:
  VAR_11 = VAR_4;
  break;
 default:
  VAR_11 = 0;
  break;
 }
 return VAR_11;

}
