
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dev_pm_ops {int complete; int resume; int resume_early; int resume_noirq; int suspend_noirq; int suspend_late; int suspend; int prepare; } ;



__attribute__((used)) static bool FUNC_0(const struct dev_pm_ops *VAR_0)
{
 if (!VAR_0)
  return 1;

 return !VAR_0->prepare &&
        !VAR_0->suspend &&
        !VAR_0->suspend_late &&
        !VAR_0->suspend_noirq &&
        !VAR_0->resume_noirq &&
        !VAR_0->resume_early &&
        !VAR_0->resume &&
        !VAR_0->complete;
}
