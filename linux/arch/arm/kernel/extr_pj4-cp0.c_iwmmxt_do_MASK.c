
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int dummy; } ;
struct notifier_block {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (struct thread_info*) ;
 int FUNC_1 (struct thread_info*) ;

__attribute__((used)) static int FUNC_2(struct notifier_block *VAR_1, unsigned long VAR_2, void *VAR_3)
{
 struct thread_info *VAR_4 = VAR_3;

 switch (VAR_2) {
 case 129:
 case 130:
  FUNC_0(VAR_4);
  break;

 case 128:
  FUNC_1(VAR_4);
  break;
 }

 return VAR_0;
}
