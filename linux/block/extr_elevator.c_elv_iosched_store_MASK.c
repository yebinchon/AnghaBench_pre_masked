
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (struct request_queue*,char const*) ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct request_queue*) ;

ssize_t FUNC_3(struct request_queue *VAR_0, const char *VAR_1,
     size_t VAR_2)
{
 int VAR_3;

 if (!FUNC_2(VAR_0) || !FUNC_1(VAR_0))
  return VAR_2;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_3)
  return VAR_2;

 return VAR_3;
}
