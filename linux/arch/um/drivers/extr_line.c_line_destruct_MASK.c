
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct line* driver_data; } ;
struct tty_port {int dummy; } ;
struct line {scalar_t__ sigio; } ;


 struct tty_struct* FUNC_0 (struct tty_port*) ;
 int FUNC_1 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_2(struct tty_port *VAR_0)
{
 struct tty_struct *VAR_1 = FUNC_0(VAR_0);
 struct line *VAR_2 = VAR_1->driver_data;

 if (VAR_2->sigio) {
  FUNC_1(VAR_1);
  VAR_2->sigio = 0;
 }
}
