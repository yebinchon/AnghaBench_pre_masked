
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mv_cesa_engine {int lock; struct crypto_async_request* req; scalar_t__ regs; } ;
struct mv_cesa_ctx {int dummy; } ;
struct crypto_async_request {int tfm; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mv_cesa_ctx* FUNC_0 (int ) ;
 int FUNC_1 (struct mv_cesa_ctx*,struct crypto_async_request*,int) ;
 struct crypto_async_request* FUNC_2 (struct mv_cesa_engine*) ;
 int FUNC_3 (struct mv_cesa_engine*) ;
 int FUNC_4 (struct mv_cesa_engine*,int) ;
 int FUNC_5 (struct mv_cesa_engine*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_5, void *VAR_6)
{
 struct mv_cesa_engine *VAR_7 = VAR_6;
 struct crypto_async_request *VAR_8;
 struct mv_cesa_ctx *VAR_9;
 u32 VAR_10, VAR_11;
 irqreturn_t VAR_12 = VAR_4;

 while (1) {
  int VAR_13;

  VAR_11 = FUNC_3(VAR_7);
  VAR_10 = FUNC_6(VAR_7->regs + VAR_1);

  if (!(VAR_10 & VAR_11))
   break;





  FUNC_9(~VAR_10, VAR_7->regs + VAR_0);
  FUNC_9(~VAR_10, VAR_7->regs + VAR_1);


  VAR_13 = FUNC_4(VAR_7, VAR_10 & VAR_11);
  VAR_12 = VAR_3;

  FUNC_7(&VAR_7->lock);
  VAR_8 = VAR_7->req;
  if (VAR_13 != -VAR_2)
   VAR_7->req = ((void*)0);
  FUNC_8(&VAR_7->lock);

  VAR_9 = FUNC_0(VAR_8->tfm);

  if (VAR_13 && VAR_13 != -VAR_2)
   FUNC_1(VAR_9, VAR_8, VAR_13);


  FUNC_5(VAR_7);


  while (1) {
   VAR_8 = FUNC_2(VAR_7);
   if (!VAR_8)
    break;

   VAR_9 = FUNC_0(VAR_8->tfm);
   FUNC_1(VAR_9, VAR_8, 0);
  }
 }

 return VAR_12;
}
