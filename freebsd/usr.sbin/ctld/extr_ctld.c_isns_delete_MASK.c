
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isns {int * i_ai; struct isns* i_addr; TYPE_1__* i_conf; } ;
struct TYPE_2__ {int conf_isns; } ;


 int FUNC_0 (int *,struct isns*,int ) ;
 int FUNC_1 (struct isns*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

void
FUNC_3(struct isns *VAR_1)
{

 FUNC_0(&VAR_1->i_conf->conf_isns, VAR_1, VAR_0);
 FUNC_1(VAR_1->i_addr);
 if (VAR_1->i_ai != ((void*)0))
  FUNC_2(VAR_1->i_ai);
 FUNC_1(VAR_1);
}
