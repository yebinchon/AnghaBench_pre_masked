
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct physical {int handler; } ;
struct etherdevice {int connected; } ;




 struct etherdevice* FUNC_0 (int ) ;

__attribute__((used)) static const char *
FUNC_1(struct physical *VAR_0)
{
  struct etherdevice *VAR_1 = FUNC_0(VAR_0->handler);

  switch (VAR_1->connected) {
    case 128:
      return "negotiating";
    case 129:
      return "established";
  }

  return "disconnected";
}
