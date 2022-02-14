
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sha256_state {int buf; int state; int count; } ;
struct sha1_state {int buffer; int state; int count; } ;
struct qce_sha_reqctx {unsigned long flags; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 struct qce_sha_reqctx* FUNC_5 (struct ahash_request*) ;
 int FUNC_6 (struct ahash_request*,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct ahash_request *VAR_1, const void *VAR_2)
{
 struct qce_sha_reqctx *VAR_3 = FUNC_5(VAR_1);
 unsigned long VAR_4 = VAR_3->flags;
 bool VAR_5 = FUNC_4(VAR_4);
 int VAR_6 = -VAR_0;

 if (FUNC_0(VAR_4) || FUNC_1(VAR_4)) {
  const struct sha1_state *VAR_7 = VAR_2;

  VAR_6 = FUNC_6(VAR_1, VAR_7->count, VAR_7->state,
     VAR_7->buffer, VAR_5);
 } else if (FUNC_2(VAR_4) || FUNC_3(VAR_4)) {
  const struct sha256_state *VAR_8 = VAR_2;

  VAR_6 = FUNC_6(VAR_1, VAR_8->count, VAR_8->state,
     VAR_8->buf, VAR_5);
 }

 return VAR_6;
}
