
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {int attr; } ;
struct TYPE_3__ {int len; int lock; scalar_t__* entries; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 scalar_t__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int FUNC_7(u64 VAR_7)
{
 int VAR_8, VAR_9;
 unsigned long VAR_10;
 u64 *VAR_11;

 if (VAR_3)
  return -VAR_1;

 VAR_8 = FUNC_3(&VAR_6.lock);
 if (VAR_8)
  return VAR_8;
 FUNC_5(&VAR_5, VAR_10);
 if (VAR_4.attr & VAR_2)
  VAR_8 = FUNC_0(VAR_7);
 else
  VAR_8 = FUNC_1(VAR_7);
 FUNC_6(&VAR_5, VAR_10);
 if (VAR_8)
  goto out;
 VAR_11 = VAR_6.entries;
 for (VAR_9 = 0; VAR_9 < VAR_6.len; VAR_9++) {
  if (VAR_11[VAR_9] == VAR_7)
   VAR_11[VAR_9] = VAR_0;
 }
 FUNC_2();
out:
 FUNC_4(&VAR_6.lock);
 return VAR_8;
}
