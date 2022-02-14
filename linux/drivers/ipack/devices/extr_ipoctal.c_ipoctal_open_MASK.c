
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct ipoctal_channel* driver_data; int index; int dev; } ;
struct ipoctal_channel {int tty_port; } ;
struct ipoctal {int dev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct ipoctal* FUNC_0 (struct ipoctal_channel*,int ) ;
 struct ipoctal_channel* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,struct tty_struct*,struct file*) ;

__attribute__((used)) static int FUNC_5(struct tty_struct *VAR_1, struct file *VAR_2)
{
 struct ipoctal_channel *VAR_3 = FUNC_1(VAR_1->dev);
 struct ipoctal *VAR_4 = FUNC_0(VAR_3, VAR_1->index);
 int VAR_5;

 VAR_1->driver_data = VAR_3;

 if (!FUNC_2(VAR_4->dev))
  return -VAR_0;

 VAR_5 = FUNC_4(&VAR_3->tty_port, VAR_1, VAR_2);
 if (VAR_5)
  FUNC_3(VAR_4->dev);

 return VAR_5;
}
