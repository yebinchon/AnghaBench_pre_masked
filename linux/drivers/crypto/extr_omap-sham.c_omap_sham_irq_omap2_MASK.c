
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_sham_dev {int flags; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct omap_sham_dev*) ;
 int FUNC_1 (struct omap_sham_dev*,int ) ;
 int FUNC_2 (struct omap_sham_dev*,int ,int ,int ) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct omap_sham_dev *VAR_6 = VAR_5;

 if (FUNC_4(FUNC_3(VAR_0, &VAR_6->flags)))

  FUNC_2(VAR_6, VAR_1, 0, VAR_2);

 FUNC_2(VAR_6, VAR_1, VAR_3,
     VAR_3);
 FUNC_1(VAR_6, VAR_1);

 return FUNC_0(VAR_6);
}
