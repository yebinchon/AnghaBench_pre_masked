
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_1 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;

int FUNC_9(struct kvm *VAR_2, long VAR_3)
{
 int VAR_4;

 switch (VAR_3) {
 case 138:
  VAR_4 = FUNC_0();
  break;
 case 131:
  VAR_4 = FUNC_2();
  break;
 case 130:
  VAR_4 = FUNC_3();
  break;
 case 136:
  VAR_4 = FUNC_5();
  break;
 case 137:
  VAR_4 = FUNC_1(VAR_0);
  break;
 case 129:
 case 128:
  VAR_4 = 1;
  break;
 case 132:
  VAR_4 = VAR_1;
  break;
 case 133:
  VAR_4 = FUNC_8();
  break;
 case 135:
 case 134:
  VAR_4 = FUNC_4() && FUNC_6() &&
     FUNC_7();
  break;
 default:
  VAR_4 = 0;
 }

 return VAR_4;
}
