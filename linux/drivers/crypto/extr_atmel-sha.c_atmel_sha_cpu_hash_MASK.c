
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atmel_sha_reqctx {int flags; int block_size; } ;
struct atmel_sha_dev {int tmp; struct ahash_request* req; } ;
struct ahash_request {int dummy; } ;
typedef int atmel_sha_fn_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct atmel_sha_reqctx* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct atmel_sha_dev*,int ) ;
 int FUNC_3 (struct atmel_sha_dev*,int *,unsigned int,int,int,int ) ;
 int FUNC_4 (struct atmel_sha_dev*,int ,int) ;
 int FUNC_5 (int *,void const*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct atmel_sha_dev *VAR_8,
         const void *VAR_9, unsigned int VAR_10,
         bool VAR_11,
         atmel_sha_fn_t VAR_12)
{
 struct ahash_request *VAR_13 = VAR_8->req;
 struct atmel_sha_reqctx *VAR_14 = FUNC_1(VAR_13);
 u32 VAR_15 = (VAR_11) ? VAR_10 : 0;
 u32 VAR_16 = VAR_6;

 if (!(FUNC_0(VAR_10, VAR_14->block_size) || VAR_11))
  return FUNC_2(VAR_8, -VAR_0);

 VAR_16 |= (VAR_14->flags & VAR_4);
 FUNC_4(VAR_8, VAR_5, VAR_16);
 FUNC_4(VAR_8, VAR_7, VAR_15);
 FUNC_4(VAR_8, VAR_1, VAR_15);
 FUNC_4(VAR_8, VAR_2, VAR_3);

 FUNC_5(&VAR_8->tmp, VAR_9, VAR_10);
 return FUNC_3(VAR_8, &VAR_8->tmp, VAR_10, 0, 1, VAR_12);
}
