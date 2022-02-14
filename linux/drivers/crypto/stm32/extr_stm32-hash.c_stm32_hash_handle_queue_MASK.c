
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_hash_dev {int engine; } ;
struct ahash_request {int dummy; } ;


 int FUNC_0 (int ,struct ahash_request*) ;

__attribute__((used)) static int FUNC_1(struct stm32_hash_dev *VAR_0,
       struct ahash_request *VAR_1)
{
 return FUNC_0(VAR_0->engine, VAR_1);
}
