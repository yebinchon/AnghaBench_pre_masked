
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct TYPE_2__ {int tb_read; int lock; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static long FUNC_6(struct file *VAR_3,
       unsigned int VAR_4,
       unsigned long VAR_5)
{
 int VAR_6 = 0;

 switch (VAR_4) {
 case 130:
  FUNC_0(&VAR_2.lock);
  VAR_6 = FUNC_3(VAR_3);
  FUNC_1(&VAR_2.lock);
  break;

 case 129:
  FUNC_0(&VAR_2.lock);
  VAR_6 = FUNC_4();
  FUNC_1(&VAR_2.lock);
  break;

 case 128: {
  VAR_6 = FUNC_5(VAR_2.tb_read, VAR_1);
  if (VAR_6)
   break;

  VAR_6 = FUNC_2(VAR_1, (int *) VAR_5);
  break;
 }

 default:
  VAR_6 = -VAR_0;
  break;
 }

 return VAR_6;
}
