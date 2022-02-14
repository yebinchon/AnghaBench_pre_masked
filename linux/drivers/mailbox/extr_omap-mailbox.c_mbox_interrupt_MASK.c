
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_mbox {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct omap_mbox*) ;
 int FUNC_1 (struct omap_mbox*) ;
 scalar_t__ FUNC_2 (struct omap_mbox*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct omap_mbox *VAR_5 = VAR_4;

 if (FUNC_2(VAR_5, VAR_2))
  FUNC_1(VAR_5);

 if (FUNC_2(VAR_5, VAR_1))
  FUNC_0(VAR_5);

 return VAR_0;
}
