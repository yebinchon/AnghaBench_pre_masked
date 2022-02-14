
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct request_queue*,int ) ;
 int FUNC_1 (char const*,int,unsigned int*) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static ssize_t FUNC_3(struct request_queue *VAR_1, const char *VAR_2,
      size_t VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, 10, &VAR_4);
 if (VAR_5 || VAR_4 == 0)
  return -VAR_0;

 FUNC_0(VAR_1, FUNC_2(VAR_4));

 return VAR_3;
}
