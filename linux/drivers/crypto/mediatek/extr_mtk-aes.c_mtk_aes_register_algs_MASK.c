
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_2, VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_2 = FUNC_2(&VAR_0[VAR_3]);
  if (VAR_2)
   goto err_aes_algs;
 }

 VAR_2 = FUNC_1(&VAR_1);
 if (VAR_2)
  goto err_aes_algs;

 return 0;

err_aes_algs:
 for (; VAR_3--; )
  FUNC_3(&VAR_0[VAR_3]);

 return VAR_2;
}
