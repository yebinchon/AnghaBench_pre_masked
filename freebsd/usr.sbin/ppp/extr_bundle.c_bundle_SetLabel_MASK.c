
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* label; } ;
struct bundle {TYPE_1__ cfg; } ;


 int FUNC_0 (char*,char const*,int) ;

void
FUNC_1(struct bundle *VAR_0, const char *VAR_1)
{
  if (VAR_1)
    FUNC_0(VAR_0->cfg.label, VAR_1, sizeof VAR_0->cfg.label - 1);
  else
    *VAR_0->cfg.label = '\0';
}
