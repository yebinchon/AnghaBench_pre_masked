
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* devlist; int ndev; } ;
struct physical {TYPE_1__ cfg; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char const* const,int) ;

void
FUNC_2(struct physical *VAR_0, int VAR_1, const char *const *VAR_2)
{
  unsigned VAR_3;
  int VAR_4;

  VAR_0->cfg.devlist[sizeof VAR_0->cfg.devlist - 1] = '\0';
  for (VAR_4 = 0, VAR_3 = 0; VAR_4 < VAR_1 && VAR_3 < sizeof VAR_0->cfg.devlist - 1; VAR_4++) {
    if (VAR_3)
      VAR_0->cfg.devlist[VAR_3++] = '\0';
    FUNC_1(VAR_0->cfg.devlist + VAR_3, VAR_2[VAR_4], sizeof VAR_0->cfg.devlist - VAR_3 - 1);
    VAR_3 += FUNC_0(VAR_0->cfg.devlist + VAR_3);
  }
  VAR_0->cfg.ndev = VAR_4;
}
