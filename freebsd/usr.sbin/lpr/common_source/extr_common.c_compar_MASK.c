
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jobqueue {scalar_t__ job_time; char* job_cfname; } ;


 int FUNC_0 (char*,char*) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const struct jobqueue *VAR_2, *VAR_3;

 VAR_2 = *(const struct jobqueue * const *)VAR_0;
 VAR_3 = *(const struct jobqueue * const *)VAR_1;

 if (VAR_2->job_time < VAR_3->job_time)
  return (-1);
 if (VAR_2->job_time > VAR_3->job_time)
  return (1);







 if ((VAR_2->job_cfname[3] == '9') && (VAR_3->job_cfname[3] == '0'))
  return (-1);
 if ((VAR_2->job_cfname[3] == '0') && (VAR_3->job_cfname[3] == '9'))
  return (1);
 return (FUNC_0(VAR_2->job_cfname, VAR_3->job_cfname));
}
