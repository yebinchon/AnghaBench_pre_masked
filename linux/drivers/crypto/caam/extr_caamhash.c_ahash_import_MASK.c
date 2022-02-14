
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct caam_hash_state {int buflen_0; int finup; int final; int update; int caam_ctx; int buf_0; } ;
struct caam_export_state {int buflen; int finup; int final; int update; int caam_ctx; int buf; } ;
struct ahash_request {int dummy; } ;


 struct caam_hash_state* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct caam_hash_state*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_0, const void *VAR_1)
{
 struct caam_hash_state *VAR_2 = FUNC_0(VAR_0);
 const struct caam_export_state *VAR_3 = VAR_1;

 FUNC_2(VAR_2, 0, sizeof(*VAR_2));
 FUNC_1(VAR_2->buf_0, VAR_3->buf, VAR_3->buflen);
 FUNC_1(VAR_2->caam_ctx, VAR_3->caam_ctx, sizeof(VAR_2->caam_ctx));
 VAR_2->buflen_0 = VAR_3->buflen;
 VAR_2->update = VAR_3->update;
 VAR_2->final = VAR_3->final;
 VAR_2->finup = VAR_3->finup;

 return 0;
}
