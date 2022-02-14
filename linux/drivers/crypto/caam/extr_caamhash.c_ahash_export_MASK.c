
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct caam_hash_state {int buflen_1; int buflen_0; int finup; int final; int update; int * caam_ctx; int * buf_0; int * buf_1; scalar_t__ current_buf; } ;
struct caam_export_state {int buflen; int finup; int final; int update; int caam_ctx; int buf; } ;
struct ahash_request {int dummy; } ;


 struct caam_hash_state* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct ahash_request *VAR_0, void *VAR_1)
{
 struct caam_hash_state *VAR_2 = FUNC_0(VAR_0);
 struct caam_export_state *VAR_3 = VAR_1;
 int VAR_4;
 u8 *VAR_5;

 if (VAR_2->current_buf) {
  VAR_5 = VAR_2->buf_1;
  VAR_4 = VAR_2->buflen_1;
 } else {
  VAR_5 = VAR_2->buf_0;
  VAR_4 = VAR_2->buflen_0;
 }

 FUNC_1(VAR_3->buf, VAR_5, VAR_4);
 FUNC_1(VAR_3->caam_ctx, VAR_2->caam_ctx, sizeof(VAR_3->caam_ctx));
 VAR_3->buflen = VAR_4;
 VAR_3->update = VAR_2->update;
 VAR_3->final = VAR_2->final;
 VAR_3->finup = VAR_2->finup;

 return 0;
}
