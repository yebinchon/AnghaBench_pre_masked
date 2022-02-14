
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahash_request {int dummy; } ;


 int FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct ahash_request*) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_0)
{
 int VAR_1, VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  goto out;

 VAR_2 = FUNC_2(VAR_0);
 VAR_1 = FUNC_0(VAR_0);

out:
 return VAR_2 ? VAR_2 : VAR_1;
}
