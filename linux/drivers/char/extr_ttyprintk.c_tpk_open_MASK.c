
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* driver_data; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int port; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *,struct tty_struct*,struct file*) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_1, struct file *VAR_2)
{
 VAR_1->driver_data = &VAR_0;

 return FUNC_0(&VAR_0.port, VAR_1, VAR_2);
}
