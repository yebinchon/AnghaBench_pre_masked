
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_hash_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_3(struct img_hash_dev *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  VAR_3 = FUNC_1(&VAR_0[VAR_2]);
  if (VAR_3)
   goto err_reg;
 }
 return 0;

err_reg:
 for (; VAR_2--; )
  FUNC_2(&VAR_0[VAR_2]);

 return VAR_3;
}
