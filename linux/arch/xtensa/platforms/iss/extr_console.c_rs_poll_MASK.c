
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_port {int dummy; } ;
struct timer_list {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 struct tty_port VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 int FUNC_5 (struct tty_port*) ;
 int FUNC_6 (struct tty_port*,unsigned char,int ) ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_6)
{
 struct tty_port *VAR_7 = &VAR_3;
 int VAR_8 = 0;
 int VAR_9 = 1;
 unsigned char VAR_10;

 FUNC_3(&VAR_5);

 while (FUNC_1(0)) {
  VAR_9 = FUNC_2(0, &VAR_10, 1);
  if (VAR_9 <= 0)
   break;
  FUNC_6(VAR_7, VAR_10, VAR_1);
  VAR_8++;
 }

 if (VAR_8)
  FUNC_5(VAR_7);
 if (VAR_9)
  FUNC_0(&VAR_4, VAR_2 + VAR_0);
 FUNC_4(&VAR_5);
}
