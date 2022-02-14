
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct timespec64 {int dummy; } ;
struct TYPE_5__ {int host_time; int ref_time; int lock; } ;
struct TYPE_4__ {int (* read ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 struct timespec64 FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static struct timespec64 FUNC_4(void)
{
 struct timespec64 VAR_3;
 u64 VAR_4, VAR_5;
 unsigned long VAR_6;

 FUNC_1(&VAR_1.lock, VAR_6);
 VAR_5 = VAR_2->read(VAR_2);
 VAR_4 = VAR_1.host_time + (VAR_5 - VAR_1.ref_time);
 VAR_3 = FUNC_0((VAR_4 - VAR_0) * 100);
 FUNC_2(&VAR_1.lock, VAR_6);

 return VAR_3;
}
