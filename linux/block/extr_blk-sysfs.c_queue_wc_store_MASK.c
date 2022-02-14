
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct request_queue*) ;
 int FUNC_1 (int ,struct request_queue*) ;
 int FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct request_queue *VAR_2, const char *VAR_3,
         size_t VAR_4)
{
 int VAR_5 = -1;

 if (!FUNC_2(VAR_3, "write back", 10))
  VAR_5 = 1;
 else if (!FUNC_2(VAR_3, "write through", 13) ||
   !FUNC_2(VAR_3, "none", 4))
  VAR_5 = 0;

 if (VAR_5 == -1)
  return -VAR_0;

 if (VAR_5)
  FUNC_1(VAR_1, VAR_2);
 else
  FUNC_0(VAR_1, VAR_2);

 return VAR_4;
}
