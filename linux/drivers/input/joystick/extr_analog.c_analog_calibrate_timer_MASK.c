
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct gameport {int dummy; } ;
struct analog_port {int speed; unsigned int loop; struct gameport* gameport; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct gameport*) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int) ;
 int FUNC_6 (unsigned int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_7(struct analog_port *VAR_2)
{
 struct gameport *VAR_3 = VAR_2->gameport;
 unsigned int VAR_4, VAR_5, VAR_6;
 u64 VAR_7, VAR_8, VAR_9;
 unsigned long VAR_10;

 if (VAR_1) {
  VAR_2->speed = 1000000;
 } else {
  FUNC_4(VAR_10);
  VAR_7 = FUNC_2();



  FUNC_5(1);
  VAR_8 = FUNC_2();
  VAR_9 = FUNC_2();
  FUNC_3(VAR_10);

  VAR_2->speed = FUNC_0(VAR_7, VAR_8) - FUNC_0(VAR_8, VAR_9);
 }

 VAR_6 = ~0;

 for (VAR_4 = 0; VAR_4 < 50; VAR_4++) {
  FUNC_4(VAR_10);
  VAR_7 = FUNC_2();
  for (VAR_5 = 0; VAR_5 < 50; VAR_5++) {
   FUNC_1(VAR_3);
   VAR_8 = FUNC_2();
  }
  VAR_9 = FUNC_2();
  FUNC_3(VAR_10);
  FUNC_6(VAR_4);
  VAR_5 = FUNC_0(VAR_7, VAR_8) - FUNC_0(VAR_8, VAR_9);
  if (VAR_5 < VAR_6) VAR_6 = VAR_5;
 }

        VAR_2->loop = VAR_6 / 50;
}
