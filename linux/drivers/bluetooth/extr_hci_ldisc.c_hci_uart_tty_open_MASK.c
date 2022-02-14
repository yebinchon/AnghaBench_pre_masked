
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int receive_room; struct hci_uart* disc_data; TYPE_1__* ops; } ;
struct hci_uart {int alignment; int proto_lock; int write_work; int init_ready; scalar_t__ padding; struct tty_struct* tty; } ;
struct TYPE_2__ {int * write; } ;


 int FUNC_0 (char*,struct tty_struct*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct hci_uart* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_6(struct tty_struct *VAR_5)
{
 struct hci_uart *VAR_6;

 FUNC_0("tty %p", VAR_5);




 if (VAR_5->ops->write == ((void*)0))
  return -VAR_1;

 VAR_6 = FUNC_3(sizeof(struct hci_uart), VAR_2);
 if (!VAR_6) {
  FUNC_1("Can't allocate control structure");
  return -VAR_0;
 }

 VAR_5->disc_data = VAR_6;
 VAR_6->tty = VAR_5;
 VAR_5->receive_room = 65536;


 VAR_6->alignment = 1;
 VAR_6->padding = 0;

 FUNC_2(&VAR_6->init_ready, VAR_3);
 FUNC_2(&VAR_6->write_work, VAR_4);

 FUNC_4(&VAR_6->proto_lock);


 FUNC_5(VAR_5);

 return 0;
}
