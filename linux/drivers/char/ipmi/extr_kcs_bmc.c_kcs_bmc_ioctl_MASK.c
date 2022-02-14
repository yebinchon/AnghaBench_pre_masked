
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kcs_bmc {int lock; } ;
struct file {int dummy; } ;


 long VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct kcs_bmc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct kcs_bmc* FUNC_3 (struct file*) ;
 int FUNC_4 (struct kcs_bmc*,int ,int ) ;

__attribute__((used)) static long FUNC_5(struct file *VAR_2, unsigned int VAR_3,
     unsigned long VAR_4)
{
 struct kcs_bmc *VAR_5 = FUNC_3(VAR_2);
 long VAR_6 = 0;

 FUNC_1(&VAR_5->lock);

 switch (VAR_3) {
 case 128:
  FUNC_4(VAR_5, VAR_1,
       VAR_1);
  break;

 case 130:
  FUNC_4(VAR_5, VAR_1,
       0);
  break;

 case 129:
  FUNC_0(VAR_5);
  break;

 default:
  VAR_6 = -VAR_0;
  break;
 }

 FUNC_2(&VAR_5->lock);

 return VAR_6;
}
