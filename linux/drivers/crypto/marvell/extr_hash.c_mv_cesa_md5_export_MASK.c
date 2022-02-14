
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md5_state {int block; int byte_count; int hash; } ;
struct ahash_request {int dummy; } ;


 int FUNC_0 (struct ahash_request*,int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct ahash_request *VAR_0, void *VAR_1)
{
 struct md5_state *VAR_2 = VAR_1;

 return FUNC_0(VAR_0, VAR_2->hash,
        &VAR_2->byte_count, VAR_2->block);
}
