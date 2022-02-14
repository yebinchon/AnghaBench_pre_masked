
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int rq_timeout; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct request_queue *VAR_0, char *VAR_1)
{
 return FUNC_1(VAR_1, "%u\n", FUNC_0(VAR_0->rq_timeout));
}
