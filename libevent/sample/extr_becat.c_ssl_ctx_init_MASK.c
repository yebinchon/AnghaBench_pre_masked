
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssl_context {int ctx; } ;
typedef int SSL_METHOD ;


 int FUNC_0 (int const*) ;
 int * FUNC_1 () ;
 int FUNC_2 (struct ssl_context*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (struct ssl_context*) ;
 scalar_t__ FUNC_5 (struct ssl_context*) ;

__attribute__((used)) static int FUNC_6(struct ssl_context *VAR_0)
{
 const SSL_METHOD *VAR_1;

 FUNC_3();

 VAR_1 = FUNC_1();
 if (!VAR_1)
  goto err;
 VAR_0->ctx = FUNC_0(VAR_1);

 if (FUNC_5(VAR_0))
  goto err;
 if (FUNC_4(VAR_0))
  goto err;

 return 0;

err:
 FUNC_2(VAR_0);
 return 1;
}
