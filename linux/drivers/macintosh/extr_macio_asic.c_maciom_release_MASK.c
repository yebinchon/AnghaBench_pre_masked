
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macio_devres {int res_mask; } ;
struct macio_dev {int n_resources; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct macio_dev*,int) ;
 int FUNC_1 (int ,int) ;
 struct macio_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0, void *VAR_1)
{
 struct macio_dev *VAR_2 = FUNC_2(VAR_0);
 struct macio_devres *VAR_3 = VAR_1;
 int VAR_4, VAR_5;

 VAR_5 = FUNC_1(VAR_2->n_resources, 32);
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  if (VAR_3->res_mask & (1 << VAR_4))
   FUNC_0(VAR_2, VAR_4);
 }
}
