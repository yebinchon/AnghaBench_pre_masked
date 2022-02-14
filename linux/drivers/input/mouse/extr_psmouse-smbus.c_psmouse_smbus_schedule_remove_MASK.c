
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse_smbus_removal_work {int work; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct psmouse_smbus_removal_work* FUNC_1 (int,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct i2c_client *VAR_2)
{
 struct psmouse_smbus_removal_work *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (VAR_3) {
  FUNC_0(&VAR_3->work, VAR_1);
  VAR_3->client = VAR_2;

  FUNC_2(&VAR_3->work);
 }
}
