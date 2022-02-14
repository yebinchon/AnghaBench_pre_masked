
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct line* driver_data; } ;
struct line {int lock; } ;


 int FUNC_0 (struct line*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct tty_struct *VAR_0)
{
 struct line *VAR_1 = VAR_0->driver_data;
 unsigned long VAR_2;

 FUNC_1(&VAR_1->lock, VAR_2);
 FUNC_0(VAR_1);
 FUNC_2(&VAR_1->lock, VAR_2);
}
