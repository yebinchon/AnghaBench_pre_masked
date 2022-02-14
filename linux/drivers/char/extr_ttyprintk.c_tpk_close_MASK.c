
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttyprintk_port {int port; int port_write_mutex; } ;
struct tty_struct {struct ttyprintk_port* driver_data; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,struct tty_struct*,struct file*) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_0, struct file *VAR_1)
{
 struct ttyprintk_port *VAR_2 = VAR_0->driver_data;

 FUNC_0(&VAR_2->port_write_mutex);

 FUNC_2(((void*)0), 0);
 FUNC_1(&VAR_2->port_write_mutex);

 FUNC_3(&VAR_2->port, VAR_0, VAR_1);
}
