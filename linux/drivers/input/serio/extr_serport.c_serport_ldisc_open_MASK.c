
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int receive_room; int flags; struct serport* disc_data; } ;
struct serport {int wait; int lock; struct tty_struct* tty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct serport* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct tty_struct *VAR_5)
{
 struct serport *VAR_6;

 if (!FUNC_0(VAR_0))
  return -VAR_2;

 VAR_6 = FUNC_2(sizeof(struct serport), VAR_3);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->tty = VAR_5;
 FUNC_4(&VAR_6->lock);
 FUNC_1(&VAR_6->wait);

 VAR_5->disc_data = VAR_6;
 VAR_5->receive_room = 256;
 FUNC_3(VAR_4, &VAR_5->flags);

 return 0;
}
