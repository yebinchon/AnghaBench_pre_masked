
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct physical {int handler; } ;
struct ngdevice {scalar_t__ cs; } ;
struct fdescriptor {int dummy; } ;
typedef int fd_set ;


 scalar_t__ FUNC_0 (scalar_t__,int const*) ;
 struct physical* FUNC_1 (struct fdescriptor*) ;
 struct ngdevice* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct fdescriptor*,int const*) ;

__attribute__((used)) static int
FUNC_4(struct fdescriptor *VAR_0, const fd_set *VAR_1)
{
  struct physical *VAR_2 = FUNC_1(VAR_0);
  struct ngdevice *VAR_3 = FUNC_2(VAR_2->handler);
  int VAR_4;

  VAR_4 = VAR_3->cs >= 0 && FUNC_0(VAR_3->cs, VAR_1);
  VAR_4 += FUNC_3(VAR_0, VAR_1);

  return VAR_4;
}
