
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct line* driver_data; } ;
struct line {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct line*) ;

int FUNC_3(struct tty_struct *VAR_1)
{
 struct line *VAR_2 = VAR_1->driver_data;
 unsigned long VAR_3;
 int VAR_4;

 FUNC_0(&VAR_2->lock, VAR_3);

 VAR_4 = VAR_0 - (FUNC_2(VAR_2) + 1);
 FUNC_1(&VAR_2->lock, VAR_3);

 return VAR_4;
}
