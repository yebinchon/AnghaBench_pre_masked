
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iowait_work {int dummy; } ;
struct iowait {struct iowait_work* wait; } ;


 size_t VAR_0 ;

__attribute__((used)) static inline struct iowait_work *FUNC_0(struct iowait *VAR_1)
{
 return &VAR_1->wait[VAR_0];
}
