
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sahara_dev {scalar_t__ version; } ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_5(struct sahara_dev *VAR_4)
{
 int VAR_5;
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
  VAR_5 = FUNC_2(&VAR_1[VAR_6]);
  if (VAR_5)
   goto err_aes_algs;
 }

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_2); VAR_8++) {
  VAR_5 = FUNC_1(&VAR_2[VAR_8]);
  if (VAR_5)
   goto err_sha_v3_algs;
 }

 if (VAR_4->version > VAR_0)
  for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_3); VAR_9++) {
   VAR_5 = FUNC_1(&VAR_3[VAR_9]);
   if (VAR_5)
    goto err_sha_v4_algs;
  }

 return 0;

err_sha_v4_algs:
 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++)
  FUNC_3(&VAR_3[VAR_7]);

err_sha_v3_algs:
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
  FUNC_3(&VAR_2[VAR_7]);

err_aes_algs:
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  FUNC_4(&VAR_1[VAR_7]);

 return VAR_5;
}
