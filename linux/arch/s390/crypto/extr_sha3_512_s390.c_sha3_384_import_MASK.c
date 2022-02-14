
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct sha3_state {int buf; int st; int rsiz; int rsizw; } ;
struct s390_sha_ctx {int func; int buf; int state; int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 struct s390_sha_ctx* FUNC_1 (struct shash_desc*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct shash_desc *VAR_2, const void *VAR_3)
{
 struct s390_sha_ctx *VAR_4 = FUNC_1(VAR_2);
 const struct sha3_state *VAR_5 = VAR_3;

 if (FUNC_2(VAR_5->rsizw))
  return -VAR_1;
 VAR_4->count = VAR_5->rsiz;

 FUNC_0(VAR_4->state, VAR_5->st, sizeof(VAR_5->st));
 FUNC_0(VAR_4->buf, VAR_5->buf, sizeof(VAR_5->buf));
 VAR_4->func = VAR_0;

 return 0;
}
