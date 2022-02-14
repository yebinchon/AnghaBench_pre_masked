
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9052_tsi {int ts_pen_work; int da9052; int stopped; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct da9052_tsi*,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct da9052_tsi *VAR_6 = VAR_5;

 if (!VAR_6->stopped) {

  FUNC_0(VAR_6->da9052, VAR_0);
  FUNC_1(VAR_6->da9052, VAR_1);

  FUNC_2(VAR_6, 1);

  FUNC_3(&VAR_6->ts_pen_work, VAR_2 / 50);
 }

 return VAR_3;
}
