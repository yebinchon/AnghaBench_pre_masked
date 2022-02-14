
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct sha3_state {int buf; int st; int rsiz; } ;
struct s390_sha_ctx {int func; int buf; int state; int count; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 struct s390_sha_ctx* FUNC_1 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_2(struct shash_desc *VAR_1, const void *VAR_2)
{
 struct s390_sha_ctx *VAR_3 = FUNC_1(VAR_1);
 const struct sha3_state *VAR_4 = VAR_2;

 VAR_3->count = VAR_4->rsiz;
 FUNC_0(VAR_3->state, VAR_4->st, sizeof(VAR_4->st));
 FUNC_0(VAR_3->buf, VAR_4->buf, sizeof(VAR_4->buf));
 VAR_3->func = VAR_0;

 return 0;
}
