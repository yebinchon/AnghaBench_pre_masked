
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int x; int y; } ;
struct charlcd_priv {TYPE_2__ addr; } ;
struct charlcd {int bwidth; int hwidth; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* write_cmd ) (struct charlcd*,unsigned int) ;} ;


 unsigned int VAR_0 ;
 struct charlcd_priv* FUNC_0 (struct charlcd*) ;
 int FUNC_1 (struct charlcd*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct charlcd *VAR_1)
{
 struct charlcd_priv *VAR_2 = FUNC_0(VAR_1);
 unsigned int VAR_3;





 VAR_3 = VAR_2->addr.x < VAR_1->bwidth ? VAR_2->addr.x & (VAR_1->hwidth - 1)
       : VAR_1->bwidth - 1;
 if (VAR_2->addr.y & 1)
  VAR_3 += VAR_1->hwidth;
 if (VAR_2->addr.y & 2)
  VAR_3 += VAR_1->bwidth;
 VAR_1->ops->write_cmd(VAR_1, VAR_0 | VAR_3);
}
