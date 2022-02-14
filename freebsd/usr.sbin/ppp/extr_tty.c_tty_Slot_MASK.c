
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttyent {int ty_name; } ;
struct TYPE_2__ {int base; } ;
struct physical {TYPE_1__ name; } ;


 int FUNC_0 () ;
 struct ttyent* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct physical *VAR_0)
{
  struct ttyent *VAR_1;
  int VAR_2;

  FUNC_2();
  for (VAR_2 = 1; (VAR_1 = FUNC_1()); ++VAR_2)
    if (!FUNC_3(VAR_1->ty_name, VAR_0->name.base)) {
      FUNC_0();
      return VAR_2;
    }

  FUNC_0();
  return -1;
}
