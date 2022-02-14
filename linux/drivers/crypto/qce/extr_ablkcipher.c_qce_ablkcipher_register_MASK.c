
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qce_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (int *,struct qce_device*) ;
 int FUNC_2 (struct qce_device*) ;

__attribute__((used)) static int FUNC_3(struct qce_device *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_2 = FUNC_1(&VAR_0[VAR_3], VAR_1);
  if (VAR_2)
   goto err;
 }

 return 0;
err:
 FUNC_2(VAR_1);
 return VAR_2;
}
