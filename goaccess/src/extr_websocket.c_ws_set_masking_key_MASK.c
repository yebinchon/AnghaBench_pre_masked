
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int mask; } ;
typedef TYPE_1__ WSFrame ;


 int FUNC_0 (char const) ;


 int FUNC_1 (int *,char const*,int) ;

__attribute__((used)) static void
FUNC_2 (WSFrame * VAR_0, const char *VAR_1)
{
  uint64_t VAR_2 = 0;


  VAR_2 = FUNC_0 (*(VAR_1 + 1));
  switch (VAR_2) {
  case 129:
    FUNC_1 (&VAR_0->mask, VAR_1 + 4, sizeof (VAR_0->mask));
    break;
  case 128:
    FUNC_1 (&VAR_0->mask, VAR_1 + 10, sizeof (VAR_0->mask));
    break;
  default:
    FUNC_1 (&VAR_0->mask, VAR_1 + 2, sizeof (VAR_0->mask));
  }
}
