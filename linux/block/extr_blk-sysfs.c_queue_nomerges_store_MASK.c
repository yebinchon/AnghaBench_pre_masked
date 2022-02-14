
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct request_queue*) ;
 int FUNC_1 (int ,struct request_queue*) ;
 scalar_t__ FUNC_2 (unsigned long*,char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_3(struct request_queue *VAR_2, const char *VAR_3,
        size_t VAR_4)
{
 unsigned long VAR_5;
 ssize_t VAR_6 = FUNC_2(&VAR_5, VAR_3, VAR_4);

 if (VAR_6 < 0)
  return VAR_6;

 FUNC_0(VAR_0, VAR_2);
 FUNC_0(VAR_1, VAR_2);
 if (VAR_5 == 2)
  FUNC_1(VAR_0, VAR_2);
 else if (VAR_5)
  FUNC_1(VAR_1, VAR_2);

 return VAR_6;
}
