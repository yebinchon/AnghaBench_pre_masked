
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_hash_request_ctx {int bufcnt; int flags; int buffer; } ;
struct stm32_hash_dev {struct ahash_request* req; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 struct stm32_hash_request_ctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct stm32_hash_dev*) ;
 int FUNC_2 (struct stm32_hash_dev*,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct stm32_hash_dev *VAR_1)
{
 struct ahash_request *VAR_2 = VAR_1->req;
 struct stm32_hash_request_ctx *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;
 int VAR_5 = VAR_3->bufcnt;

 VAR_3->bufcnt = 0;

 if (!(VAR_3->flags & VAR_0))
  VAR_4 = FUNC_1(VAR_1);
 else
  VAR_4 = FUNC_2(VAR_1, VAR_3->buffer, VAR_5, 1);


 return VAR_4;
}
