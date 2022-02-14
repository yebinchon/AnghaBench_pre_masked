
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_0);
 if (VAR_4 < 0) {
  FUNC_4("Deflate algorithm registration failed\n");
  return VAR_4;
 }

 VAR_4 = FUNC_0(&VAR_1);
 if (VAR_4 < 0) {
  FUNC_4("LZS algorithm registration failed\n");
  goto err_unregister_alg_deflate;
 }

 VAR_4 = FUNC_1(&VAR_2);
 if (VAR_4 < 0) {
  FUNC_4("Deflate scomp algorithm registration failed\n");
  goto err_unregister_alg_lzs;
 }

 VAR_4 = FUNC_1(&VAR_3);
 if (VAR_4 < 0) {
  FUNC_4("LZS scomp algorithm registration failed\n");
  goto err_unregister_scomp_deflate;
 }

 return VAR_4;

err_unregister_scomp_deflate:
 FUNC_3(&VAR_2);
err_unregister_alg_lzs:
 FUNC_2(&VAR_1);
err_unregister_alg_deflate:
 FUNC_2(&VAR_0);

 return VAR_4;
}
