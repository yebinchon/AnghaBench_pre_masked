
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int ack; int cmd; int tb; int mark; scalar_t__ handshake; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_2 ;
 int FUNC_6 (int,int) ;
 TYPE_1__* VAR_3 ;

void FUNC_7(void)
{
 int VAR_4;
 u64 VAR_5;
 unsigned long VAR_6;

 FUNC_3(VAR_6);
 while (!VAR_2)
  FUNC_0();
 FUNC_5();

 for (;;) {
  VAR_3->ack = 1;
  while (!VAR_3->handshake)
   FUNC_0();
  FUNC_5();

  VAR_4 = VAR_3->cmd;
  VAR_5 = VAR_3->tb;
  FUNC_4();
  VAR_3->ack = 0;
  if (VAR_4 == VAR_0)
   break;

  while (VAR_3->handshake)
   FUNC_0();
  if (VAR_4 == VAR_1)
   FUNC_6(VAR_5 >> 32, VAR_5 & 0xfffffffful);
  FUNC_1(VAR_3->mark, -1);
 }
 FUNC_2(VAR_6);
}
