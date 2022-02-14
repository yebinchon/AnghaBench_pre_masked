
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv090x_internal {int i2c_addr; int i2c_adap; } ;
struct stv090x_dev {struct stv090x_dev* next_dev; } ;


 struct stv090x_dev* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct stv090x_dev*) ;
 struct stv090x_dev* VAR_0 ;

__attribute__((used)) static void FUNC_2(struct stv090x_internal *VAR_1)
{
 struct stv090x_dev *VAR_2 = VAR_0;
 struct stv090x_dev *VAR_3 = FUNC_0(VAR_1->i2c_adap,
      VAR_1->i2c_addr);

 if (VAR_3 != ((void*)0)) {
  if (VAR_3 == VAR_0) {
   VAR_0 = VAR_3->next_dev;
  } else {
   while (VAR_2->next_dev != VAR_3)
    VAR_2 = VAR_2->next_dev;

   VAR_2->next_dev = VAR_3->next_dev;
  }

  FUNC_1(VAR_3);
 }
}
