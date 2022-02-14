
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fe_priv {TYPE_1__* phy; int * link; } ;
struct TYPE_2__ {scalar_t__* duplex; int * speed; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct fe_priv*) ;
 int FUNC_1 (struct fe_priv*,int,int ,int ,int) ;

void FUNC_2(struct fe_priv *VAR_1, int VAR_2)
{
 FUNC_1(VAR_1, VAR_2, VAR_1->link[VAR_2],
    VAR_1->phy->speed[VAR_2],
    (VAR_1->phy->duplex[VAR_2] == VAR_0));
 FUNC_0(VAR_1);
}
