
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ktermios {int c_ospeed; int c_ispeed; int c_cflag; } ;
struct tty_struct {struct ktermios termios; } ;
struct hci_uart {TYPE_1__* hdev; struct tty_struct* tty; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct tty_struct*,struct ktermios*) ;
 int FUNC_2 (struct ktermios*,unsigned int,unsigned int) ;

void FUNC_3(struct hci_uart *VAR_1, unsigned int VAR_2)
{
 struct tty_struct *VAR_3 = VAR_1->tty;
 struct ktermios VAR_4;

 VAR_4 = VAR_3->termios;
 VAR_4.c_cflag &= ~VAR_0;
 FUNC_2(&VAR_4, VAR_2, VAR_2);


 FUNC_1(VAR_3, &VAR_4);

 FUNC_0("%s: New tty speeds: %d/%d", VAR_1->hdev->name,
        VAR_3->termios.c_ispeed, VAR_3->termios.c_ospeed);
}
