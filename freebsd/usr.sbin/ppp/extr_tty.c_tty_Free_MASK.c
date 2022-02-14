
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttydevice {int dummy; } ;
struct physical {int handler; } ;


 struct ttydevice* FUNC_0 (int ) ;
 int FUNC_1 (struct ttydevice*) ;
 int FUNC_2 (struct physical*) ;

__attribute__((used)) static void
FUNC_3(struct physical *VAR_0)
{
  struct ttydevice *VAR_1 = FUNC_0(VAR_0->handler);

  FUNC_2(VAR_0);
  FUNC_1(VAR_1);
}
