
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (struct request_queue*) ;
 int FUNC_3 (struct request_queue*) ;

__attribute__((used)) static ssize_t FUNC_4(struct request_queue *VAR_1, char *VAR_2)
{
 if (!FUNC_3(VAR_1))
  return -VAR_0;

 return FUNC_1(VAR_2, "%llu\n", FUNC_0(FUNC_2(VAR_1), 1000));
}
