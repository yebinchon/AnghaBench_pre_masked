
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ y; scalar_t__ x; } ;
struct charlcd_priv {TYPE_2__ addr; } ;
struct charlcd {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* write_cmd ) (struct charlcd*,int ) ;} ;


 int VAR_0 ;
 struct charlcd_priv* FUNC_0 (struct charlcd*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct charlcd*,int ) ;

__attribute__((used)) static void FUNC_3(struct charlcd *VAR_1)
{
 struct charlcd_priv *VAR_2 = FUNC_0(VAR_1);

 VAR_1->ops->write_cmd(VAR_1, VAR_0);
 VAR_2->addr.x = 0;
 VAR_2->addr.y = 0;

 FUNC_1(15);
}
