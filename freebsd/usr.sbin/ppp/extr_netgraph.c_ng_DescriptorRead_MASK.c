
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct physical {int handler; } ;
struct ngdevice {scalar_t__ cs; } ;
struct fdescriptor {int dummy; } ;
struct bundle {int dummy; } ;
typedef int fd_set ;


 scalar_t__ FUNC_0 (scalar_t__,int const*) ;
 struct physical* FUNC_1 (struct fdescriptor*) ;
 struct ngdevice* FUNC_2 (int ) ;
 int FUNC_3 (struct physical*,int *,int ) ;
 int FUNC_4 (struct fdescriptor*,struct bundle*,int const*) ;
 scalar_t__ FUNC_5 (struct fdescriptor*,int const*) ;

__attribute__((used)) static void
FUNC_6(struct fdescriptor *VAR_0, struct bundle *VAR_1,
                  const fd_set *VAR_2)
{
  struct physical *VAR_3 = FUNC_1(VAR_0);
  struct ngdevice *VAR_4 = FUNC_2(VAR_3->handler);

  if (VAR_4->cs >= 0 && FUNC_0(VAR_4->cs, VAR_2))
    FUNC_3(VAR_3, ((void*)0), 0);

  if (FUNC_5(VAR_0, VAR_2))
    FUNC_4(VAR_0, VAR_1, VAR_2);
}
