
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fschmd_data {int watchdog_control; int watchdog_preset; int watchdog_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct fschmd_data *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_1->watchdog_lock);
 if (VAR_1->watchdog_control & VAR_0)
  VAR_2 = VAR_1->watchdog_preset * 60;
 else
  VAR_2 = VAR_1->watchdog_preset * 2;
 FUNC_1(&VAR_1->watchdog_lock);

 return VAR_2;
}
