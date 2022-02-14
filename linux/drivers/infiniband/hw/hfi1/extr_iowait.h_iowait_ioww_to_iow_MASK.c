
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iowait_work {struct iowait* iow; } ;
struct iowait {int dummy; } ;


 scalar_t__ FUNC_0 (struct iowait_work*) ;

__attribute__((used)) static inline struct iowait *FUNC_1(struct iowait_work *VAR_0)
{
 if (FUNC_0(VAR_0))
  return VAR_0->iow;
 return ((void*)0);
}
