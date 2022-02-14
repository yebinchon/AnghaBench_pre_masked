
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qce_device {int dummy; } ;
struct qce_algo_ops {int (* unregister_algs ) (struct qce_device*) ;} ;


 int FUNC_0 (struct qce_algo_ops**) ;
 struct qce_algo_ops** VAR_0 ;
 int FUNC_1 (struct qce_device*) ;

__attribute__((used)) static void FUNC_2(struct qce_device *VAR_1)
{
 const struct qce_algo_ops *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_2 = VAR_0[VAR_3];
  VAR_2->unregister_algs(VAR_1);
 }
}
