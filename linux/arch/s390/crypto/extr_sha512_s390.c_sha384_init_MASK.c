
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct s390_sha_ctx {int func; scalar_t__ count; int * state; } ;
typedef int __u64 ;


 int VAR_0 ;
 struct s390_sha_ctx* FUNC_0 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_1(struct shash_desc *VAR_1)
{
 struct s390_sha_ctx *VAR_2 = FUNC_0(VAR_1);

 *(__u64 *)&VAR_2->state[0] = 0xcbbb9d5dc1059ed8ULL;
 *(__u64 *)&VAR_2->state[2] = 0x629a292a367cd507ULL;
 *(__u64 *)&VAR_2->state[4] = 0x9159015a3070dd17ULL;
 *(__u64 *)&VAR_2->state[6] = 0x152fecd8f70e5939ULL;
 *(__u64 *)&VAR_2->state[8] = 0x67332667ffc00b31ULL;
 *(__u64 *)&VAR_2->state[10] = 0x8eb44a8768581511ULL;
 *(__u64 *)&VAR_2->state[12] = 0xdb0c2e0d64f98fa7ULL;
 *(__u64 *)&VAR_2->state[14] = 0x47b5481dbefa4fa4ULL;
 VAR_2->count = 0;
 VAR_2->func = VAR_0;

 return 0;
}
