
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {long parallel_resync; scalar_t__ sync_thread; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int,long*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static ssize_t
FUNC_2(struct mddev *VAR_2, const char *VAR_3, size_t VAR_4)
{
 long VAR_5;

 if (FUNC_0(VAR_3, 10, &VAR_5))
  return -VAR_0;

 if (VAR_5 != 0 && VAR_5 != 1)
  return -VAR_0;

 VAR_2->parallel_resync = VAR_5;

 if (VAR_2->sync_thread)
  FUNC_1(&VAR_1);

 return VAR_4;
}
