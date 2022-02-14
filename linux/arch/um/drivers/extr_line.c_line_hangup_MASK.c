
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct line* driver_data; } ;
struct line {int port; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct tty_struct *VAR_0)
{
 struct line *VAR_1 = VAR_0->driver_data;

 FUNC_0(&VAR_1->port);
}
