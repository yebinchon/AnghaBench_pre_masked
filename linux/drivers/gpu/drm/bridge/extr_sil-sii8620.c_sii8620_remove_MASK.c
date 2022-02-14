
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sii8620 {scalar_t__ cable_state; int bridge; int extcon_wq; int extcon_nb; scalar_t__ extcon; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int ,int *) ;
 int FUNC_2 (int *) ;
 struct sii8620* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct sii8620*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_1)
{
 struct sii8620 *VAR_2 = FUNC_3(VAR_1);

 if (VAR_2->extcon) {
  FUNC_1(VAR_2->extcon, VAR_0,
        &VAR_2->extcon_nb);
  FUNC_2(&VAR_2->extcon_wq);
  if (VAR_2->cable_state > 0)
   FUNC_4(VAR_2);
 } else {
  FUNC_4(VAR_2);
 }
 FUNC_0(&VAR_2->bridge);

 return 0;
}
