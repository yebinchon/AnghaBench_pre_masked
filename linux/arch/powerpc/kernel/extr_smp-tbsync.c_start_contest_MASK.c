
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {int cmd; int handshake; scalar_t__ race_result; scalar_t__ ack; scalar_t__ mark; scalar_t__ tb; } ;


 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(int VAR_1, long VAR_2, int VAR_3)
{
 int VAR_4, VAR_5=0;
 u64 VAR_6;
 u64 VAR_7;

 VAR_0->cmd = VAR_1;

 FUNC_3();
 for (VAR_4 = -3; VAR_4 < VAR_3; ) {
  VAR_6 = FUNC_2() + 400;
  VAR_0->tb = VAR_6 + VAR_2;
  VAR_0->mark = VAR_7 = VAR_6 + 400;

  FUNC_5();

  VAR_0->handshake = 1;
  while (VAR_0->ack)
   FUNC_0();

  while (FUNC_2() <= VAR_6)
   FUNC_0();
  VAR_0->handshake = 0;
  FUNC_1(VAR_7, 1);

  while (!VAR_0->ack)
   FUNC_0();

  if (VAR_4++ > 0)
   VAR_5 += VAR_0->race_result;
 }
 FUNC_4();
 return VAR_5;
}
