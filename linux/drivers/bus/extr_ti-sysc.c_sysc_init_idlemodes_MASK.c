
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sidlemodes; int midlemodes; } ;
struct sysc {TYPE_1__ cfg; } ;


 int FUNC_0 (struct sysc*,int *,char*) ;

__attribute__((used)) static int FUNC_1(struct sysc *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0, &VAR_0->cfg.midlemodes,
       "ti,sysc-midle");
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0, &VAR_0->cfg.sidlemodes,
       "ti,sysc-sidle");
 if (VAR_1)
  return VAR_1;

 return 0;
}
