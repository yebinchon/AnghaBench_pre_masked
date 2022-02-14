
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct ipoctal_channel* driver_data; } ;
struct ipoctal_channel {int tty_port; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct ipoctal_channel*) ;
 int FUNC_1 (int *,struct tty_struct*,struct file*) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_0, struct file *VAR_1)
{
 struct ipoctal_channel *VAR_2 = VAR_0->driver_data;

 FUNC_1(&VAR_2->tty_port, VAR_0, VAR_1);
 FUNC_0(VAR_2);
}
