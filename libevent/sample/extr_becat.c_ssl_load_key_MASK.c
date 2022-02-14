
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssl_context {int pkey; } ;
typedef int RSA ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 int VAR_0 ;
 int FUNC_5 (int *,int,int *,int *) ;
 int * FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct ssl_context *VAR_1)
{
 int VAR_2 = 1;
 BIGNUM *VAR_3;
 RSA *VAR_4;

 VAR_1->pkey = FUNC_4();

 VAR_3 = FUNC_1();
 if (FUNC_2(VAR_3, VAR_0) != 1)
  goto err;

 VAR_4 = FUNC_6();
 if (FUNC_5(VAR_4, 2048, VAR_3, ((void*)0)) != 1)
  goto err;
 if (FUNC_3(VAR_1->pkey, VAR_4) != 1)
  goto err;
 VAR_2 = 0;
err:
 FUNC_0(VAR_3);
 return VAR_2;
}
