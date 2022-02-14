
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct da9052_onkey {int work; int input; TYPE_1__* da9052; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct da9052_onkey *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3->da9052, VAR_1);
 if (VAR_4 < 0) {
  FUNC_1(VAR_3->da9052->dev,
   "Failed to read onkey event err=%d\n", VAR_4);
 } else {





  bool VAR_5 = !(VAR_4 & VAR_0);

  FUNC_2(VAR_3->input, VAR_2, VAR_5);
  FUNC_3(VAR_3->input);






  if (VAR_5)
   FUNC_5(&VAR_3->work,
      FUNC_4(50));
 }
}
