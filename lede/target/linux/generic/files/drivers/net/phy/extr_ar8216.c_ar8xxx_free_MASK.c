
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ar8xxx_priv {struct ar8xxx_priv* mib_stats; struct ar8xxx_priv* chip_data; TYPE_1__* chip; } ;
struct TYPE_2__ {int (* cleanup ) (struct ar8xxx_priv*) ;} ;


 int FUNC_0 (struct ar8xxx_priv*) ;
 int FUNC_1 (struct ar8xxx_priv*) ;

__attribute__((used)) static void
FUNC_2(struct ar8xxx_priv *VAR_0)
{
 if (VAR_0->chip && VAR_0->chip->cleanup)
  VAR_0->chip->cleanup(VAR_0);

 FUNC_0(VAR_0->chip_data);
 FUNC_0(VAR_0->mib_stats);
 FUNC_0(VAR_0);
}
