
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_tdes_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_3(struct atmel_tdes_dev *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_2 = FUNC_1(&VAR_0[VAR_3]);
  if (VAR_2)
   goto err_tdes_algs;
 }

 return 0;

err_tdes_algs:
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  FUNC_2(&VAR_0[VAR_4]);

 return VAR_2;
}
