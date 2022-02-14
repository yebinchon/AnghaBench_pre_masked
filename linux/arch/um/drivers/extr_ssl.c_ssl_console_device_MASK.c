
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_driver {int dummy; } ;
struct console {int index; } ;
struct TYPE_2__ {struct tty_driver* driver; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static struct tty_driver *FUNC_0(struct console *VAR_1, int *VAR_2)
{
 *VAR_2 = VAR_1->index;
 return VAR_0.driver;
}
