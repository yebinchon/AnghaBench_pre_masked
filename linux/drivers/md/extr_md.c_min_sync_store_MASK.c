
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {unsigned long long resync_max; int lock; int resync_min; int recovery; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int,unsigned long long*) ;
 int FUNC_1 (unsigned long long,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static ssize_t
FUNC_5(struct mddev *VAR_3, const char *VAR_4, size_t VAR_5)
{
 unsigned long long VAR_6;
 int VAR_7;

 if (FUNC_0(VAR_4, 10, &VAR_6))
  return -VAR_1;

 FUNC_2(&VAR_3->lock);
 VAR_7 = -VAR_1;
 if (VAR_6 > VAR_3->resync_max)
  goto out_unlock;

 VAR_7 = -VAR_0;
 if (FUNC_4(VAR_2, &VAR_3->recovery))
  goto out_unlock;


 VAR_3->resync_min = FUNC_1(VAR_6, 8);
 VAR_7 = 0;

out_unlock:
 FUNC_3(&VAR_3->lock);
 return VAR_7 ?: VAR_5;
}
