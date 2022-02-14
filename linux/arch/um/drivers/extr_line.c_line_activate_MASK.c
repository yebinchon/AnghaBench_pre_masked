
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ws_col; int ws_row; } ;
struct tty_struct {TYPE_1__ winsize; struct line* driver_data; } ;
struct tty_port {int dummy; } ;
struct line {int sigio; int chan_out; } ;


 int FUNC_0 (int ,struct tty_port*) ;
 int FUNC_1 (struct line*,int *,int *) ;
 int FUNC_2 (struct line*) ;

__attribute__((used)) static int FUNC_3(struct tty_port *VAR_0, struct tty_struct *VAR_1)
{
 int VAR_2;
 struct line *VAR_3 = VAR_1->driver_data;

 VAR_2 = FUNC_2(VAR_3);
 if (VAR_2)
  return VAR_2;

 if (!VAR_3->sigio) {
  FUNC_0(VAR_3->chan_out, VAR_0);
  VAR_3->sigio = 1;
 }

 FUNC_1(VAR_3, &VAR_1->winsize.ws_row,
  &VAR_1->winsize.ws_col);

 return 0;
}
