
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qce_algo_ops {scalar_t__ type; int (* async_req_handle ) (struct crypto_async_request*) ;} ;
struct crypto_async_request {int tfm; } ;


 int FUNC_0 (struct qce_algo_ops**) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 struct qce_algo_ops** VAR_1 ;
 int FUNC_2 (struct crypto_async_request*) ;

__attribute__((used)) static int FUNC_3(struct crypto_async_request *VAR_2)
{
 int VAR_3 = -VAR_0, VAR_4;
 const struct qce_algo_ops *VAR_5;
 u32 VAR_6 = FUNC_1(VAR_2->tfm);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  VAR_5 = VAR_1[VAR_4];
  if (VAR_6 != VAR_5->type)
   continue;
  VAR_3 = VAR_5->async_req_handle(VAR_2);
  break;
 }

 return VAR_3;
}
