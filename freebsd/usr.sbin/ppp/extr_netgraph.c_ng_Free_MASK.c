
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct physical {int handler; } ;
struct ngdevice {int cs; } ;


 int FUNC_0 (int) ;
 struct ngdevice* FUNC_1 (int ) ;
 int FUNC_2 (struct ngdevice*) ;
 int FUNC_3 (struct physical*) ;

__attribute__((used)) static void
FUNC_4(struct physical *VAR_0)
{
  struct ngdevice *VAR_1 = FUNC_1(VAR_0->handler);

  FUNC_3(VAR_0);
  if (VAR_1->cs != -1)
    FUNC_0(VAR_1->cs);
  FUNC_2(VAR_1);
}
