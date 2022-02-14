
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_port {int dummy; } ;
struct line {struct chan* chan_out; struct tty_port port; int task; struct chan* chan_in; } ;
struct chan {scalar_t__ primary; int data; int fd; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* read ) (int ,char*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct chan*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct tty_port*,int) ;
 int FUNC_4 (struct tty_port*) ;
 int FUNC_5 (struct tty_port*,char,int ) ;
 int FUNC_6 (struct tty_port*,int) ;

void FUNC_7(struct line *VAR_2, int VAR_3)
{
 struct tty_port *VAR_4 = &VAR_2->port;
 struct chan *VAR_5 = VAR_2->chan_in;
 int VAR_6;
 char VAR_7;

 if (!VAR_5 || !VAR_5->ops->read)
  goto out;

 do {
  if (!FUNC_3(VAR_4, 1)) {
   FUNC_1(&VAR_2->task, 1);
   goto out;
  }
  VAR_6 = VAR_5->ops->read(VAR_5->fd, &VAR_7, VAR_5->data);
  if (VAR_6 > 0)
   FUNC_5(VAR_4, VAR_7, VAR_1);
 } while (VAR_6 > 0);

 if (VAR_6 == -VAR_0) {
  if (VAR_5->primary) {
   FUNC_6(&VAR_2->port, 0);
   if (VAR_2->chan_out != VAR_5)
    FUNC_0(VAR_2->chan_out, 1);
  }
  FUNC_0(VAR_5, 1);
  if (VAR_5->primary)
   return;
 }
 out:
 FUNC_4(VAR_4);
}
