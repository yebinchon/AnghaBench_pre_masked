
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {int len; scalar_t__* entries; int lock; int refcount; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(int *VAR_4, u64 *VAR_5)
{
 int VAR_6 = 0;
 u64 *VAR_7;

 if (VAR_2)
  return -VAR_1;


 FUNC_0(!VAR_3.refcount);
 FUNC_0(*VAR_4 < 0 || *VAR_4 > VAR_3.len);

 FUNC_2(&VAR_3.lock);
 VAR_7 = VAR_3.entries;
 for (; *VAR_4 < VAR_3.len; (*VAR_4)++)
  if (VAR_7[*VAR_4] != VAR_0)
   break;

 if (*VAR_4 < VAR_3.len) {
  *VAR_5 = VAR_7[*VAR_4];
  (*VAR_4)++;
  goto out_unlock;
 }


 VAR_6 = FUNC_1();
 if (VAR_6 < 0)
  goto out_unlock;

 if (VAR_6 == 1) {
  *VAR_5 = VAR_3.entries[*VAR_4];
  (*VAR_4)++;
  VAR_6 = 0;
 } else {
  *VAR_4 = -1;
  *VAR_5 = VAR_0;
 }
out_unlock:
 FUNC_3(&VAR_3.lock);

 return VAR_6;
}
