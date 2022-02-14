
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alg {int name; } ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,void*,unsigned int*) ;
 int FUNC_3 (int *,int const*,int *) ;
 int FUNC_4 (int *,void const*,size_t) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,char*,int ,char const*,int ) ;

__attribute__((used)) static void
FUNC_8(struct alg *VAR_0, const EVP_MD *VAR_1, const void *VAR_2,
    size_t VAR_3, void *VAR_4, unsigned *VAR_5)
{
 EVP_MD_CTX *VAR_6;
 const char *VAR_7;
 int VAR_8;

 VAR_7 = "";

 VAR_6 = FUNC_5();
 if (VAR_6 == ((void*)0))
  goto err_out;

 VAR_8 = FUNC_3(VAR_6, VAR_1, ((void*)0));
 if (VAR_8 != 1)
  goto err_out;

 VAR_8 = FUNC_4(VAR_6, VAR_2, VAR_3);
 if (VAR_8 != 1)
  goto err_out;

 VAR_8 = FUNC_2(VAR_6, VAR_4, VAR_5);
 if (VAR_8 != 1)
  goto err_out;

 FUNC_6(VAR_6);
 return;

err_out:
 FUNC_7(1, "OpenSSL %s HASH failed%s: %s", VAR_0->name, VAR_7,
     FUNC_0(FUNC_1(), ((void*)0)));
}
