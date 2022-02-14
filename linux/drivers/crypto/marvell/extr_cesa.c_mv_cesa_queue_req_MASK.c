
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_cesa_req {struct mv_cesa_engine* engine; } ;
struct mv_cesa_engine {int lock; int queue; } ;
struct crypto_async_request {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct crypto_async_request*) ;
 int FUNC_1 (struct mv_cesa_engine*) ;
 scalar_t__ FUNC_2 (struct mv_cesa_req*) ;
 int FUNC_3 (struct mv_cesa_engine*,struct mv_cesa_req*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct crypto_async_request *VAR_3,
        struct mv_cesa_req *VAR_4)
{
 int VAR_5;
 struct mv_cesa_engine *VAR_6 = VAR_4->engine;

 FUNC_4(&VAR_6->lock);
 VAR_5 = FUNC_0(&VAR_6->queue, VAR_3);
 if ((FUNC_2(VAR_4) == VAR_0) &&
     (VAR_5 == -VAR_2 || VAR_5 == -VAR_1))
  FUNC_3(VAR_6, VAR_4);
 FUNC_5(&VAR_6->lock);

 if (VAR_5 != -VAR_2)
  return VAR_5;

 FUNC_1(VAR_6);

 return -VAR_2;
}
