
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qce_device {int dummy; } ;
struct qce_algo_ops {int (* register_algs ) (struct qce_device*) ;} ;


 int FUNC_0 (struct qce_algo_ops**) ;
 int VAR_0 ;
 struct qce_algo_ops** VAR_1 ;
 int FUNC_1 (struct qce_device*) ;

__attribute__((used)) static int FUNC_2(struct qce_device *VAR_2)
{
 const struct qce_algo_ops *VAR_3;
 int VAR_4, VAR_5 = -VAR_0;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  VAR_3 = VAR_1[VAR_4];
  VAR_5 = VAR_3->register_algs(VAR_2);
  if (VAR_5)
   break;
 }

 return VAR_5;
}
