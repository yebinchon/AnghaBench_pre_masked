
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct thread_info {unsigned int cpu; } ;
struct notifier_block {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int * VAR_3 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct thread_info*) ;
 int FUNC_4 (struct thread_info*) ;
 int FUNC_5 (struct thread_info*) ;

__attribute__((used)) static int FUNC_6(struct notifier_block *VAR_4, unsigned long VAR_5, void *VAR_6)
{
 struct thread_info *VAR_7 = VAR_6;
 u32 VAR_8;




 switch (VAR_5) {
 case 128:
  VAR_8 = FUNC_0(VAR_0);
  FUNC_1(VAR_0, VAR_8 & ~VAR_1);
  break;

 case 129:
  FUNC_5(VAR_7);
  break;

 case 130:
  FUNC_4(VAR_7);
  break;

 case 131:
  FUNC_3(VAR_7);
  break;
 }

 return VAR_2;
}
