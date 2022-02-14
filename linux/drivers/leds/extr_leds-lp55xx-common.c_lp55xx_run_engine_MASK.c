
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lp55xx_chip {TYPE_1__* cfg; } ;
struct TYPE_2__ {int (* run_engine ) (struct lp55xx_chip*,int) ;} ;


 int FUNC_0 (struct lp55xx_chip*,int) ;

__attribute__((used)) static inline void FUNC_1(struct lp55xx_chip *VAR_0, bool VAR_1)
{
 if (VAR_0->cfg->run_engine)
  VAR_0->cfg->run_engine(VAR_0, VAR_1);
}
