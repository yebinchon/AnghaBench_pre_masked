
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ disc_data; } ;
struct serport {int wait; int lock; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_1)
{
 struct serport *VAR_2 = (struct serport *) VAR_1->disc_data;
 unsigned long VAR_3;

 FUNC_1(&VAR_2->lock, VAR_3);
 FUNC_0(VAR_0, &VAR_2->flags);
 FUNC_2(&VAR_2->lock, VAR_3);

 FUNC_3(&VAR_2->wait);
 return 0;
}
