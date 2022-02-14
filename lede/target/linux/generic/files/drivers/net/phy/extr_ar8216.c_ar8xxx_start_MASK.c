
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ar8xxx_priv {int init; int dev; TYPE_1__* chip; } ;
struct TYPE_2__ {int (* hw_init ) (struct ar8xxx_priv*) ;} ;


 int FUNC_0 (struct ar8xxx_priv*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ar8xxx_priv*) ;

__attribute__((used)) static int
FUNC_3(struct ar8xxx_priv *VAR_0)
{
 int VAR_1;

 VAR_0->init = 1;

 VAR_1 = VAR_0->chip->hw_init(VAR_0);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_1(&VAR_0->dev);
 if (VAR_1)
  return VAR_1;

 VAR_0->init = 0;

 FUNC_0(VAR_0);

 return 0;
}
