
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct git_hash_algo {int (* final_fn ) (int *,int *) ;int (* update_fn ) (int *,void const*,size_t) ;int (* init_fn ) (int *) ;} ;
typedef int git_hash_ctx ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,void const*,size_t) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static inline void FUNC_3(const struct git_hash_algo *VAR_0, git_hash_ctx *VAR_1, uint8_t *VAR_2, const void *VAR_3, size_t VAR_4)
{
 VAR_0->init_fn(VAR_1);
 VAR_0->update_fn(VAR_1, VAR_3, VAR_4);
 VAR_0->final_fn(VAR_2, VAR_1);
}
