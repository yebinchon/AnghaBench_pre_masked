
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int poll_nsec; TYPE_1__* mq_ops; } ;
typedef int ssize_t ;
struct TYPE_2__ {int poll; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int,int*) ;

__attribute__((used)) static ssize_t FUNC_1(struct request_queue *VAR_2, const char *VAR_3,
    size_t VAR_4)
{
 int VAR_5, VAR_6;

 if (!VAR_2->mq_ops || !VAR_2->mq_ops->poll)
  return -VAR_1;

 VAR_5 = FUNC_0(VAR_3, 10, &VAR_6);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_6 == VAR_0)
  VAR_2->poll_nsec = VAR_0;
 else if (VAR_6 >= 0)
  VAR_2->poll_nsec = VAR_6 * 1000;
 else
  return -VAR_1;

 return VAR_4;
}
