
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct physical {int handler; } ;
struct etherdevice {scalar_t__ connected; int timeout; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct etherdevice* FUNC_0 (int ) ;
 int FUNC_1 (struct etherdevice*) ;

__attribute__((used)) static int
FUNC_2(struct physical *VAR_3)
{
  struct etherdevice *VAR_4 = FUNC_0(VAR_3->handler);

  if (VAR_4->connected != VAR_1 && !VAR_4->timeout--)
    VAR_4->connected = VAR_0;
  else if (VAR_4->connected == VAR_2)
    FUNC_1(VAR_4);

  return VAR_4->connected;
}
