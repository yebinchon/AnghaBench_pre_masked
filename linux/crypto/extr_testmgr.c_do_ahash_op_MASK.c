
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_wait {int dummy; } ;
struct ahash_request {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,struct crypto_wait*) ;

__attribute__((used)) static int FUNC_3(int (*VAR_0)(struct ahash_request *VAR_1),
         struct ahash_request *VAR_2,
         struct crypto_wait *VAR_3, bool VAR_4)
{
 int VAR_5;

 if (VAR_4)
  FUNC_0();

 VAR_5 = VAR_0(VAR_2);

 if (VAR_4)
  FUNC_1();

 return FUNC_2(VAR_5, VAR_3);
}
