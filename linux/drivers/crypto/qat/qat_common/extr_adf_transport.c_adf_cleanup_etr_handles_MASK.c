
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct adf_etr_data {int * banks; } ;
struct adf_accel_dev {struct adf_etr_data* transport; } ;


 size_t FUNC_0 (struct adf_accel_dev*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct adf_accel_dev *VAR_0)
{
 struct adf_etr_data *VAR_1 = VAR_0->transport;
 uint32_t VAR_2, VAR_3 = FUNC_0(VAR_0);

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
  FUNC_1(&VAR_1->banks[VAR_2]);
}
