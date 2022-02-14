
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ahash_request*,int) ;
 int FUNC_1 (struct ahash_request*,int ) ;

__attribute__((used)) static int FUNC_2(struct ahash_request *VAR_3,
         int (*VAR_4)(struct ahash_request *))
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_5 = VAR_4(VAR_3);
 if (VAR_5 == -VAR_1 || VAR_5 == -VAR_0)
  return VAR_5;

 FUNC_0(VAR_3, VAR_5);

 return VAR_5;
}
