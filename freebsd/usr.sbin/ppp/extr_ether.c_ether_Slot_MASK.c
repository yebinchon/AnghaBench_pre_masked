
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct physical {int handler; } ;
struct etherdevice {int slot; } ;


 struct etherdevice* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct physical *VAR_0)
{
  struct etherdevice *VAR_1 = FUNC_0(VAR_0->handler);

  return VAR_1->slot;
}
