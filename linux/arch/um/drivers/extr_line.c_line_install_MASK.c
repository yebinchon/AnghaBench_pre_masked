
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct line* driver_data; } ;
struct tty_driver {int dummy; } ;
struct line {int dummy; } ;


 int FUNC_0 (struct tty_driver*,struct tty_struct*) ;

int FUNC_1(struct tty_driver *VAR_0, struct tty_struct *VAR_1,
   struct line *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_1->driver_data = VAR_2;

 return 0;
}
