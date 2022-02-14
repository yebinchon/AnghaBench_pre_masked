
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct ipoctal_channel* driver_data; } ;
struct ipoctal_channel {int tty_port; } ;


 int FUNC_0 (struct ipoctal_channel*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_0)
{
 struct ipoctal_channel *VAR_1 = VAR_0->driver_data;

 if (VAR_1 == ((void*)0))
  return;

 FUNC_0(VAR_1);
 FUNC_1(&VAR_1->tty_port, 0);
}
