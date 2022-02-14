
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct task_struct {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;






 int FUNC_1 () ;
 long FUNC_2 (struct task_struct*,unsigned long,unsigned long) ;
 long FUNC_3 (struct task_struct*,unsigned long) ;
 size_t FUNC_4 (struct task_struct*,unsigned long,unsigned long*,int,int ) ;
 long FUNC_5 (struct task_struct*,long,unsigned long,unsigned long) ;
 long FUNC_6 (struct task_struct*,unsigned long,unsigned long) ;

long FUNC_7(struct task_struct *VAR_3, long VAR_4,
   unsigned long VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7;
 size_t VAR_8;
 long VAR_9;

 switch (VAR_4) {

 case 132:
 case 133:
  VAR_8 = FUNC_4(VAR_3, VAR_5, &VAR_7, sizeof(VAR_7),
    VAR_2);
  VAR_9 = -VAR_1;
  if (VAR_8 != sizeof(VAR_7))
   break;

  FUNC_1();
  VAR_9 = VAR_7;
  break;


 case 131:
  FUNC_1();
  VAR_9 = FUNC_3(VAR_3, VAR_5);
  FUNC_0(VAR_0, ("peek $%lu->%#lx\n", VAR_5, VAR_9));
  break;


 case 129:
 case 130:
  VAR_9 = FUNC_2(VAR_3, VAR_5, VAR_6);
  break;

 case 128:
  FUNC_0(VAR_0, ("poke $%lu<-%#lx\n", VAR_5, VAR_6));
  VAR_9 = FUNC_6(VAR_3, VAR_5, VAR_6);
  break;
 default:
  VAR_9 = FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6);
  break;
 }
 return VAR_9;
}
