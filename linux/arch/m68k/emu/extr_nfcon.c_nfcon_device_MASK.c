
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_driver {int dummy; } ;
struct console {int flags; } ;


 int VAR_0 ;
 struct tty_driver* VAR_1 ;

__attribute__((used)) static struct tty_driver *FUNC_0(struct console *VAR_2, int *VAR_3)
{
 *VAR_3 = 0;
 return (VAR_2->flags & VAR_0) ? VAR_1 : ((void*)0);
}
