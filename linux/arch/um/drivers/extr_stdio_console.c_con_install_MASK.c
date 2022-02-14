
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {size_t index; } ;
struct tty_driver {int dummy; } ;


 int FUNC_0 (struct tty_driver*,struct tty_struct*,int *) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_1(struct tty_driver *VAR_1, struct tty_struct *VAR_2)
{
 return FUNC_0(VAR_1, VAR_2, &VAR_0[VAR_2->index]);
}
