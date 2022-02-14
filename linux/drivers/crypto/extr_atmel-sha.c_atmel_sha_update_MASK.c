
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_sha_reqctx {scalar_t__ total; int flags; scalar_t__ bufcnt; scalar_t__ buflen; scalar_t__ offset; int sg; } ;
struct ahash_request {scalar_t__ nbytes; int src; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct atmel_sha_reqctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct atmel_sha_reqctx*) ;
 int FUNC_2 (struct ahash_request*,int ) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_4)
{
 struct atmel_sha_reqctx *VAR_5 = FUNC_0(VAR_4);

 if (!VAR_4->nbytes)
  return 0;

 VAR_5->total = VAR_4->nbytes;
 VAR_5->sg = VAR_4->src;
 VAR_5->offset = 0;

 if (VAR_5->flags & VAR_2) {
  if (VAR_5->bufcnt + VAR_5->total < VAR_0)

   VAR_5->flags |= VAR_1;
 } else if (VAR_5->bufcnt + VAR_5->total < VAR_5->buflen) {
  FUNC_1(VAR_5);
  return 0;
 }
 return FUNC_2(VAR_4, VAR_3);
}
