
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct truly_nt35597 {int dev; TYPE_1__* supplies; int reset_gpio; } ;
struct TYPE_3__ {int consumer; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,TYPE_1__*) ;
 int * VAR_0 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct truly_nt35597 *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;

 FUNC_2(VAR_1->reset_gpio, 1);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->supplies); VAR_3++) {
  VAR_2 = FUNC_4(VAR_1->supplies[VAR_3].consumer,
    VAR_0[VAR_3]);
  if (VAR_2) {
   FUNC_1(VAR_1->dev,
    "regulator_set_load failed %d\n", VAR_2);
   return VAR_2;
  }
 }

 VAR_2 = FUNC_3(FUNC_0(VAR_1->supplies), VAR_1->supplies);
 if (VAR_2) {
  FUNC_1(VAR_1->dev,
   "regulator_bulk_disable failed %d\n", VAR_2);
 }
 return VAR_2;
}
