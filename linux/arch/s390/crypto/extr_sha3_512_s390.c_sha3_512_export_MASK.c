
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct sha3_state {int rsiz; int rsizw; int buf; int st; } ;
struct s390_sha_ctx {int count; int buf; int state; } ;


 int FUNC_0 (int ,int ,int) ;
 struct s390_sha_ctx* FUNC_1 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_2(struct shash_desc *VAR_0, void *VAR_1)
{
 struct s390_sha_ctx *VAR_2 = FUNC_1(VAR_0);
 struct sha3_state *VAR_3 = VAR_1;

 VAR_3->rsiz = VAR_2->count;
 VAR_3->rsizw = VAR_2->count >> 32;

 FUNC_0(VAR_3->st, VAR_2->state, sizeof(VAR_3->st));
 FUNC_0(VAR_3->buf, VAR_2->buf, sizeof(VAR_3->buf));

 return 0;
}
