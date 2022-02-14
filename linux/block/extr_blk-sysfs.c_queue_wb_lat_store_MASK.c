
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_qos {int dummy; } ;
struct request_queue {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int s64 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct request_queue*) ;
 int FUNC_3 (struct request_queue*) ;
 scalar_t__ FUNC_4 (int*,char const*) ;
 int FUNC_5 (struct request_queue*) ;
 int FUNC_6 (struct request_queue*) ;
 scalar_t__ FUNC_7 (struct request_queue*) ;
 struct rq_qos* FUNC_8 (struct request_queue*) ;
 int FUNC_9 (struct request_queue*,int) ;

__attribute__((used)) static ssize_t FUNC_10(struct request_queue *VAR_1, const char *VAR_2,
      size_t VAR_3)
{
 struct rq_qos *VAR_4;
 ssize_t VAR_5;
 s64 VAR_6;

 VAR_5 = FUNC_4(&VAR_6, VAR_2);
 if (VAR_5 < 0)
  return VAR_5;
 if (VAR_6 < -1)
  return -VAR_0;

 VAR_4 = FUNC_8(VAR_1);
 if (!VAR_4) {
  VAR_5 = FUNC_7(VAR_1);
  if (VAR_5)
   return VAR_5;
 }

 if (VAR_6 == -1)
  VAR_6 = FUNC_5(VAR_1);
 else if (VAR_6 >= 0)
  VAR_6 *= 1000ULL;

 if (FUNC_6(VAR_1) == VAR_6)
  return VAR_3;






 FUNC_0(VAR_1);
 FUNC_1(VAR_1);

 FUNC_9(VAR_1, VAR_6);

 FUNC_3(VAR_1);
 FUNC_2(VAR_1);

 return VAR_3;
}
