
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct monitorbuf {int idle_state; } ;
struct TYPE_2__ {struct monitorbuf pc_monitorbuf; } ;





 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 TYPE_1__* FUNC_3 (int) ;

int
FUNC_4(int VAR_1)
{
 struct monitorbuf *VAR_2;
 int *VAR_3;

 VAR_2 = &FUNC_3(VAR_1)->pc_monitorbuf;
 VAR_3 = &VAR_2->idle_state;
 switch (FUNC_0(VAR_3)) {
 case 128:
  return (0);
 case 130:
  FUNC_1(VAR_3, 129);
  return (VAR_0 ? 0 : 1);
 case 129:
  return (1);
 default:
  FUNC_2("bad monitor state");
  return (1);
 }
}
